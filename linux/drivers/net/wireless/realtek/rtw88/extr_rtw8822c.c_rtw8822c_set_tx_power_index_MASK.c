
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_hal {size_t** tx_pwr_tbl; } ;
struct rtw_dev {struct rtw_hal hal; } ;
typedef scalar_t__ s8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct rtw_dev*,size_t,scalar_t__*) ;
 int FUNC_2 (struct rtw_dev*,size_t*,size_t*) ;
 size_t** VAR_5 ;
 size_t* VAR_6 ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_7)
{
 struct rtw_hal *VAR_8 = &VAR_7->hal;
 u8 VAR_9, VAR_10, VAR_11;
 u8 VAR_12[2] = {VAR_8->tx_pwr_tbl[VAR_2][VAR_0],
        VAR_8->tx_pwr_tbl[VAR_3][VAR_0]};
 u8 VAR_13[2] = {VAR_8->tx_pwr_tbl[VAR_2][VAR_1],
         VAR_8->tx_pwr_tbl[VAR_3][VAR_1]};
 s8 VAR_14, VAR_15;
 u8 VAR_16, VAR_17;
 s8 VAR_18[4];

 FUNC_2(VAR_7, VAR_12, VAR_13);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  for (VAR_11 = 0; VAR_11 < VAR_6[VAR_9]; VAR_11++) {
   VAR_10 = VAR_5[VAR_9][VAR_11];
   VAR_16 = VAR_8->tx_pwr_tbl[VAR_2][VAR_10];
   VAR_17 = VAR_8->tx_pwr_tbl[VAR_3][VAR_10];
   if (VAR_9 == 0) {
    VAR_14 = (s8)VAR_16 - (s8)VAR_12[0];
    VAR_15 = (s8)VAR_17 - (s8)VAR_12[1];
   } else {
    VAR_14 = (s8)VAR_16 - (s8)VAR_13[0];
    VAR_15 = (s8)VAR_17 - (s8)VAR_13[1];
   }
   VAR_18[VAR_10 % 4] = FUNC_0(VAR_14, VAR_15);
   if (VAR_10 % 4 == 3)
    FUNC_1(VAR_7, VAR_10 - 3,
          VAR_18);
  }
 }
}
