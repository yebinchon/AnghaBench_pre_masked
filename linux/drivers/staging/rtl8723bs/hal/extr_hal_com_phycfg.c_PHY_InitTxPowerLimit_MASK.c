
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hal_com_data {void****** TxPwrLimit_5G; void****** TxPwrLimit_2_4G; } ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

void FUNC_1(struct adapter *VAR_8)
{
 struct hal_com_data *VAR_9 = FUNC_0(VAR_8);
 u8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;



 for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10) {
  for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11)
   for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12)
    for (VAR_14 = 0; VAR_14 < VAR_0; ++VAR_14)
     for (VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13)
      VAR_9->TxPwrLimit_2_4G[VAR_10][VAR_11][VAR_12][VAR_14][VAR_13] = VAR_4;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10) {
  for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
   for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12)
    for (VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14)
     for (VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13)
      VAR_9->TxPwrLimit_5G[VAR_10][VAR_11][VAR_12][VAR_14][VAR_13] = VAR_4;
 }


}
