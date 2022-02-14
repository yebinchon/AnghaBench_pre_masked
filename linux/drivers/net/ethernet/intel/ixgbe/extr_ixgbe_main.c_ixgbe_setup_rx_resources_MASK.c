
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct ixgbe_rx_buffer {int dummy; } ;
struct ixgbe_ring {int count; int size; int * rx_buffer_info; int xdp_prog; int queue_index; int xdp_rxq; scalar_t__ next_to_use; scalar_t__ next_to_clean; void* desc; int dma; TYPE_1__* q_vector; struct device* dev; } ;
struct ixgbe_adapter {int xdp_prog; int netdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int numa_node; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 void* FUNC_3 (struct device*,int,int *,int ) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;

int FUNC_9(struct ixgbe_adapter *VAR_3,
        struct ixgbe_ring *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 int VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = VAR_2;
 int VAR_8;

 VAR_8 = sizeof(struct ixgbe_rx_buffer) * VAR_4->count;

 if (VAR_4->q_vector)
  VAR_7 = VAR_4->q_vector->numa_node;

 VAR_4->rx_buffer_info = FUNC_7(VAR_8, VAR_7);
 if (!VAR_4->rx_buffer_info)
  VAR_4->rx_buffer_info = FUNC_6(VAR_8);
 if (!VAR_4->rx_buffer_info)
  goto err;


 VAR_4->size = VAR_4->count * sizeof(union ixgbe_adv_rx_desc);
 VAR_4->size = FUNC_0(VAR_4->size, 4096);

 FUNC_4(VAR_5, VAR_7);
 VAR_4->desc = FUNC_3(VAR_5,
        VAR_4->size,
        &VAR_4->dma,
        VAR_1);
 FUNC_4(VAR_5, VAR_6);
 if (!VAR_4->desc)
  VAR_4->desc = FUNC_3(VAR_5, VAR_4->size,
         &VAR_4->dma, VAR_1);
 if (!VAR_4->desc)
  goto err;

 VAR_4->next_to_clean = 0;
 VAR_4->next_to_use = 0;


 if (FUNC_8(&VAR_4->xdp_rxq, VAR_3->netdev,
        VAR_4->queue_index) < 0)
  goto err;

 VAR_4->xdp_prog = VAR_3->xdp_prog;

 return 0;
err:
 FUNC_5(VAR_4->rx_buffer_info);
 VAR_4->rx_buffer_info = ((void*)0);
 FUNC_1(VAR_5, "Unable to allocate memory for the Rx descriptor ring\n");
 return -VAR_0;
}
