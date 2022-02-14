
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct myri10ge_tx_buf {scalar_t__ pkt_done; } ;
struct myri10ge_slice_state {scalar_t__ irq_claim; int napi; struct myri10ge_tx_buf tx; struct mcp_irq_data* fw_stats; struct myri10ge_priv* mgp; } ;
struct myri10ge_priv {struct myri10ge_slice_state* ss; int watchdog_work; TYPE_1__* dev; scalar_t__ irq_deassert; int msix_enabled; int msi_enabled; } ;
struct mcp_irq_data {int valid; int send_done_count; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int real_num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct myri10ge_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct myri10ge_slice_state*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_4, void *VAR_5)
{
 struct myri10ge_slice_state *VAR_6 = VAR_5;
 struct myri10ge_priv *VAR_7 = VAR_6->mgp;
 struct mcp_irq_data *VAR_8 = VAR_6->fw_stats;
 struct myri10ge_tx_buf *VAR_9 = &VAR_6->tx;
 u32 VAR_10;
 int VAR_11;



 if ((VAR_7->dev->real_num_tx_queues == 1) && (VAR_6 != VAR_7->ss)) {
  FUNC_7(&VAR_6->napi);
  return VAR_0;
 }


 if (FUNC_12(!VAR_8->valid))
  return VAR_1;



 if (VAR_8->valid & 1)
  FUNC_7(&VAR_6->napi);

 if (!VAR_7->msi_enabled && !VAR_7->msix_enabled) {
  FUNC_10(0, VAR_7->irq_deassert);
  if (!VAR_2)
   VAR_8->valid = 0;
  FUNC_4();
 } else
  VAR_8->valid = 0;


 VAR_11 = 0;
 while (1) {
  VAR_11++;

  VAR_10 = FUNC_9(VAR_8->send_done_count);
  if (VAR_10 != VAR_9->pkt_done)
   FUNC_6(VAR_6, (int)VAR_10);
  if (FUNC_12(VAR_11 > VAR_3)) {
   FUNC_8(VAR_7->dev, "irq stuck?\n");
   VAR_8->valid = 0;
   FUNC_11(&VAR_7->watchdog_work);
  }
  if (FUNC_3(VAR_8->valid == 0))
   break;
  FUNC_1();
  FUNC_0();
 }


 if (VAR_6 == VAR_7->ss)
  FUNC_5(VAR_7);

 FUNC_10(FUNC_2(3), VAR_6->irq_claim + 1);
 return VAR_0;
}
