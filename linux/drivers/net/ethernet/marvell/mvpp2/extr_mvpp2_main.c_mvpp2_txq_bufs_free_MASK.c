
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvpp2_txq_pcpu_buf {scalar_t__ skb; int size; int dma; } ;
struct mvpp2_txq_pcpu {int txq_get_index; struct mvpp2_txq_pcpu_buf* buffs; } ;
struct mvpp2_tx_queue {int dummy; } ;
struct mvpp2_port {TYPE_1__* dev; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvpp2_txq_pcpu*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct mvpp2_txq_pcpu*) ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_1,
    struct mvpp2_tx_queue *VAR_2,
    struct mvpp2_txq_pcpu *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct mvpp2_txq_pcpu_buf *VAR_6 =
   VAR_3->buffs + VAR_3->txq_get_index;

  if (!FUNC_0(VAR_3, VAR_6->dma))
   FUNC_2(VAR_1->dev->dev.parent, VAR_6->dma,
      VAR_6->size, VAR_0);
  if (VAR_6->skb)
   FUNC_1(VAR_6->skb);

  FUNC_3(VAR_3);
 }
}
