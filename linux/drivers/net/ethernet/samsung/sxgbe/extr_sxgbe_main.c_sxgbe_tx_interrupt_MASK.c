
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sxgbe_tx_queue {int queue_no; struct sxgbe_priv_data* priv_ptr; } ;
struct TYPE_8__ {int tx_threshold; } ;
struct sxgbe_priv_data {int tx_tc; TYPE_4__ xstats; int ioaddr; TYPE_3__* hw; int napi; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {TYPE_2__* mtl; TYPE_1__* dma; } ;
struct TYPE_6__ {int (* set_tx_mtl_mode ) (int ,int ,int) ;} ;
struct TYPE_5__ {int (* tx_dma_int_status ) (int ,int ,TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct sxgbe_priv_data*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 int VAR_7;
 struct sxgbe_tx_queue *VAR_8 = (struct sxgbe_tx_queue *)VAR_6;
 struct sxgbe_priv_data *VAR_9 = VAR_8->priv_ptr;


 VAR_7 = VAR_9->hw->dma->tx_dma_int_status(VAR_9->ioaddr, VAR_8->queue_no,
        &VAR_9->xstats);

 if (FUNC_0((VAR_7 & VAR_2)))
  FUNC_1(&VAR_9->napi);


 if (FUNC_5((VAR_7 & VAR_4)))
  FUNC_4(VAR_9, VAR_8->queue_no);


 if (FUNC_5((VAR_7 & VAR_3) &&
       (VAR_9->tx_tc != VAR_1) &&
       (VAR_9->tx_tc < 512))) {

  VAR_9->tx_tc += (VAR_9->tx_tc < 128) ? 32 : 64;
  VAR_9->hw->mtl->set_tx_mtl_mode(VAR_9->ioaddr,
            VAR_8->queue_no, VAR_9->tx_tc);
  VAR_9->xstats.tx_threshold = VAR_9->tx_tc;
 }

 return VAR_0;
}
