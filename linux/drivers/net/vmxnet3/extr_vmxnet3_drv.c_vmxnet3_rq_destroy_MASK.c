
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; TYPE_5__* base; int basePA; } ;
struct TYPE_6__ {size_t desc_size; TYPE_5__* base; int basePA; } ;
struct vmxnet3_rx_queue {TYPE_5__** buf_info; int buf_info_pa; TYPE_3__* rx_ring; TYPE_2__ comp_ring; TYPE_1__ data_ring; } ;
struct vmxnet3_rx_buf_info {int dummy; } ;
struct vmxnet3_adapter {TYPE_4__* pdev; } ;
struct Vmxnet3_RxDesc {int dummy; } ;
struct Vmxnet3_RxCompDesc {int dummy; } ;
struct TYPE_10__ {int * page; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int size; TYPE_5__* base; int basePA; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,size_t,TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_2(struct vmxnet3_rx_queue *VAR_0,
          struct vmxnet3_adapter *VAR_1)
{
 int VAR_2;
 int VAR_3;


 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_0->buf_info[VAR_2]) {
   for (VAR_3 = 0; VAR_3 < VAR_0->rx_ring[VAR_2].size; VAR_3++)
    FUNC_0(VAR_0->buf_info[VAR_2][VAR_3].page != ((void*)0));
  }
 }


 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_0->rx_ring[VAR_2].base) {
   FUNC_1(&VAR_1->pdev->dev,
       VAR_0->rx_ring[VAR_2].size
       * sizeof(struct Vmxnet3_RxDesc),
       VAR_0->rx_ring[VAR_2].base,
       VAR_0->rx_ring[VAR_2].basePA);
   VAR_0->rx_ring[VAR_2].base = ((void*)0);
  }
 }

 if (VAR_0->data_ring.base) {
  FUNC_1(&VAR_1->pdev->dev,
      VAR_0->rx_ring[0].size * VAR_0->data_ring.desc_size,
      VAR_0->data_ring.base, VAR_0->data_ring.basePA);
  VAR_0->data_ring.base = ((void*)0);
 }

 if (VAR_0->comp_ring.base) {
  FUNC_1(&VAR_1->pdev->dev, VAR_0->comp_ring.size
      * sizeof(struct Vmxnet3_RxCompDesc),
      VAR_0->comp_ring.base, VAR_0->comp_ring.basePA);
  VAR_0->comp_ring.base = ((void*)0);
 }

 if (VAR_0->buf_info[0]) {
  size_t VAR_4 = sizeof(struct vmxnet3_rx_buf_info) *
   (VAR_0->rx_ring[0].size + VAR_0->rx_ring[1].size);
  FUNC_1(&VAR_1->pdev->dev, VAR_4, VAR_0->buf_info[0],
      VAR_0->buf_info_pa);
  VAR_0->buf_info[0] = VAR_0->buf_info[1] = ((void*)0);
 }
}
