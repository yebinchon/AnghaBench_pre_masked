
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct bb_reg_def {int rfLSSIReadBack; int rfLSSIReadBackPi; int rfHSSIPara2; } ;
struct adapter {TYPE_1__* HalData; } ;
typedef enum rf_radio_path { ____Placeholder_rf_radio_path } rf_radio_path ;
struct TYPE_2__ {struct bb_reg_def* PHYRegDef; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct adapter*,int ,int ) ;
 int FUNC_2 (struct adapter*,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;

__attribute__((used)) static u32 FUNC_4(struct adapter *VAR_9,
   enum rf_radio_path VAR_10, u32 VAR_11)
{
 u32 VAR_12 = 0;
 struct bb_reg_def *VAR_13 = &VAR_9->HalData->PHYRegDef[VAR_10];
 u32 VAR_14, VAR_15;
 u8 VAR_16 = 0;

 VAR_11 &= 0xff;

 VAR_14 = FUNC_1(VAR_9, VAR_7, VAR_5);
 if (VAR_10 == VAR_0)
  VAR_15 = VAR_14;
 else
  VAR_15 = FUNC_1(VAR_9, VAR_13->rfHSSIPara2,
         VAR_5);

 VAR_15 = (VAR_15 & (~VAR_2)) |
     (VAR_11<<23) | VAR_4;

 FUNC_2(VAR_9, VAR_7, VAR_5,
         VAR_14&(~VAR_4));
 FUNC_3(10);

 FUNC_2(VAR_9, VAR_13->rfHSSIPara2, VAR_5, VAR_15);
 FUNC_3(100);

 FUNC_3(10);

 if (VAR_10 == VAR_0)
  VAR_16 = (u8)FUNC_1(VAR_9, VAR_6, FUNC_0(8));
 else if (VAR_10 == VAR_1)
  VAR_16 = (u8)FUNC_1(VAR_9, VAR_8, FUNC_0(8));

 if (VAR_16)
  VAR_12 = FUNC_1(VAR_9, VAR_13->rfLSSIReadBackPi,
           VAR_3);
 else
  VAR_12 = FUNC_1(VAR_9, VAR_13->rfLSSIReadBack,
           VAR_3);
 return VAR_12;
}
