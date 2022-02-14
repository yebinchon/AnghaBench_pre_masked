
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_hal {int* cch_by_bw; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtw_hal*,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_1(struct rtw_hal *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7;


 VAR_4->cch_by_bw[VAR_0] = 1;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
}
