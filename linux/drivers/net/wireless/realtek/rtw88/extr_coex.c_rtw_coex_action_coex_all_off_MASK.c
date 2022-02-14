
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_efuse efuse; } ;
struct rtw_chip_info {int * wl_rf_para_rx; } ;


 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int) ;
 int FUNC_2 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_0)
{
 struct rtw_efuse *VAR_1 = &VAR_0->efuse;
 struct rtw_chip_info *VAR_2 = VAR_0->chip;
 u8 VAR_3, VAR_4;

 if (VAR_1->share_ant) {

  VAR_3 = 2;
  VAR_4 = 0;
 } else {

  VAR_3 = 100;
  VAR_4 = 100;
 }

 FUNC_0(VAR_0, VAR_2->wl_rf_para_rx[0]);
 FUNC_1(VAR_0, VAR_3);
 FUNC_2(VAR_0, 0, VAR_4);
}
