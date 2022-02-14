
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sxgbe_rx_queue {int queue_no; struct sxgbe_priv_data* priv_ptr; } ;
struct TYPE_8__ {int rx_threshold; } ;
struct sxgbe_priv_data {int rx_tc; TYPE_4__ xstats; int ioaddr; TYPE_3__* hw; int napi; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {TYPE_2__* mtl; TYPE_1__* dma; } ;
struct TYPE_6__ {int (* set_rx_mtl_mode ) (int ,int ,int) ;} ;
struct TYPE_5__ {int (* rx_dma_int_status ) (int ,int ,TYPE_4__*) ;int (* disable_dma_irq ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct sxgbe_rx_queue *VAR_7 = (struct sxgbe_rx_queue *)VAR_5;
 struct sxgbe_priv_data *VAR_8 = VAR_7->priv_ptr;


 VAR_6 = VAR_8->hw->dma->rx_dma_int_status(VAR_8->ioaddr, VAR_7->queue_no,
        &VAR_8->xstats);

 if (FUNC_1((VAR_6 & VAR_2) && (FUNC_2(&VAR_8->napi)))) {
  VAR_8->hw->dma->disable_dma_irq(VAR_8->ioaddr, VAR_7->queue_no);
  FUNC_0(&VAR_8->napi);
 }


 if (FUNC_6((VAR_6 & VAR_3) &&
       (VAR_8->rx_tc != VAR_1) &&
       (VAR_8->rx_tc < 128))) {

  VAR_8->rx_tc += 32;
  VAR_8->hw->mtl->set_rx_mtl_mode(VAR_8->ioaddr,
            VAR_7->queue_no, VAR_8->rx_tc);
  VAR_8->xstats.rx_threshold = VAR_8->rx_tc;
 }

 return VAR_0;
}
