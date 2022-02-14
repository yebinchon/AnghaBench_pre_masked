
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int,int,int ,int) ;

void FUNC_2(PDM_ODM_T VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = 0x1000;
 u32 VAR_7 = (u32)(VAR_6&0xE000);

 FUNC_1(
  VAR_3,
  VAR_4,
  VAR_5,
  VAR_2,
  VAR_4|VAR_7
 );

 FUNC_0(
  VAR_3,
  VAR_0,
  VAR_1,
  (
   "===> ODM_ConfigRFWithHeaderFile: [RadioA] %08X %08X\n",
   VAR_4,
   VAR_5
  )
 );
}
