
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bnx2 {int num_req_rx_rings; int num_req_tx_rings; int irq_nvecs; int flags; int num_rx_rings; TYPE_3__* dev; void* num_tx_rings; TYPE_2__* pdev; TYPE_1__* irq_tbl; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int vector; int handler; int name; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnx2*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,void*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct bnx2 *VAR_10, int VAR_11)
{
 int VAR_12 = FUNC_4();
 int VAR_13;

 if (!VAR_10->num_req_rx_rings)
  VAR_13 = FUNC_2(VAR_12 + 1, VAR_10->num_req_tx_rings);
 else if (!VAR_10->num_req_tx_rings)
  VAR_13 = FUNC_2(VAR_12, VAR_10->num_req_rx_rings);
 else
  VAR_13 = FUNC_2(VAR_10->num_req_rx_rings, VAR_10->num_req_tx_rings);

 VAR_13 = FUNC_3(VAR_13, VAR_6);

 VAR_10->irq_tbl[0].handler = VAR_7;
 FUNC_9(VAR_10->irq_tbl[0].name, VAR_10->dev->name);
 VAR_10->irq_nvecs = 1;
 VAR_10->irq_tbl[0].vector = VAR_10->pdev->irq;

 if ((VAR_10->flags & VAR_1) && !VAR_11)
  FUNC_1(VAR_10, VAR_13);

 if ((VAR_10->flags & VAR_2) && !VAR_11 &&
     !(VAR_10->flags & VAR_5)) {
  if (FUNC_7(VAR_10->pdev) == 0) {
   VAR_10->flags |= VAR_4;
   if (FUNC_0(VAR_10) == VAR_0) {
    VAR_10->flags |= VAR_3;
    VAR_10->irq_tbl[0].handler = VAR_9;
   } else
    VAR_10->irq_tbl[0].handler = VAR_8;

   VAR_10->irq_tbl[0].vector = VAR_10->pdev->irq;
  }
 }

 if (!VAR_10->num_req_tx_rings)
  VAR_10->num_tx_rings = FUNC_8(VAR_10->irq_nvecs);
 else
  VAR_10->num_tx_rings = FUNC_3(VAR_10->irq_nvecs, VAR_10->num_req_tx_rings);

 if (!VAR_10->num_req_rx_rings)
  VAR_10->num_rx_rings = VAR_10->irq_nvecs;
 else
  VAR_10->num_rx_rings = FUNC_3(VAR_10->irq_nvecs, VAR_10->num_req_rx_rings);

 FUNC_6(VAR_10->dev, VAR_10->num_tx_rings);

 return FUNC_5(VAR_10->dev, VAR_10->num_rx_rings);
}
