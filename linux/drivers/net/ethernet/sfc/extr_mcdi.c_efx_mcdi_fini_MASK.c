
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {TYPE_2__* mcdi; } ;
struct TYPE_3__ {scalar_t__ logging_buffer; } ;
struct TYPE_4__ {TYPE_1__ iface; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct efx_nic *VAR_0)
{
 if (!VAR_0->mcdi)
  return;





 FUNC_1(VAR_0->mcdi);
}
