
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int size; void* gen; scalar_t__ next2comp; scalar_t__ next2fill; TYPE_4__* base; } ;
struct TYPE_6__ {int size; void* gen; scalar_t__ next2proc; TYPE_4__* base; } ;
struct TYPE_5__ {int size; TYPE_4__* base; } ;
struct vmxnet3_tx_queue {int txdata_desc_size; TYPE_4__* buf_info; TYPE_3__ tx_ring; TYPE_2__ comp_ring; TYPE_1__ data_ring; } ;
struct vmxnet3_adapter {int dummy; } ;
struct Vmxnet3_TxDesc {int dummy; } ;
struct Vmxnet3_TxCompDesc {int dummy; } ;
struct TYPE_8__ {int map_type; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_tx_queue *VAR_2,
  struct vmxnet3_adapter *VAR_3)
{
 int VAR_4;


 FUNC_0(VAR_2->tx_ring.base, 0, VAR_2->tx_ring.size *
        sizeof(struct Vmxnet3_TxDesc));
 VAR_2->tx_ring.next2fill = VAR_2->tx_ring.next2comp = 0;
 VAR_2->tx_ring.gen = VAR_0;

 FUNC_0(VAR_2->data_ring.base, 0,
        VAR_2->data_ring.size * VAR_2->txdata_desc_size);


 FUNC_0(VAR_2->comp_ring.base, 0, VAR_2->comp_ring.size *
        sizeof(struct Vmxnet3_TxCompDesc));
 VAR_2->comp_ring.next2proc = 0;
 VAR_2->comp_ring.gen = VAR_0;


 FUNC_0(VAR_2->buf_info, 0, sizeof(VAR_2->buf_info[0]) * VAR_2->tx_ring.size);
 for (VAR_4 = 0; VAR_4 < VAR_2->tx_ring.size; VAR_4++)
  VAR_2->buf_info[VAR_4].map_type = VAR_1;


}
