
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ PhyRegPgVersion; } ;
struct hal_com_data {scalar_t__ rf_type; int pwrGroupCnt; TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int FUNC_0 (char*,scalar_t__) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct adapter*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_4(
 struct adapter *VAR_3,
 u32 VAR_4,
 u32 VAR_5,
 u32 VAR_6,
 u32 VAR_7,
 u32 VAR_8,
 u32 VAR_9
)
{
 struct hal_com_data *VAR_10 = FUNC_1(VAR_3);
 PDM_ODM_T VAR_11 = &VAR_10->odmpriv;

 if (VAR_11->PhyRegPgVersion > 0)
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 else if (VAR_11->PhyRegPgVersion == 0) {
  FUNC_3(VAR_3, VAR_7, VAR_8, VAR_9);

  if (VAR_7 == VAR_1 && VAR_10->rf_type == VAR_0)
   VAR_10->pwrGroupCnt++;
  else if (VAR_7 == VAR_2 && VAR_10->rf_type != VAR_0)
   VAR_10->pwrGroupCnt++;
 } else
  FUNC_0("Invalid PHY_REG_PG.txt version %d\n", VAR_11->PhyRegPgVersion);

}
