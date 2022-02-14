
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* GetHalDefVarHandler ) (struct adapter*,int,void*) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;
typedef enum HAL_DEF_VARIABLE { ____Placeholder_HAL_DEF_VARIABLE } HAL_DEF_VARIABLE ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int,void*) ;

u8 FUNC_1(struct adapter *VAR_1, enum HAL_DEF_VARIABLE VAR_2, void *VAR_3)
{
 if (VAR_1->HalFunc.GetHalDefVarHandler)
  return VAR_1->HalFunc.GetHalDefVarHandler(VAR_1, VAR_2, VAR_3);
 return VAR_0;
}
