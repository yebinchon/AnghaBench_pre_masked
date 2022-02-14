
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int size; void* base; int basePA; } ;
struct TYPE_6__ {int size; void* base; int basePA; } ;
struct TYPE_5__ {size_t size; void* base; int basePA; } ;
struct vmxnet3_tx_queue {size_t txdata_desc_size; void* buf_info; int buf_info_pa; TYPE_3__ tx_ring; TYPE_2__ comp_ring; TYPE_1__ data_ring; } ;
struct vmxnet3_adapter {TYPE_4__* pdev; int netdev; } ;
struct Vmxnet3_TxDesc {int dummy; } ;
struct Vmxnet3_TxCompDesc {int dummy; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int *,size_t,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct vmxnet3_tx_queue*,struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct vmxnet3_tx_queue *VAR_2,
    struct vmxnet3_adapter *VAR_3)
{
 size_t VAR_4;

 FUNC_0(VAR_2->tx_ring.base || VAR_2->data_ring.base ||
        VAR_2->comp_ring.base || VAR_2->buf_info);

 VAR_2->tx_ring.base = FUNC_1(&VAR_3->pdev->dev,
   VAR_2->tx_ring.size * sizeof(struct Vmxnet3_TxDesc),
   &VAR_2->tx_ring.basePA, VAR_1);
 if (!VAR_2->tx_ring.base) {
  FUNC_2(VAR_3->netdev, "failed to allocate tx ring\n");
  goto err;
 }

 VAR_2->data_ring.base = FUNC_1(&VAR_3->pdev->dev,
   VAR_2->data_ring.size * VAR_2->txdata_desc_size,
   &VAR_2->data_ring.basePA, VAR_1);
 if (!VAR_2->data_ring.base) {
  FUNC_2(VAR_3->netdev, "failed to allocate tx data ring\n");
  goto err;
 }

 VAR_2->comp_ring.base = FUNC_1(&VAR_3->pdev->dev,
   VAR_2->comp_ring.size * sizeof(struct Vmxnet3_TxCompDesc),
   &VAR_2->comp_ring.basePA, VAR_1);
 if (!VAR_2->comp_ring.base) {
  FUNC_2(VAR_3->netdev, "failed to allocate tx comp ring\n");
  goto err;
 }

 VAR_4 = VAR_2->tx_ring.size * sizeof(VAR_2->buf_info[0]);
 VAR_2->buf_info = FUNC_1(&VAR_3->pdev->dev, VAR_4,
       &VAR_2->buf_info_pa, VAR_1);
 if (!VAR_2->buf_info)
  goto err;

 return 0;

err:
 FUNC_3(VAR_2, VAR_3);
 return -VAR_0;
}
