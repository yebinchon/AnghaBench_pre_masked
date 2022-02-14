
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hal_com_data {scalar_t__**** TxPwrByRateOffset; } ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;

void FUNC_1(struct adapter *VAR_4)
{
 struct hal_com_data *VAR_5 = FUNC_0(VAR_4);
 u8 VAR_6, VAR_7, VAR_8, VAR_9;

 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; ++VAR_6)
   for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7)
    for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8)
     for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9)
      VAR_5->TxPwrByRateOffset[VAR_6][VAR_7][VAR_8][VAR_9] = 0;
}
