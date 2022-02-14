
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hal_com_data {scalar_t__***** TxPwrLimit_5G; } ;
struct adapter {int dummy; } ;
typedef scalar_t__ s8 ;


 size_t VAR_0 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_6)
{
 struct hal_com_data *VAR_7 = FUNC_0(VAR_6);
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 s8 VAR_12 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
  for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
   for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
    for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
     VAR_12 = VAR_7->TxPwrLimit_5G[VAR_8][VAR_9][VAR_11][VAR_10][VAR_5];
     if (VAR_12 == VAR_2) {
      u8 VAR_13 = 2, VAR_14 = 6;
      if (VAR_9 == 0 || VAR_9 == 1) {


       if (VAR_11 >= 2 && VAR_11 <= 9) {
        if (VAR_11 == 2) {
         VAR_13 = 2;
         VAR_14 = 6;
        } else if (VAR_11 == 3) {
         VAR_13 = 3;
         VAR_14 = 7;
        } else if (VAR_11 == 4) {
         VAR_13 = 4;
         VAR_14 = 8;
        } else if (VAR_11 == 5) {
         VAR_13 = 5;
         VAR_14 = 9;
        } else if (VAR_11 == 6) {
         VAR_13 = 6;
         VAR_14 = 2;
        } else if (VAR_11 == 7) {
         VAR_13 = 7;
         VAR_14 = 3;
        } else if (VAR_11 == 8) {
         VAR_13 = 8;
         VAR_14 = 4;
        } else if (VAR_11 == 9) {
         VAR_13 = 9;
         VAR_14 = 5;
        }
        VAR_7->TxPwrLimit_5G[VAR_8][VAR_9][VAR_13][VAR_10][VAR_5] =
         VAR_7->TxPwrLimit_5G[VAR_8][VAR_9][VAR_14][VAR_10][VAR_5];
       }


      }
     }
    }
   }
  }
 }
}
