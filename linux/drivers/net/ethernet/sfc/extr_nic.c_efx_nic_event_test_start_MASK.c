
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_channel {int event_test_cpu; TYPE_2__* efx; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* ev_test_generate ) (struct efx_channel*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct efx_channel*) ;

void FUNC_2(struct efx_channel *VAR_0)
{
 VAR_0->event_test_cpu = -1;
 FUNC_0();
 VAR_0->efx->type->ev_test_generate(VAR_0);
}
