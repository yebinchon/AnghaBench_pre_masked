
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct hal_com_data {struct bb_register_def* PHYRegDef; } ;
struct bb_register_def {int rfLSSIReadBackPi; int rfLSSIReadBack; } ;
struct adapter {int dummy; } ;
typedef enum RF_PATH { ____Placeholder_RF_PATH } RF_PATH ;


 int VAR_0 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_1 ;
 int FUNC_1 (struct adapter*,int,int ) ;
 int FUNC_2 (struct adapter*,int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;

__attribute__((used)) static u32 FUNC_4(
 struct adapter *VAR_12, enum RF_PATH VAR_13, u32 VAR_14
)
{
 u32 VAR_15 = 0;
 struct hal_com_data *VAR_16 = FUNC_0(VAR_12);
 struct bb_register_def *VAR_17 = &VAR_16->PHYRegDef[VAR_13];
 u32 VAR_18;
 u32 VAR_19;
 u8 VAR_20 = 0;
 u32 VAR_21 = 0;
 int VAR_22 = 0;




 VAR_14 &= 0xff;

 VAR_18 = VAR_14;

 if (VAR_13 == VAR_2) {
  VAR_19 = FUNC_1(VAR_12, VAR_9|VAR_21, VAR_7);
  VAR_19 = (VAR_19 & (~VAR_4)) | (VAR_18<<23) | VAR_6;
  FUNC_2(VAR_12, VAR_9|VAR_21, VAR_7, VAR_19&(~VAR_6));
 } else {
  VAR_19 = FUNC_1(VAR_12, VAR_11|VAR_21, VAR_7);
  VAR_19 = (VAR_19 & (~VAR_4)) | (VAR_18<<23) | VAR_6;
  FUNC_2(VAR_12, VAR_11|VAR_21, VAR_7, VAR_19&(~VAR_6));
 }

 VAR_19 = FUNC_1(VAR_12, VAR_9|VAR_21, VAR_7);
 FUNC_2(VAR_12, VAR_9|VAR_21, VAR_7, VAR_19 & (~VAR_6));
 FUNC_2(VAR_12, VAR_9|VAR_21, VAR_7, VAR_19 | VAR_6);

 FUNC_3(10);

 for (VAR_22 = 0; VAR_22 < 2; VAR_22++)
  FUNC_3(VAR_1);
 FUNC_3(10);

 if (VAR_13 == VAR_2)
  VAR_20 = (u8)FUNC_1(VAR_12, VAR_8|VAR_21, VAR_0);
 else if (VAR_13 == VAR_3)
  VAR_20 = (u8)FUNC_1(VAR_12, VAR_10|VAR_21, VAR_0);

 if (VAR_20) {

  VAR_15 = FUNC_1(VAR_12, VAR_17->rfLSSIReadBackPi|VAR_21, VAR_5);


 } else {

  VAR_15 = FUNC_1(VAR_12, VAR_17->rfLSSIReadBack|VAR_21, VAR_5);


 }
 return VAR_15;

}
