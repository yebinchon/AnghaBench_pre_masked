
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_phy_cond {int cut; int pkg; int plat; int intf; int rfe; int member_0; } ;
struct rtw_hal {int cut_version; struct rtw_phy_cond phy_cond; } ;
struct rtw_efuse {int rfe_option; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_hal hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct rtw_dev*,int ,char*,int) ;
 int FUNC_1 (struct rtw_dev*) ;

void FUNC_2(struct rtw_dev *VAR_4, u32 VAR_5)
{
 struct rtw_hal *VAR_6 = &VAR_4->hal;
 struct rtw_efuse *VAR_7 = &VAR_4->efuse;
 struct rtw_phy_cond VAR_8 = {0};

 VAR_8.cut = VAR_6->cut_version ? VAR_6->cut_version : 15;
 VAR_8.pkg = VAR_5 ? VAR_5 : 15;
 VAR_8.plat = 0x04;
 VAR_8.rfe = VAR_7->rfe_option;

 switch (FUNC_1(VAR_4)) {
 case 128:
  VAR_8.intf = VAR_2;
  break;
 case 129:
  VAR_8.intf = VAR_1;
  break;
 case 130:
 default:
  VAR_8.intf = VAR_0;
  break;
 }

 VAR_6->phy_cond = VAR_8;

 FUNC_0(VAR_4, VAR_3, "phy cond=0x%08x\n", *((u32 *)&VAR_6->phy_cond));
}
