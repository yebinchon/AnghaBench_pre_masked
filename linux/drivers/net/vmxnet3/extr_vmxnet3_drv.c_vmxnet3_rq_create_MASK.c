
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; void* base; int basePA; } ;
struct TYPE_5__ {size_t desc_size; int * base; int basePA; } ;
struct vmxnet3_rx_queue {TYPE_4__* rx_ring; struct vmxnet3_rx_buf_info** buf_info; int buf_info_pa; TYPE_2__ comp_ring; TYPE_1__ data_ring; } ;
struct vmxnet3_rx_buf_info {int dummy; } ;
struct vmxnet3_adapter {int rxdataring_enabled; TYPE_3__* pdev; int netdev; } ;
struct Vmxnet3_RxDesc {int dummy; } ;
struct Vmxnet3_RxCompDesc {int dummy; } ;
struct TYPE_8__ {int size; void* base; int basePA; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct vmxnet3_rx_queue*,struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_3(struct vmxnet3_rx_queue *VAR_2, struct vmxnet3_adapter *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 struct vmxnet3_rx_buf_info *VAR_6;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {

  VAR_5 = VAR_2->rx_ring[VAR_4].size * sizeof(struct Vmxnet3_RxDesc);
  VAR_2->rx_ring[VAR_4].base = FUNC_0(
      &VAR_3->pdev->dev, VAR_5,
      &VAR_2->rx_ring[VAR_4].basePA,
      VAR_1);
  if (!VAR_2->rx_ring[VAR_4].base) {
   FUNC_1(VAR_3->netdev,
       "failed to allocate rx ring %d\n", VAR_4);
   goto err;
  }
 }

 if ((VAR_3->rxdataring_enabled) && (VAR_2->data_ring.desc_size != 0)) {
  VAR_5 = VAR_2->rx_ring[0].size * VAR_2->data_ring.desc_size;
  VAR_2->data_ring.base =
   FUNC_0(&VAR_3->pdev->dev, VAR_5,
        &VAR_2->data_ring.basePA,
        VAR_1);
  if (!VAR_2->data_ring.base) {
   FUNC_1(VAR_3->netdev,
       "rx data ring will be disabled\n");
   VAR_3->rxdataring_enabled = 0;
  }
 } else {
  VAR_2->data_ring.base = ((void*)0);
  VAR_2->data_ring.desc_size = 0;
 }

 VAR_5 = VAR_2->comp_ring.size * sizeof(struct Vmxnet3_RxCompDesc);
 VAR_2->comp_ring.base = FUNC_0(&VAR_3->pdev->dev, VAR_5,
      &VAR_2->comp_ring.basePA,
      VAR_1);
 if (!VAR_2->comp_ring.base) {
  FUNC_1(VAR_3->netdev, "failed to allocate rx comp ring\n");
  goto err;
 }

 VAR_5 = sizeof(struct vmxnet3_rx_buf_info) * (VAR_2->rx_ring[0].size +
         VAR_2->rx_ring[1].size);
 VAR_6 = FUNC_0(&VAR_3->pdev->dev, VAR_5, &VAR_2->buf_info_pa,
    VAR_1);
 if (!VAR_6)
  goto err;

 VAR_2->buf_info[0] = VAR_6;
 VAR_2->buf_info[1] = VAR_6 + VAR_2->rx_ring[0].size;

 return 0;

err:
 FUNC_2(VAR_2, VAR_3);
 return -VAR_0;
}
