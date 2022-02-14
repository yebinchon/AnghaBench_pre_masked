
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {TYPE_2__* mcdi; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct TYPE_4__ {TYPE_1__ iface; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct efx_nic*,int,int *) ;

void FUNC_2(struct efx_nic *VAR_1)
{
 if (!VAR_1->mcdi)
  return;

 FUNC_0(VAR_1->mcdi->iface.state != VAR_0);


 FUNC_1(VAR_1, 0, ((void*)0));
}
