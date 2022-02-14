
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fw_iol; } ;
struct adapter {TYPE_1__ registrypriv; } ;
struct TYPE_4__ {int ishighspeed; } ;


 TYPE_2__* FUNC_0 (struct adapter*) ;

bool FUNC_1(struct adapter *VAR_0)
{
 if (VAR_0->registrypriv.fw_iol == 1)
  return 1;

 if (VAR_0->registrypriv.fw_iol == 2 &&
     !FUNC_0(VAR_0)->ishighspeed)
  return 1;
 return 0;
}
