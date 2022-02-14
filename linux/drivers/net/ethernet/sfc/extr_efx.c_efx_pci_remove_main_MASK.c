
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {scalar_t__ state; TYPE_1__* type; int reset_work; } ;
struct TYPE_2__ {int (* fini ) (struct efx_nic*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_9(struct efx_nic *VAR_1)
{



 FUNC_0(VAR_1->state == VAR_0);
 FUNC_1(&VAR_1->reset_work);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_6(VAR_1);
 FUNC_5(VAR_1);
 VAR_1->type->fini(VAR_1);
 FUNC_4(VAR_1);
 FUNC_7(VAR_1);
}
