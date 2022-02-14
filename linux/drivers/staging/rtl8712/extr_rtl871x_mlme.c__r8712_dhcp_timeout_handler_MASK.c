
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ power_mgnt; int smart_ps; } ;
struct TYPE_3__ {scalar_t__ pwr_mode; } ;
struct _adapter {TYPE_2__ registrypriv; TYPE_1__ pwrctrlpriv; scalar_t__ surprise_removed; scalar_t__ driver_stopped; } ;


 int FUNC_0 (struct _adapter*,scalar_t__,int ) ;

void FUNC_1 (struct _adapter *VAR_0)
{
 if (VAR_0->driver_stopped || VAR_0->surprise_removed)
  return;
 if (VAR_0->pwrctrlpriv.pwr_mode != VAR_0->registrypriv.power_mgnt)
  FUNC_0(VAR_0, VAR_0->registrypriv.power_mgnt,
       VAR_0->registrypriv.smart_ps);
}
