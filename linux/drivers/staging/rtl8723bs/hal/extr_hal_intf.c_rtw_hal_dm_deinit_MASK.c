
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* dm_deinit ) (struct adapter*) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 scalar_t__ FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;

void FUNC_2(struct adapter *VAR_0)
{

 if (FUNC_0(VAR_0))
  if (VAR_0->HalFunc.dm_deinit)
   VAR_0->HalFunc.dm_deinit(VAR_0);
}
