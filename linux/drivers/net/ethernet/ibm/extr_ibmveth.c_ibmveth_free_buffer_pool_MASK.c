
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ibmveth_buff_pool {int size; struct sk_buff** skbuff; struct sk_buff** dma_addr; int buff_size; struct sk_buff** free_map; } ;
struct ibmveth_adapter {TYPE_1__* vdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff**) ;

__attribute__((used)) static void FUNC_3(struct ibmveth_adapter *VAR_1,
         struct ibmveth_buff_pool *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2->free_map);
 VAR_2->free_map = ((void*)0);

 if (VAR_2->skbuff && VAR_2->dma_addr) {
  for (VAR_3 = 0; VAR_3 < VAR_2->size; ++VAR_3) {
   struct sk_buff *VAR_4 = VAR_2->skbuff[VAR_3];
   if (VAR_4) {
    FUNC_1(&VAR_1->vdev->dev,
       VAR_2->dma_addr[VAR_3],
       VAR_2->buff_size,
       VAR_0);
    FUNC_0(VAR_4);
    VAR_2->skbuff[VAR_3] = ((void*)0);
   }
  }
 }

 if (VAR_2->dma_addr) {
  FUNC_2(VAR_2->dma_addr);
  VAR_2->dma_addr = ((void*)0);
 }

 if (VAR_2->skbuff) {
  FUNC_2(VAR_2->skbuff);
  VAR_2->skbuff = ((void*)0);
 }
}
