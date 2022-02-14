
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int PDM_ODM_T ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int,int,int) ;
 int VAR_7 ;
 int FUNC_5 (int ,int,int ,int) ;

void FUNC_6(PDM_ODM_T VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10 = FUNC_0(VAR_0);
 u32 *VAR_11 = VAR_0;

 FUNC_3(
  VAR_8,
  VAR_5,
  VAR_6,
  ("===> ODM_ReadAndConfig_MP_8723B_PHY_REG\n")
 );

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9 += 2) {
  u32 VAR_12 = VAR_11[VAR_9];
  u32 VAR_13 = VAR_11[VAR_9+1];


  if (VAR_12 < 0x40000000) {
   FUNC_5(VAR_8, VAR_12, VAR_7, VAR_13);
   continue;
  } else {

   bool VAR_14 = 1;
   u8 VAR_15 = (u8)((VAR_12 & (VAR_2|VAR_1)) >> 28);

   if (VAR_15 == VAR_3) {
    VAR_14 = 1;
    FUNC_4(VAR_12, VAR_13, VAR_9);
   } else if (!FUNC_2(VAR_8, VAR_12, VAR_13)) {
    VAR_14 = 0;
    FUNC_4(VAR_12, VAR_13, VAR_9);
    FUNC_4(VAR_12, VAR_13, VAR_9);
   } else {
    FUNC_4(VAR_12, VAR_13, VAR_9);
    if (!FUNC_1(VAR_8, VAR_12, VAR_13))
     VAR_14 = 0;
    else
     VAR_14 = 1;
    FUNC_4(VAR_12, VAR_13, VAR_9);
   }

   if (!VAR_14) {



    while (VAR_12 < 0x40000000 && VAR_9 < VAR_10-2)
     FUNC_4(VAR_12, VAR_13, VAR_9);

    VAR_9 -= 2;
   } else {
    while (VAR_12 < 0x40000000 && VAR_9 < VAR_10-2) {
     FUNC_5(VAR_8, VAR_12, VAR_7, VAR_13);
     FUNC_4(VAR_12, VAR_13, VAR_9);
    }


    VAR_15 = (u8)((VAR_12 & (VAR_2|VAR_1)) >> 28);
    while (VAR_15 != VAR_4 && VAR_9 < VAR_10-2) {
     FUNC_4(VAR_12, VAR_13, VAR_9);
     VAR_15 = (u8)((VAR_12 & (VAR_2|VAR_1)) >> 28);
    }
   }
  }
 }
}
