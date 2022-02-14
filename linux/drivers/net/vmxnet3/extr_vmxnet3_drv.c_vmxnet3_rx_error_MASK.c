
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int drop_total; int drop_fcs; int drop_err; } ;
struct vmxnet3_rx_queue {TYPE_1__ stats; } ;
struct vmxnet3_rx_ctx {int * skb; } ;
struct vmxnet3_adapter {int dummy; } ;
struct Vmxnet3_RxCompDesc {int fcs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_rx_queue *VAR_0, struct Vmxnet3_RxCompDesc *VAR_1,
   struct vmxnet3_rx_ctx *VAR_2, struct vmxnet3_adapter *VAR_3)
{
 VAR_0->stats.drop_err++;
 if (!VAR_1->fcs)
  VAR_0->stats.drop_fcs++;

 VAR_0->stats.drop_total++;
 if (VAR_2->skb)
  FUNC_0(VAR_2->skb);

 VAR_2->skb = ((void*)0);
}
