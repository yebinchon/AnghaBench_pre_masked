
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
 int VAR_7 ;
 int FUNC_1 (struct rtw_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_8, u8 VAR_9)
{
 struct rtw_hal *VAR_10 = &VAR_8->hal;
 bool VAR_11 = (VAR_9 <= 14) ? 1 : 0;

 if (VAR_11) {
  FUNC_1(VAR_8, VAR_5, 0xffffff, 0x705770);
  FUNC_1(VAR_8, VAR_6, VAR_1, 0x57);
  FUNC_1(VAR_8, VAR_3, FUNC_0(4), 0);
 } else {
  FUNC_1(VAR_8, VAR_5, 0xffffff, 0x177517);
  FUNC_1(VAR_8, VAR_6, VAR_1, 0x75);
  FUNC_1(VAR_8, VAR_3, FUNC_0(5), 0);
 }

 FUNC_1(VAR_8, VAR_4, FUNC_0(11) | FUNC_0(10) | 0x3f, 0x0);

 if (VAR_10->antenna_rx == VAR_0 ||
     VAR_10->antenna_tx == VAR_0) {

  FUNC_1(VAR_8, VAR_7, VAR_2, 0xa501);
 } else if (VAR_10->antenna_rx == VAR_10->antenna_tx) {

  FUNC_1(VAR_8, VAR_7, VAR_2, 0xa500);
 } else {

  FUNC_1(VAR_8, VAR_7, VAR_2, 0xa005);
 }
}
