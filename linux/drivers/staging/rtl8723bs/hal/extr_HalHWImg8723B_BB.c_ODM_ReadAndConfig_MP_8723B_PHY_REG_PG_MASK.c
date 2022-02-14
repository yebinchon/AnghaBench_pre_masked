
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int PhyRegPgVersion; int PhyRegPgValueType; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int,int,int,int,int,int) ;

void FUNC_3(PDM_ODM_T VAR_4)
{
 u32 VAR_5 = 0;
 u32 *VAR_6 = VAR_0;

 FUNC_1(
  VAR_4,
  VAR_1,
  VAR_2,
  ("===> ODM_ReadAndConfig_MP_8723B_PHY_REG_PG\n")
 );

 VAR_4->PhyRegPgVersion = 1;
 VAR_4->PhyRegPgValueType = VAR_3;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5 += 6) {
  u32 VAR_7 = VAR_6[VAR_5];
  u32 VAR_8 = VAR_6[VAR_5+1];
  u32 VAR_9 = VAR_6[VAR_5+2];
  u32 VAR_10 = VAR_6[VAR_5+3];
  u32 VAR_11 = VAR_6[VAR_5+4];
  u32 VAR_12 = VAR_6[VAR_5+5];

  FUNC_2(VAR_4, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 }
}
