
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* SetHalODMVarHandler ) (struct adapter*,int,void*,int) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;
typedef enum HAL_ODM_VARIABLE { ____Placeholder_HAL_ODM_VARIABLE } HAL_ODM_VARIABLE ;


 int FUNC_0 (struct adapter*,int,void*,int) ;

void FUNC_1(struct adapter *VAR_0, enum HAL_ODM_VARIABLE VAR_1, void *VAR_2, bool VAR_3)
{
 if (VAR_0->HalFunc.SetHalODMVarHandler)
  VAR_0->HalFunc.SetHalODMVarHandler(VAR_0, VAR_1, VAR_2, VAR_3);
}
