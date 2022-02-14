
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_efuse efuse; } ;
struct rtw_chip_info {int * wl_rf_para_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtw_dev*,int,int ) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;
 int FUNC_4 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_2)
{
 struct rtw_efuse *VAR_3 = &VAR_2->efuse;
 struct rtw_chip_info *VAR_4 = VAR_2->chip;
 u8 VAR_5, VAR_6;

 FUNC_4(VAR_2, VAR_0, 0);

 if (VAR_3->share_ant) {

  VAR_5 = 0;
  VAR_6 = 0;
 } else {

  VAR_5 = 100;
  VAR_6 = 100;
 }

 FUNC_0(VAR_2, 1, VAR_1);
 FUNC_1(VAR_2, VAR_4->wl_rf_para_rx[0]);
 FUNC_2(VAR_2, VAR_5);
 FUNC_3(VAR_2, 0, VAR_6);
}
