
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct ixgbevf_rx_buffer {int dummy; } ;
struct ixgbevf_ring {int count; int size; int dev; int * rx_buffer_info; int xdp_prog; int queue_index; int xdp_rxq; int desc; int dma; int syncp; } ;
struct ixgbevf_adapter {int xdp_prog; int netdev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;

int FUNC_7(struct ixgbevf_adapter *VAR_2,
          struct ixgbevf_ring *VAR_3)
{
 int VAR_4;

 VAR_4 = sizeof(struct ixgbevf_rx_buffer) * VAR_3->count;
 VAR_3->rx_buffer_info = FUNC_5(VAR_4);
 if (!VAR_3->rx_buffer_info)
  goto err;

 FUNC_3(&VAR_3->syncp);


 VAR_3->size = VAR_3->count * sizeof(union ixgbe_adv_rx_desc);
 VAR_3->size = FUNC_0(VAR_3->size, 4096);

 VAR_3->desc = FUNC_2(VAR_3->dev, VAR_3->size,
        &VAR_3->dma, VAR_1);

 if (!VAR_3->desc)
  goto err;


 if (FUNC_6(&VAR_3->xdp_rxq, VAR_2->netdev,
        VAR_3->queue_index) < 0)
  goto err;

 VAR_3->xdp_prog = VAR_2->xdp_prog;

 return 0;
err:
 FUNC_4(VAR_3->rx_buffer_info);
 VAR_3->rx_buffer_info = ((void*)0);
 FUNC_1(VAR_3->dev, "Unable to allocate memory for the Rx descriptor ring\n");
 return -VAR_0;
}
