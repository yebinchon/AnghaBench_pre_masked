
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hal_com_data {TYPE_1__* PHYRegDef; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int rfLSSIReadBackPi; int rfLSSIReadBack; int rfHSSIPara2; int rf3wireOffset; void* rfintfe; void* rfintfo; void* rfintfs; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_13)
{
 struct hal_com_data *VAR_14 = FUNC_0(VAR_13);


 VAR_14->PHYRegDef[VAR_0].rfintfs = VAR_4;
 VAR_14->PHYRegDef[VAR_1].rfintfs = VAR_4;


 VAR_14->PHYRegDef[VAR_0].rfintfo = VAR_8;
 VAR_14->PHYRegDef[VAR_1].rfintfo = VAR_12;


 VAR_14->PHYRegDef[VAR_0].rfintfe = VAR_8;
 VAR_14->PHYRegDef[VAR_1].rfintfe = VAR_12;

 VAR_14->PHYRegDef[VAR_0].rf3wireOffset = VAR_6;
 VAR_14->PHYRegDef[VAR_1].rf3wireOffset = VAR_10;

 VAR_14->PHYRegDef[VAR_0].rfHSSIPara2 = VAR_5;
 VAR_14->PHYRegDef[VAR_1].rfHSSIPara2 = VAR_9;


 VAR_14->PHYRegDef[VAR_0].rfLSSIReadBack = VAR_7;
 VAR_14->PHYRegDef[VAR_1].rfLSSIReadBack = VAR_11;
 VAR_14->PHYRegDef[VAR_0].rfLSSIReadBackPi = VAR_2;
 VAR_14->PHYRegDef[VAR_1].rfLSSIReadBackPi = VAR_3;

}
