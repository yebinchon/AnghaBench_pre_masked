
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hal_com_data {struct bb_register_def* PHYRegDef; } ;
struct bb_register_def {int rf3wireOffset; } ;
struct adapter {int dummy; } ;
typedef enum RF_PATH { ____Placeholder_RF_PATH } RF_PATH ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(
 struct adapter *VAR_1,
 enum RF_PATH VAR_2,
 u32 VAR_3,
 u32 VAR_4
)
{
 u32 VAR_5 = 0;
 struct hal_com_data *VAR_6 = FUNC_0(VAR_1);
 struct bb_register_def *VAR_7 = &VAR_6->PHYRegDef[VAR_2];
 u32 VAR_8;

 VAR_3 &= 0xff;




 VAR_8 = VAR_3;





 VAR_5 = ((VAR_8<<20) | (VAR_4&0x000fffff)) & 0x0fffffff;




 FUNC_1(VAR_1, VAR_7->rf3wireOffset, VAR_0, VAR_5);


}
