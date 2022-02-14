
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct bcm_usb_phy_cfg {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bcm_usb_phy_cfg*) ;
 int FUNC_1 (struct bcm_usb_phy_cfg*) ;
 struct bcm_usb_phy_cfg* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_3)
{
 struct bcm_usb_phy_cfg *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = -VAR_0;

 if (VAR_4->type == VAR_2)
  VAR_5 = FUNC_1(VAR_4);
 else if (VAR_4->type == VAR_1)
  VAR_5 = FUNC_0(VAR_4);

 return VAR_5;
}
