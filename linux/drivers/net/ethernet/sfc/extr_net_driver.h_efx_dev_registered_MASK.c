
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* net_dev; } ;
struct TYPE_2__ {scalar_t__ reg_state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct efx_nic *VAR_1)
{
 return VAR_1->net_dev->reg_state == VAR_0;
}
