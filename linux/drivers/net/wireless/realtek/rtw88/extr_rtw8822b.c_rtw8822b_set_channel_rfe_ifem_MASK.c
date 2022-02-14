
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_hal {scalar_t__ antenna_rx; scalar_t__ antenna_tx; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtw_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_7, u8 VAR_8)
{
 struct rtw_hal *VAR_9 = &VAR_7->hal;
 bool VAR_10 = (VAR_8 <= 14) ? 1 : 0;

 if (VAR_10) {

  FUNC_1(VAR_7, VAR_4, 0xffffff, 0x745774);
  FUNC_1(VAR_7, VAR_5, VAR_1, 0x57);
 } else {

  FUNC_1(VAR_7, VAR_4, 0xffffff, 0x477547);
  FUNC_1(VAR_7, VAR_5, VAR_1, 0x75);
 }

 FUNC_1(VAR_7, VAR_3, FUNC_0(11) | FUNC_0(10) | 0x3f, 0x0);

 if (VAR_10) {
  if (VAR_9->antenna_rx == VAR_0 ||
      VAR_9->antenna_tx == VAR_0) {

   FUNC_1(VAR_7, VAR_6, VAR_2, 0xa501);
  } else if (VAR_9->antenna_rx == VAR_9->antenna_tx) {

   FUNC_1(VAR_7, VAR_6, VAR_2, 0xa500);
  } else {

   FUNC_1(VAR_7, VAR_6, VAR_2, 0xa005);
  }
 } else {
  FUNC_1(VAR_7, VAR_6, VAR_2, 0xa5a5);
 }
}
