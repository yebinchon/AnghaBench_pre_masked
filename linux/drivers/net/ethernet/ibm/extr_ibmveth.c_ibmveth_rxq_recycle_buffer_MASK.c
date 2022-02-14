
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags_len; int address; } ;
union ibmveth_buf_desc {int desc; TYPE_1__ fields; } ;
typedef int u64 ;
typedef size_t u32 ;
struct TYPE_9__ {size_t index; size_t num_slots; int toggle; TYPE_3__* queue_addr; } ;
struct ibmveth_adapter {TYPE_4__ rx_queue; int netdev; TYPE_2__* vdev; TYPE_5__* rx_buff_pool; } ;
struct TYPE_10__ {unsigned int size; int buff_size; int * dma_addr; int active; } ;
struct TYPE_8__ {int correlator; } ;
struct TYPE_7__ {int unit_address; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ibmveth_adapter*,TYPE_5__*) ;
 int FUNC_3 (struct ibmveth_adapter*,int) ;
 int FUNC_4 (struct ibmveth_adapter*) ;
 int FUNC_5 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ibmveth_adapter *VAR_3)
{
 u32 VAR_4 = VAR_3->rx_queue.index;
 u64 VAR_5 = VAR_3->rx_queue.queue_addr[VAR_4].correlator;
 unsigned int VAR_6 = VAR_5 >> 32;
 unsigned int VAR_7 = VAR_5 & 0xffffffffUL;
 union ibmveth_buf_desc VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 1;

 FUNC_0(VAR_6 >= VAR_2);
 FUNC_0(VAR_7 >= VAR_3->rx_buff_pool[VAR_6].size);

 if (!VAR_3->rx_buff_pool[VAR_6].active) {
  FUNC_4(VAR_3);
  FUNC_2(VAR_3, &VAR_3->rx_buff_pool[VAR_6]);
  goto out;
 }

 VAR_8.fields.flags_len = VAR_1 |
  VAR_3->rx_buff_pool[VAR_6].buff_size;
 VAR_8.fields.address = VAR_3->rx_buff_pool[VAR_6].dma_addr[VAR_7];

 VAR_9 = FUNC_1(VAR_3->vdev->unit_address, VAR_8.desc);

 if (VAR_9 != VAR_0) {
  FUNC_5(VAR_3->netdev, "h_add_logical_lan_buffer failed "
      "during recycle rc=%ld", VAR_9);
  FUNC_3(VAR_3, VAR_3->rx_queue.queue_addr[VAR_3->rx_queue.index].correlator);
  VAR_10 = 0;
 }

 if (++VAR_3->rx_queue.index == VAR_3->rx_queue.num_slots) {
  VAR_3->rx_queue.index = 0;
  VAR_3->rx_queue.toggle = !VAR_3->rx_queue.toggle;
 }

out:
 return VAR_10;
}
