
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int next2fill; } ;
struct TYPE_3__ {scalar_t__ base; } ;
struct vmxnet3_tx_queue {int txdata_desc_size; TYPE_2__ tx_ring; TYPE_1__ data_ring; } ;
struct vmxnet3_tx_ctx {int copy_size; } ;
struct vmxnet3_adapter {int netdev; } ;
struct sk_buff {int data; } ;
struct Vmxnet3_TxDataDesc {int data; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct sk_buff *VAR_0, struct vmxnet3_tx_queue *VAR_1,
   struct vmxnet3_tx_ctx *VAR_2,
   struct vmxnet3_adapter *VAR_3)
{
 struct Vmxnet3_TxDataDesc *VAR_4;

 VAR_4 = (struct Vmxnet3_TxDataDesc *)((u8 *)VAR_1->data_ring.base +
         VAR_1->tx_ring.next2fill *
         VAR_1->txdata_desc_size);

 FUNC_0(VAR_4->data, VAR_0->data, VAR_2->copy_size);
 FUNC_1(VAR_3->netdev,
  "copy %u bytes to dataRing[%u]\n",
  VAR_2->copy_size, VAR_1->tx_ring.next2fill);
}
