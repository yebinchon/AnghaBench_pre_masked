
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_usb_instance {TYPE_1__* phy_cfg; } ;
struct phy {int dummy; } ;
struct exynos5_usbdrd_phy {int clk; scalar_t__ reg_phy; } ;
struct TYPE_2__ {int (* set_refclk ) (struct phy_usb_instance*) ;int (* phy_init ) (struct exynos5_usbdrd_phy*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct phy_usb_instance* FUNC_3 (struct phy*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct exynos5_usbdrd_phy*) ;
 int FUNC_6 (struct phy_usb_instance*) ;
 struct exynos5_usbdrd_phy* FUNC_7 (struct phy_usb_instance*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct phy *VAR_14)
{
 int VAR_15;
 u32 VAR_16;
 struct phy_usb_instance *VAR_17 = FUNC_3(VAR_14);
 struct exynos5_usbdrd_phy *VAR_18 = FUNC_7(VAR_17);

 VAR_15 = FUNC_2(VAR_18->clk);
 if (VAR_15)
  return VAR_15;


 FUNC_9(0x0, VAR_18->reg_phy + VAR_3);
 FUNC_9(0x0, VAR_18->reg_phy + VAR_4);





 VAR_16 = VAR_6 |
  FUNC_0(0x20);
 FUNC_9(VAR_16, VAR_18->reg_phy + VAR_0);

 VAR_16 = FUNC_4(VAR_18->reg_phy + VAR_2);

 VAR_16 &= ~VAR_12;
 FUNC_9(VAR_16, VAR_18->reg_phy + VAR_2);


 VAR_16 = FUNC_4(VAR_18->reg_phy + VAR_5);
 VAR_16 |= VAR_13;
 FUNC_9(VAR_16, VAR_18->reg_phy + VAR_5);


 VAR_17->phy_cfg->phy_init(VAR_18);


 VAR_16 = VAR_17->phy_cfg->set_refclk(VAR_17);


 VAR_16 |= VAR_10 |

  VAR_9 |

  VAR_11 |

  VAR_7 |

  VAR_8;

 FUNC_9(VAR_16, VAR_18->reg_phy + VAR_1);

 FUNC_8(10);

 VAR_16 &= ~VAR_8;
 FUNC_9(VAR_16, VAR_18->reg_phy + VAR_1);

 FUNC_1(VAR_18->clk);

 return 0;
}
