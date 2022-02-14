
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_tx_queue {int queue; TYPE_2__* efx; } ;
struct TYPE_4__ {TYPE_1__* net_dev; } ;
struct TYPE_3__ {int num_tc; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct efx_tx_queue *VAR_1)
{
 return !(VAR_1->efx->net_dev->num_tc < 2 &&
   VAR_1->queue & VAR_0);
}
