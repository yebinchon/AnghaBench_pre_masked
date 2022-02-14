
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_hal {scalar_t__** tx_pwr_by_rate_offset_5g; scalar_t__** tx_pwr_by_rate_offset_2g; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct rtw_dev*,size_t,size_t,size_t) ;

void FUNC_1(struct rtw_dev *VAR_5)
{
 struct rtw_hal *VAR_6 = &VAR_5->hal;
 u8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_6->tx_pwr_by_rate_offset_2g[VAR_8][VAR_9] = 0;
   VAR_6->tx_pwr_by_rate_offset_5g[VAR_8][VAR_9] = 0;
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
   for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
    FUNC_0(VAR_5, VAR_7, VAR_11,
           VAR_10);
}
