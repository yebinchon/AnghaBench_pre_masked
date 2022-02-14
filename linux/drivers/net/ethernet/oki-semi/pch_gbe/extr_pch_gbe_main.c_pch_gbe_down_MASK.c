
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ error_state; } ;
struct pch_gbe_rx_ring {int * rx_buff_pool; scalar_t__ rx_buff_pool_size; scalar_t__ rx_buff_pool_logic; } ;
struct pch_gbe_adapter {struct pci_dev* pdev; struct pch_gbe_rx_ring* rx_ring; int tx_ring; int tx_queue_len; int watchdog_timer; int irq_sem; int napi; struct net_device* netdev; } ;
struct net_device {int tx_queue_len; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pch_gbe_adapter*,struct pch_gbe_rx_ring*) ;
 int FUNC_6 (struct pch_gbe_adapter*,int ) ;
 int FUNC_7 (struct pch_gbe_adapter*) ;
 int FUNC_8 (struct pch_gbe_adapter*) ;
 int FUNC_9 (struct pch_gbe_adapter*) ;
 scalar_t__ VAR_0 ;
 int FUNC_10 (struct pci_dev*,scalar_t__,int *,scalar_t__) ;

void FUNC_11(struct pch_gbe_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct pci_dev *VAR_3 = VAR_1->pdev;
 struct pch_gbe_rx_ring *VAR_4 = VAR_1->rx_ring;



 FUNC_2(&VAR_1->napi);
 FUNC_0(&VAR_1->irq_sem, 0);

 FUNC_8(VAR_1);
 FUNC_7(VAR_1);

 FUNC_1(&VAR_1->watchdog_timer);

 VAR_2->tx_queue_len = VAR_1->tx_queue_len;
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);

 if ((VAR_3->error_state) && (VAR_3->error_state != VAR_0))
  FUNC_9(VAR_1);
 FUNC_6(VAR_1, VAR_1->tx_ring);
 FUNC_5(VAR_1, VAR_1->rx_ring);

 FUNC_10(VAR_1->pdev, VAR_4->rx_buff_pool_size,
       VAR_4->rx_buff_pool, VAR_4->rx_buff_pool_logic);
 VAR_4->rx_buff_pool_logic = 0;
 VAR_4->rx_buff_pool_size = 0;
 VAR_4->rx_buff_pool = ((void*)0);
}
