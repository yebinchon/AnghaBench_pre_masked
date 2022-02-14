
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sxgbe_tx_queue {scalar_t__ dirty_tx; scalar_t__ cur_tx; } ;
struct sxgbe_priv_data {TYPE_4__* dev; int ioaddr; TYPE_2__* hw; struct sxgbe_tx_queue** txq; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_7__ {int tx_errors; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct TYPE_6__ {TYPE_1__* dma; } ;
struct TYPE_5__ {int (* start_tx_queue ) (int ,int) ;int (* stop_tx_queue ) (int ,int) ;} ;


 struct netdev_queue* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (struct netdev_queue*) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct sxgbe_tx_queue*) ;

__attribute__((used)) static void FUNC_6(struct sxgbe_priv_data *VAR_0, int VAR_1)
{
 struct sxgbe_tx_queue *VAR_2 = VAR_0->txq[VAR_1];
 struct netdev_queue *VAR_3 = FUNC_0(VAR_0->dev,
          VAR_1);


 FUNC_1(VAR_3);


 VAR_0->hw->dma->stop_tx_queue(VAR_0->ioaddr, VAR_1);


 FUNC_5(VAR_2);


 VAR_2->cur_tx = 0;
 VAR_2->dirty_tx = 0;


 VAR_0->hw->dma->start_tx_queue(VAR_0->ioaddr, VAR_1);

 VAR_0->dev->stats.tx_errors++;


 FUNC_2(VAR_3);
}
