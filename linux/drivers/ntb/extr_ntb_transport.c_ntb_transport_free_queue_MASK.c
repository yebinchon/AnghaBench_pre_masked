
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dev; } ;
struct ntb_transport_qp {int active; int qp_num; TYPE_2__* transport; int tx_free_q; int ntb_tx_free_q_lock; int rx_post_q; int ntb_rx_q_lock; int rx_pend_q; int rx_free_q; int * event_handler; int * tx_handler; int * rx_handler; int * cb_data; int link_work; int rxc_db_work; TYPE_3__* ndev; int last_cookie; struct dma_chan* rx_dma_chan; int tx_mw_size; int tx_mw_dma_addr; struct dma_chan* tx_dma_chan; } ;
struct ntb_queue_entry {int dummy; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_6__ {struct pci_dev* pdev; } ;
struct TYPE_5__ {int qp_bitmap_free; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (struct dma_chan*,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct dma_chan*) ;
 int FUNC_8 (struct ntb_queue_entry*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 struct ntb_queue_entry* FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct ntb_transport_qp *VAR_1)
{
 struct pci_dev *VAR_2;
 struct ntb_queue_entry *VAR_3;
 u64 VAR_4;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->ndev->pdev;

 VAR_1->active = 0;

 if (VAR_1->tx_dma_chan) {
  struct dma_chan *VAR_5 = VAR_1->tx_dma_chan;



  VAR_1->tx_dma_chan = ((void*)0);




  FUNC_5(VAR_5, VAR_1->last_cookie);
  FUNC_7(VAR_5);

  FUNC_6(VAR_5->device->dev,
       VAR_1->tx_mw_dma_addr, VAR_1->tx_mw_size,
       VAR_0, 0);

  FUNC_4(VAR_5);
 }

 if (VAR_1->rx_dma_chan) {
  struct dma_chan *VAR_6 = VAR_1->rx_dma_chan;



  VAR_1->rx_dma_chan = ((void*)0);




  FUNC_5(VAR_6, VAR_1->last_cookie);
  FUNC_7(VAR_6);
  FUNC_4(VAR_6);
 }

 VAR_4 = FUNC_0(VAR_1->qp_num);

 FUNC_9(VAR_1->ndev, VAR_4);
 FUNC_11(&VAR_1->rxc_db_work);

 FUNC_1(&VAR_1->link_work);

 VAR_1->cb_data = ((void*)0);
 VAR_1->rx_handler = ((void*)0);
 VAR_1->tx_handler = ((void*)0);
 VAR_1->event_handler = ((void*)0);

 while ((VAR_3 = FUNC_10(&VAR_1->ntb_rx_q_lock, &VAR_1->rx_free_q)))
  FUNC_8(VAR_3);

 while ((VAR_3 = FUNC_10(&VAR_1->ntb_rx_q_lock, &VAR_1->rx_pend_q))) {
  FUNC_3(&VAR_2->dev, "Freeing item from non-empty rx_pend_q\n");
  FUNC_8(VAR_3);
 }

 while ((VAR_3 = FUNC_10(&VAR_1->ntb_rx_q_lock, &VAR_1->rx_post_q))) {
  FUNC_3(&VAR_2->dev, "Freeing item from non-empty rx_post_q\n");
  FUNC_8(VAR_3);
 }

 while ((VAR_3 = FUNC_10(&VAR_1->ntb_tx_free_q_lock, &VAR_1->tx_free_q)))
  FUNC_8(VAR_3);

 VAR_1->transport->qp_bitmap_free |= VAR_4;

 FUNC_2(&VAR_2->dev, "NTB Transport QP %d freed\n", VAR_1->qp_num);
}
