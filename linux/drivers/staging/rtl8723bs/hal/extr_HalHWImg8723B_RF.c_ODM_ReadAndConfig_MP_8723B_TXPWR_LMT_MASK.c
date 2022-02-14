
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int PDM_ODM_T ;


 int FUNC_0 (int **) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int *,int *,int *,int *,int *,int *,int *) ;

void FUNC_3(PDM_ODM_T VAR_3)
{
 u32 VAR_4 = 0;
 u8 **VAR_5 = VAR_0;

 FUNC_1(
  VAR_3,
  VAR_1,
  VAR_2,
  ("===> ODM_ReadAndConfig_MP_8723B_TXPWR_LMT\n")
 );

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4 += 7) {
  u8 *VAR_6 = VAR_5[VAR_4];
  u8 *VAR_7 = VAR_5[VAR_4+1];
  u8 *VAR_8 = VAR_5[VAR_4+2];
  u8 *VAR_9 = VAR_5[VAR_4+3];
  u8 *VAR_10 = VAR_5[VAR_4+4];
  u8 *VAR_11 = VAR_5[VAR_4+5];
  u8 *VAR_12 = VAR_5[VAR_4+6];

  FUNC_2(
   VAR_3,
   VAR_6,
   VAR_7,
   VAR_8,
   VAR_9,
   VAR_10,
   VAR_11,
   VAR_12
  );
 }
}
