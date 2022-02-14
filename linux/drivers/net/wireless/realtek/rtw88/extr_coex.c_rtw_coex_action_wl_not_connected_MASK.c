
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_efuse efuse; } ;
struct rtw_chip_info {int * wl_rf_para_rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int,int ) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_1)
{
 struct rtw_efuse *VAR_2 = &VAR_1->efuse;
 struct rtw_chip_info *VAR_3 = VAR_1->chip;
 u8 VAR_4, VAR_5;

 if (VAR_2->share_ant) {

  VAR_4 = 1;
  VAR_5 = 0;
 } else {

  VAR_4 = 100;
  VAR_5 = 100;
 }

 FUNC_0(VAR_1, 1, VAR_0);
 FUNC_1(VAR_1, VAR_3->wl_rf_para_rx[0]);
 FUNC_2(VAR_1, VAR_4);
 FUNC_3(VAR_1, 0, VAR_5);
}
