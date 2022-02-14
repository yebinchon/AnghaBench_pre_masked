
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags_len; int address; } ;
union ibmveth_buf_desc {int desc; TYPE_1__ fields; } ;
typedef int u64 ;
struct net_device {int mtu; int irq; int name; int dev_addr; } ;
struct ibmveth_rx_q_entry {int dummy; } ;
struct TYPE_7__ {int queue_len; int num_slots; int toggle; int queue_dma; int queue_addr; scalar_t__ index; } ;
struct ibmveth_adapter {int napi; void* buffer_list_addr; void* filter_list_addr; TYPE_2__ rx_queue; void* buffer_list_dma; void* filter_list_dma; TYPE_4__* rx_buff_pool; void* bounce_buffer; void* bounce_buffer_dma; TYPE_3__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_9__ {scalar_t__ active; scalar_t__ size; } ;
struct TYPE_8__ {struct device dev; int unit_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (struct device*,int,int ,int ) ;
 void* FUNC_3 (struct device*,void*,int,int ) ;
 scalar_t__ FUNC_4 (struct device*,void*) ;
 int FUNC_5 (struct device*,void*,int,int ) ;
 int FUNC_6 (int ,struct net_device*) ;
 int FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 unsigned long FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct ibmveth_adapter*,TYPE_4__*) ;
 int FUNC_14 (int ,struct net_device*) ;
 unsigned long FUNC_15 (struct ibmveth_adapter*,union ibmveth_buf_desc,int ) ;
 int FUNC_16 (void*) ;
 void* FUNC_17 (int,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct net_device*,char*,...) ;
 int FUNC_21 (struct net_device*,char*,...) ;
 struct ibmveth_adapter* FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (int ,int (*) (int ,struct net_device*),int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_25(struct net_device *VAR_10)
{
 struct ibmveth_adapter *VAR_11 = FUNC_22(VAR_10);
 u64 VAR_12;
 int VAR_13 = 1;
 unsigned long VAR_14;
 int VAR_15;
 union ibmveth_buf_desc VAR_16;
 int VAR_17;
 struct device *VAR_18;

 FUNC_20(VAR_10, "open starting\n");

 FUNC_19(&VAR_11->napi);

 for(VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
  VAR_13 += VAR_11->rx_buff_pool[VAR_17].size;

 VAR_15 = -VAR_1;
 VAR_11->buffer_list_addr = (void*) FUNC_8(VAR_3);
 if (!VAR_11->buffer_list_addr) {
  FUNC_21(VAR_10, "unable to allocate list pages\n");
  goto out;
 }

 VAR_11->filter_list_addr = (void*) FUNC_8(VAR_3);
 if (!VAR_11->filter_list_addr) {
  FUNC_21(VAR_10, "unable to allocate filter pages\n");
  goto out_free_buffer_list;
 }

 VAR_18 = &VAR_11->vdev->dev;

 VAR_11->rx_queue.queue_len = sizeof(struct ibmveth_rx_q_entry) *
      VAR_13;
 VAR_11->rx_queue.queue_addr =
  FUNC_1(VAR_18, VAR_11->rx_queue.queue_len,
       &VAR_11->rx_queue.queue_dma, VAR_3);
 if (!VAR_11->rx_queue.queue_addr)
  goto out_free_filter_list;

 VAR_11->buffer_list_dma = FUNC_3(VAR_18,
   VAR_11->buffer_list_addr, 4096, VAR_0);
 if (FUNC_4(VAR_18, VAR_11->buffer_list_dma)) {
  FUNC_21(VAR_10, "unable to map buffer list pages\n");
  goto out_free_queue_mem;
 }

 VAR_11->filter_list_dma = FUNC_3(VAR_18,
   VAR_11->filter_list_addr, 4096, VAR_0);
 if (FUNC_4(VAR_18, VAR_11->filter_list_dma)) {
  FUNC_21(VAR_10, "unable to map filter list pages\n");
  goto out_unmap_buffer_list;
 }

 VAR_11->rx_queue.index = 0;
 VAR_11->rx_queue.num_slots = VAR_13;
 VAR_11->rx_queue.toggle = 1;

 VAR_12 = FUNC_12(VAR_10->dev_addr);

 VAR_16.fields.flags_len = VAR_7 |
     VAR_11->rx_queue.queue_len;
 VAR_16.fields.address = VAR_11->rx_queue.queue_dma;

 FUNC_20(VAR_10, "buffer list @ 0x%p\n", VAR_11->buffer_list_addr);
 FUNC_20(VAR_10, "filter list @ 0x%p\n", VAR_11->filter_list_addr);
 FUNC_20(VAR_10, "receive q   @ 0x%p\n", VAR_11->rx_queue.queue_addr);

 FUNC_10(VAR_11->vdev->unit_address, VAR_9);

 VAR_14 = FUNC_15(VAR_11, VAR_16, VAR_12);

 if (VAR_14 != VAR_5) {
  FUNC_21(VAR_10, "h_register_logical_lan failed with %ld\n",
      VAR_14);
  FUNC_21(VAR_10, "buffer TCE:0x%llx filter TCE:0x%llx rxq "
      "desc:0x%llx MAC:0x%llx\n",
         VAR_11->buffer_list_dma,
         VAR_11->filter_list_dma,
         VAR_16.desc,
         VAR_12);
  VAR_15 = -VAR_2;
  goto out_unmap_filter_list;
 }

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  if (!VAR_11->rx_buff_pool[VAR_17].active)
   continue;
  if (FUNC_11(&VAR_11->rx_buff_pool[VAR_17])) {
   FUNC_21(VAR_10, "unable to alloc pool\n");
   VAR_11->rx_buff_pool[VAR_17].active = 0;
   VAR_15 = -VAR_1;
   goto out_free_buffer_pools;
  }
 }

 FUNC_20(VAR_10, "registering irq 0x%x\n", VAR_10->irq);
 VAR_15 = FUNC_24(VAR_10->irq, FUNC_14, 0, VAR_10->name,
    VAR_10);
 if (VAR_15 != 0) {
  FUNC_21(VAR_10, "unable to request irq 0x%x, rc %d\n",
      VAR_10->irq, VAR_15);
  do {
   VAR_14 = FUNC_9(VAR_11->vdev->unit_address);
  } while (FUNC_0(VAR_14) || (VAR_14 == VAR_4));

  goto out_free_buffer_pools;
 }

 VAR_15 = -VAR_1;
 VAR_11->bounce_buffer =
     FUNC_17(VAR_10->mtu + VAR_6, VAR_3);
 if (!VAR_11->bounce_buffer)
  goto out_free_irq;

 VAR_11->bounce_buffer_dma =
     FUNC_3(&VAR_11->vdev->dev, VAR_11->bounce_buffer,
      VAR_10->mtu + VAR_6, VAR_0);
 if (FUNC_4(VAR_18, VAR_11->bounce_buffer_dma)) {
  FUNC_21(VAR_10, "unable to map bounce buffer\n");
  goto out_free_bounce_buffer;
 }

 FUNC_20(VAR_10, "initial replenish cycle\n");
 FUNC_14(VAR_10->irq, VAR_10);

 FUNC_23(VAR_10);

 FUNC_20(VAR_10, "open complete\n");

 return 0;

out_free_bounce_buffer:
 FUNC_16(VAR_11->bounce_buffer);
out_free_irq:
 FUNC_6(VAR_10->irq, VAR_10);
out_free_buffer_pools:
 while (--VAR_17 >= 0) {
  if (VAR_11->rx_buff_pool[VAR_17].active)
   FUNC_13(VAR_11,
       &VAR_11->rx_buff_pool[VAR_17]);
 }
out_unmap_filter_list:
 FUNC_5(VAR_18, VAR_11->filter_list_dma, 4096,
    VAR_0);
out_unmap_buffer_list:
 FUNC_5(VAR_18, VAR_11->buffer_list_dma, 4096,
    VAR_0);
out_free_queue_mem:
 FUNC_2(VAR_18, VAR_11->rx_queue.queue_len,
     VAR_11->rx_queue.queue_addr,
     VAR_11->rx_queue.queue_dma);
out_free_filter_list:
 FUNC_7((unsigned long)VAR_11->filter_list_addr);
out_free_buffer_list:
 FUNC_7((unsigned long)VAR_11->buffer_list_addr);
out:
 FUNC_18(&VAR_11->napi);
 return VAR_15;
}
