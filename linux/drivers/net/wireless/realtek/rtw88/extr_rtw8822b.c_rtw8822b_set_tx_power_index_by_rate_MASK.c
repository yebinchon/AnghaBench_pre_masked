
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtw_hal {size_t** tx_pwr_tbl; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 size_t** VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (struct rtw_dev*,int const,int) ;

__attribute__((used)) static void
FUNC_1(struct rtw_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct rtw_hal *VAR_5 = &VAR_2->hal;
 static const u32 VAR_6[2] = {0x1d00, 0x1d80};
 static u32 VAR_7;
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_1[VAR_4]; VAR_12++) {
  VAR_8 = VAR_0[VAR_4][VAR_12];
  VAR_10 = VAR_5->tx_pwr_tbl[VAR_3][VAR_8];
  VAR_11 = VAR_8 & 0x3;
  VAR_7 |= ((u32)VAR_10 << (VAR_11 * 8));
  if (VAR_11 == 0x3) {
   VAR_9 = VAR_8 & 0xfc;
   FUNC_0(VAR_2, VAR_6[VAR_3] + VAR_9,
        VAR_7);
   VAR_7 = 0;
  }
 }
}
