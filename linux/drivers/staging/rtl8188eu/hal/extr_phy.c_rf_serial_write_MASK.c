
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bb_reg_def {int rf3wireOffset; } ;
struct adapter {TYPE_1__* HalData; } ;
typedef enum rf_radio_path { ____Placeholder_rf_radio_path } rf_radio_path ;
struct TYPE_2__ {struct bb_reg_def* PHYRegDef; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1,
       enum rf_radio_path VAR_2, u32 VAR_3,
       u32 VAR_4)
{
 u32 VAR_5 = 0;
 struct bb_reg_def *VAR_6 = &VAR_1->HalData->PHYRegDef[VAR_2];

 VAR_3 &= 0xff;
 VAR_5 = ((VAR_3<<20) | (VAR_4&0x000fffff)) & 0x0fffffff;
 FUNC_0(VAR_1, VAR_6->rf3wireOffset, VAR_0, VAR_5);
}
