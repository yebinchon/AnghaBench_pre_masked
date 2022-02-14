
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int irq; } ;
struct TYPE_5__ {int queue_dma; int queue_addr; int queue_len; } ;
struct ibmveth_adapter {int bounce_buffer; TYPE_3__* netdev; int bounce_buffer_dma; TYPE_2__* vdev; TYPE_4__* rx_buff_pool; TYPE_1__ rx_queue; scalar_t__ filter_list_addr; int filter_list_dma; scalar_t__ buffer_list_addr; int buffer_list_dma; int pool_config; int napi; } ;
struct device {int dummy; } ;
struct TYPE_8__ {scalar_t__ active; } ;
struct TYPE_7__ {int mtu; } ;
struct TYPE_6__ {struct device dev; int unit_address; } ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (long) ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct device*,int ,int,int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (unsigned long) ;
 long FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ibmveth_adapter*,TYPE_4__*) ;
 int FUNC_8 (struct ibmveth_adapter*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net_device*,char*) ;
 int FUNC_12 (struct net_device*,char*,long) ;
 struct ibmveth_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_6)
{
 struct ibmveth_adapter *VAR_7 = FUNC_13(VAR_6);
 struct device *VAR_8 = &VAR_7->vdev->dev;
 long VAR_9;
 int VAR_10;

 FUNC_11(VAR_6, "close starting\n");

 FUNC_10(&VAR_7->napi);

 if (!VAR_7->pool_config)
  FUNC_14(VAR_6);

 FUNC_6(VAR_7->vdev->unit_address, VAR_5);

 do {
  VAR_9 = FUNC_5(VAR_7->vdev->unit_address);
 } while (FUNC_0(VAR_9) || (VAR_9 == VAR_1));

 if (VAR_9 != VAR_2) {
  FUNC_12(VAR_6, "h_free_logical_lan failed with %lx, "
      "continuing with close\n", VAR_9);
 }

 FUNC_3(VAR_6->irq, VAR_6);

 FUNC_8(VAR_7);

 FUNC_2(VAR_8, VAR_7->buffer_list_dma, 4096,
    VAR_0);
 FUNC_4((unsigned long)VAR_7->buffer_list_addr);

 FUNC_2(VAR_8, VAR_7->filter_list_dma, 4096,
    VAR_0);
 FUNC_4((unsigned long)VAR_7->filter_list_addr);

 FUNC_1(VAR_8, VAR_7->rx_queue.queue_len,
     VAR_7->rx_queue.queue_addr,
     VAR_7->rx_queue.queue_dma);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  if (VAR_7->rx_buff_pool[VAR_10].active)
   FUNC_7(VAR_7,
       &VAR_7->rx_buff_pool[VAR_10]);

 FUNC_2(&VAR_7->vdev->dev, VAR_7->bounce_buffer_dma,
    VAR_7->netdev->mtu + VAR_3,
    VAR_0);
 FUNC_9(VAR_7->bounce_buffer);

 FUNC_11(VAR_6, "close complete\n");

 return 0;
}
