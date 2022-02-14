
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct us_data {scalar_t__ extra; } ;
struct ms_lib_type_extdat {int ovrflg; } ;
struct TYPE_2__ {scalar_t__ NumberOfPhyBlock; scalar_t__* Phy2LogMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (struct us_data*,scalar_t__) ;
 int FUNC_1 (struct us_data*,scalar_t__) ;
 int FUNC_2 (struct us_data*,scalar_t__,int ,struct ms_lib_type_extdat*) ;
 int FUNC_3 (struct us_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_7, u16 VAR_8)
{
 u16 VAR_9;
 struct ms_lib_type_extdat VAR_10;
 struct ene_ub6250_info *VAR_11 = (struct ene_ub6250_info *) VAR_7->extra;


 if (VAR_8 >= VAR_11->MS_Lib.NumberOfPhyBlock)
  return VAR_0;

 for (VAR_9 = VAR_8 + 1; VAR_9 != VAR_8; VAR_9++) {
  if ((VAR_9 & VAR_4) == 0)
   VAR_9 -= VAR_3;

  if (VAR_11->MS_Lib.Phy2LogMap[VAR_9] == VAR_2) {
   return VAR_9;
  } else if (VAR_11->MS_Lib.Phy2LogMap[VAR_9] == VAR_1) {
   switch (FUNC_2(VAR_7, VAR_9, 0, &VAR_10)) {
   case 129:
   case 128:
    break;
   case 132:
    return 132;
   case 130:
    return VAR_0;
   case 133:
   default:
    FUNC_3(VAR_7, VAR_9);
    continue;
   }

   if ((VAR_10.ovrflg & VAR_5) != VAR_6) {
    FUNC_3(VAR_7, VAR_9);
    continue;
   }

   switch (FUNC_0(VAR_7, VAR_9)) {
   case 129:
    return VAR_9;
   case 131:
    return VAR_0;
   case 134:
   default:
    FUNC_1(VAR_7, VAR_9);
    break;
   }
  }
 }

 return VAR_0;
}
