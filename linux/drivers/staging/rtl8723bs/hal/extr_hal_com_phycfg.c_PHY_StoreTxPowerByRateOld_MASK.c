
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct hal_com_data {size_t pwrGroupCnt; int ** MCSTxPowerLevelOriginalOffset; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t FUNC_1 (struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_2(
 struct adapter *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3
)
{
 struct hal_com_data *VAR_4 = FUNC_0(VAR_0);
 u8 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_4->MCSTxPowerLevelOriginalOffset[VAR_4->pwrGroupCnt][VAR_5] = VAR_3;


}
