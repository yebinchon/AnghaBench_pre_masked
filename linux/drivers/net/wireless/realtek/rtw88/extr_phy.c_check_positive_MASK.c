
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_phy_cond {scalar_t__ cut; scalar_t__ pkg; scalar_t__ intf; scalar_t__ rfe; } ;
struct rtw_hal {struct rtw_phy_cond phy_cond; } ;
struct rtw_dev {struct rtw_hal hal; } ;



__attribute__((used)) static bool FUNC_0(struct rtw_dev *VAR_0, struct rtw_phy_cond VAR_1)
{
 struct rtw_hal *VAR_2 = &VAR_0->hal;
 struct rtw_phy_cond VAR_3 = VAR_2->phy_cond;

 if (VAR_1.cut && VAR_1.cut != VAR_3.cut)
  return 0;

 if (VAR_1.pkg && VAR_1.pkg != VAR_3.pkg)
  return 0;

 if (VAR_1.intf && VAR_1.intf != VAR_3.intf)
  return 0;

 if (VAR_1.rfe != VAR_3.rfe)
  return 0;

 return 1;
}
