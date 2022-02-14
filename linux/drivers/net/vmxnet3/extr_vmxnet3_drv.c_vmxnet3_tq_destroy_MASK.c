
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int size; int * base; int basePA; } ;
struct TYPE_6__ {int size; int * base; int basePA; } ;
struct TYPE_5__ {int size; int * base; int basePA; } ;
struct vmxnet3_tx_queue {int txdata_desc_size; int * buf_info; int buf_info_pa; TYPE_4__ tx_ring; TYPE_2__ comp_ring; TYPE_1__ data_ring; } ;
struct vmxnet3_adapter {TYPE_3__* pdev; } ;
struct Vmxnet3_TxDesc {int dummy; } ;
struct Vmxnet3_TxCompDesc {int dummy; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_tx_queue *VAR_0,
     struct vmxnet3_adapter *VAR_1)
{
 if (VAR_0->tx_ring.base) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0->tx_ring.size *
      sizeof(struct Vmxnet3_TxDesc),
      VAR_0->tx_ring.base, VAR_0->tx_ring.basePA);
  VAR_0->tx_ring.base = ((void*)0);
 }
 if (VAR_0->data_ring.base) {
  FUNC_0(&VAR_1->pdev->dev,
      VAR_0->data_ring.size * VAR_0->txdata_desc_size,
      VAR_0->data_ring.base, VAR_0->data_ring.basePA);
  VAR_0->data_ring.base = ((void*)0);
 }
 if (VAR_0->comp_ring.base) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0->comp_ring.size *
      sizeof(struct Vmxnet3_TxCompDesc),
      VAR_0->comp_ring.base, VAR_0->comp_ring.basePA);
  VAR_0->comp_ring.base = ((void*)0);
 }
 if (VAR_0->buf_info) {
  FUNC_0(&VAR_1->pdev->dev,
      VAR_0->tx_ring.size * sizeof(VAR_0->buf_info[0]),
      VAR_0->buf_info, VAR_0->buf_info_pa);
  VAR_0->buf_info = ((void*)0);
 }
}
