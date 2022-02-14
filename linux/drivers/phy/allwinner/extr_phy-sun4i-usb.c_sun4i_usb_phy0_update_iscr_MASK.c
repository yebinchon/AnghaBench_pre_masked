
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_usb_phy_data {scalar_t__ base; } ;
struct sun4i_usb_phy {int dummy; } ;
struct phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sun4i_usb_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (scalar_t__) ;
 struct sun4i_usb_phy_data* FUNC_2 (struct sun4i_usb_phy*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct phy *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct sun4i_usb_phy *VAR_4 = FUNC_0(VAR_1);
 struct sun4i_usb_phy_data *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->base + VAR_0);
 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_3;
 FUNC_3(VAR_6, VAR_5->base + VAR_0);
}
