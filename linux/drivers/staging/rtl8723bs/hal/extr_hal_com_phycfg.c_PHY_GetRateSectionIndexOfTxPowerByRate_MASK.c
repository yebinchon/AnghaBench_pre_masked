
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ PhyRegPgVersion; } ;
struct hal_com_data {TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int FUNC_0 (char*,int) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_0 ;
u8 FUNC_2(
 struct adapter *VAR_1, u32 VAR_2, u32 VAR_3
)
{
 struct hal_com_data *VAR_4 = FUNC_1(VAR_1);
 PDM_ODM_T VAR_5 = &VAR_4->odmpriv;
 u8 VAR_6 = 0;

 if (VAR_5->PhyRegPgVersion == 0) {
  switch (VAR_2) {
  case 137:
   VAR_6 = 0;
   break;
  case 136:
   VAR_6 = 1;
   break;
  case 142:
   VAR_6 = 6;
   break;
  case 135:
   if (VAR_3 == VAR_0)
    VAR_6 = 7;
   else if (VAR_3 == 0x000000ff)
    VAR_6 = 15;
   break;

  case 141:
   VAR_6 = 2;
   break;
  case 140:
   VAR_6 = 3;
   break;
  case 139:
   VAR_6 = 4;
   break;
  case 138:
   VAR_6 = 5;
   break;
  case 129:
   VAR_6 = 8;
   break;
  case 128:
   VAR_6 = 9;
   break;
  case 134:
   VAR_6 = 14;
   break;
  case 133:
   VAR_6 = 10;
   break;
  case 132:
   VAR_6 = 11;
   break;
  case 131:
   VAR_6 = 12;
   break;
  case 130:
   VAR_6 = 13;
   break;
  default:
   FUNC_0("Invalid RegAddr 0x3%x in PHY_GetRateSectionIndexOfTxPowerByRate()", VAR_2);
   break;
  }
 }

 return VAR_6;
}
