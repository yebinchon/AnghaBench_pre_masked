
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct ns2_phy_driver {scalar_t__ icfgdrd_regs; scalar_t__ crmu_usb2_ctrl; } ;
struct ns2_phy_data {struct ns2_phy_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ns2_phy_data* FUNC_0 (struct phy*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_6)
{
 struct ns2_phy_data *VAR_7 = FUNC_0(VAR_6);
 struct ns2_phy_driver *VAR_8 = VAR_7->driver;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_8->crmu_usb2_ctrl);
 VAR_9 &= ~VAR_0;
 FUNC_2(VAR_9, VAR_8->crmu_usb2_ctrl);

 VAR_9 = FUNC_1(VAR_8->crmu_usb2_ctrl);
 VAR_9 &= ~VAR_2;
 FUNC_2(VAR_9, VAR_8->crmu_usb2_ctrl);


 VAR_9 = FUNC_1(VAR_8->icfgdrd_regs + VAR_4);
 VAR_9 &= ~(VAR_3 | VAR_1 | VAR_5);
 FUNC_2(VAR_9, VAR_8->icfgdrd_regs + VAR_4);

 return 0;
}
