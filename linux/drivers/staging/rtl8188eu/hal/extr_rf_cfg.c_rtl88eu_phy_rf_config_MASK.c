
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hal_data_8188e {struct bb_reg_def* PHYRegDef; } ;
struct bb_reg_def {int rfintfs; int rfHSSIPara2; int rfintfo; int rfintfe; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct adapter*,int ,int) ;
 int FUNC_1 (struct adapter*,int ,int,int) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int) ;

bool FUNC_4(struct adapter *VAR_4)
{
 struct hal_data_8188e *VAR_5 = VAR_4->HalData;
 u32 VAR_6 = 0;
 bool VAR_7;
 struct bb_reg_def *VAR_8;

 VAR_8 = &VAR_5->PHYRegDef[VAR_3];
 VAR_6 = FUNC_0(VAR_4, VAR_8->rfintfs, VAR_2);

 FUNC_1(VAR_4, VAR_8->rfintfe, VAR_2 << 16, 0x1);
 FUNC_3(1);

 FUNC_1(VAR_4, VAR_8->rfintfo, VAR_2, 0x1);
 FUNC_3(1);

 FUNC_1(VAR_4, VAR_8->rfHSSIPara2, VAR_0, 0x0);
 FUNC_3(1);

 FUNC_1(VAR_4, VAR_8->rfHSSIPara2, VAR_1, 0x0);
 FUNC_3(1);

 VAR_7 = FUNC_2(VAR_4);

 FUNC_1(VAR_4, VAR_8->rfintfs, VAR_2, VAR_6);

 return VAR_7;
}
