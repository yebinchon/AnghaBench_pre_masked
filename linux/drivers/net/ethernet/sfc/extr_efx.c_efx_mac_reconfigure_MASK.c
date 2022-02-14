
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int filter_sem; TYPE_1__* type; } ;
struct TYPE_2__ {int (* reconfigure_mac ) (struct efx_nic*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct efx_nic *VAR_0)
{
 FUNC_0(&VAR_0->filter_sem);
 VAR_0->type->reconfigure_mac(VAR_0);
 FUNC_2(&VAR_0->filter_sem);
}
