
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
struct ixgbevf_tx_buffer {int dummy; } ;
struct ixgbevf_ring {int count; int size; int * tx_buffer_info; int desc; int dma; int dev; int syncp; int netdev; } ;
struct ixgbevf_adapter {int hw; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int *,char*) ;
 struct ixgbevf_adapter* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;

int FUNC_7(struct ixgbevf_ring *VAR_2)
{
 struct ixgbevf_adapter *VAR_3 = FUNC_3(VAR_2->netdev);
 int VAR_4;

 VAR_4 = sizeof(struct ixgbevf_tx_buffer) * VAR_2->count;
 VAR_2->tx_buffer_info = FUNC_6(VAR_4);
 if (!VAR_2->tx_buffer_info)
  goto err;

 FUNC_4(&VAR_2->syncp);


 VAR_2->size = VAR_2->count * sizeof(union ixgbe_adv_tx_desc);
 VAR_2->size = FUNC_0(VAR_2->size, 4096);

 VAR_2->desc = FUNC_1(VAR_2->dev, VAR_2->size,
        &VAR_2->dma, VAR_1);
 if (!VAR_2->desc)
  goto err;

 return 0;

err:
 FUNC_5(VAR_2->tx_buffer_info);
 VAR_2->tx_buffer_info = ((void*)0);
 FUNC_2(&VAR_3->hw, "Unable to allocate memory for the transmit descriptor ring\n");
 return -VAR_0;
}
