
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags_len; void* address; } ;
union ibmveth_buf_desc {int desc; TYPE_1__ fields; } ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ibmveth_buff_pool {scalar_t__ size; int buff_size; unsigned int consumer_index; unsigned int* free_map; int available; void** dma_addr; struct sk_buff** skbuff; scalar_t__ index; } ;
struct ibmveth_adapter {int replenish_add_buff_failure; TYPE_2__* vdev; int replenish_add_buff_success; TYPE_3__* netdev; int replenish_no_mem; } ;
typedef void* dma_addr_t ;
struct TYPE_7__ {scalar_t__ mtu; } ;
struct TYPE_6__ {int dev; int unit_address; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (int *,scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (int *,void*) ;
 int FUNC_6 (int *,void*,int,int ) ;
 unsigned long FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,unsigned int) ;
 int FUNC_9 () ;
 unsigned int FUNC_10 (int,scalar_t__) ;
 struct sk_buff* FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (TYPE_3__*,char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_13(struct ibmveth_adapter *VAR_6,
       struct ibmveth_buff_pool *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = VAR_7->size - FUNC_2(&VAR_7->available);
 u32 VAR_10 = 0;
 struct sk_buff *VAR_11;
 unsigned int VAR_12, VAR_13;
 u64 VAR_14;
 unsigned long VAR_15;
 dma_addr_t VAR_16;

 FUNC_9();

 for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
  union ibmveth_buf_desc VAR_17;

  VAR_11 = FUNC_11(VAR_6->netdev, VAR_7->buff_size);

  if (!VAR_11) {
   FUNC_12(VAR_6->netdev,
       "replenish: unable to allocate skb\n");
   VAR_6->replenish_no_mem++;
   break;
  }

  VAR_12 = VAR_7->consumer_index;
  VAR_7->consumer_index++;
  if (VAR_7->consumer_index >= VAR_7->size)
   VAR_7->consumer_index = 0;
  VAR_13 = VAR_7->free_map[VAR_12];

  FUNC_0(VAR_13 == VAR_4);
  FUNC_0(VAR_7->skbuff[VAR_13] != ((void*)0));

  VAR_16 = FUNC_4(&VAR_6->vdev->dev, VAR_11->data,
    VAR_7->buff_size, VAR_0);

  if (FUNC_5(&VAR_6->vdev->dev, VAR_16))
   goto failure;

  VAR_7->free_map[VAR_12] = VAR_4;
  VAR_7->dma_addr[VAR_13] = VAR_16;
  VAR_7->skbuff[VAR_13] = VAR_11;

  VAR_14 = ((u64)VAR_7->index << 32) | VAR_13;
  *(u64 *)VAR_11->data = VAR_14;

  VAR_17.fields.flags_len = VAR_3 | VAR_7->buff_size;
  VAR_17.fields.address = VAR_16;

  if (VAR_5) {
   unsigned int VAR_18 = FUNC_10(VAR_7->buff_size,
      VAR_6->netdev->mtu +
      VAR_2);
   FUNC_8(VAR_11->data, VAR_18);
  }
  VAR_15 = FUNC_7(VAR_6->vdev->unit_address,
         VAR_17.desc);

  if (VAR_15 != VAR_1) {
   goto failure;
  } else {
   VAR_10++;
   VAR_6->replenish_add_buff_success++;
  }
 }

 FUNC_9();
 FUNC_1(VAR_10, &(VAR_7->available));
 return;

failure:
 VAR_7->free_map[VAR_12] = VAR_13;
 VAR_7->skbuff[VAR_13] = ((void*)0);
 if (VAR_7->consumer_index == 0)
  VAR_7->consumer_index = VAR_7->size - 1;
 else
  VAR_7->consumer_index--;
 if (!FUNC_5(&VAR_6->vdev->dev, VAR_16))
  FUNC_6(&VAR_6->vdev->dev,
                   VAR_7->dma_addr[VAR_13], VAR_7->buff_size,
                   VAR_0);
 FUNC_3(VAR_11);
 VAR_6->replenish_add_buff_failure++;

 FUNC_9();
 FUNC_1(VAR_10, &(VAR_7->available));
}
