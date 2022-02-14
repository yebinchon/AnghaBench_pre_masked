
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {size_t index; TYPE_1__* queue_addr; } ;
struct ibmveth_adapter {TYPE_2__ rx_queue; } ;
struct TYPE_3__ {int flags_off; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct ibmveth_adapter *VAR_0)
{
 return FUNC_0(VAR_0->rx_queue.queue_addr[VAR_0->rx_queue.index].flags_off);
}
