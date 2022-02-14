
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_usb2_port {int dummy; } ;
struct tegra_xusb_padctl {struct device* dev; } ;
struct tegra_xusb_lane {unsigned int index; TYPE_1__* pad; } ;
struct phy {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 int FUNC_3 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_4 (struct tegra_xusb_padctl*,int ,int ) ;
 struct tegra_xusb_lane* FUNC_5 (struct phy*) ;
 int FUNC_6 (struct tegra_xusb_padctl*) ;
 struct tegra_xusb_usb2_port* FUNC_7 (struct tegra_xusb_padctl*,unsigned int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct phy *VAR_2)
{
 struct tegra_xusb_lane *VAR_3 = FUNC_5(VAR_2);
 struct tegra_xusb_padctl *VAR_4 = VAR_3->pad->padctl;
 struct tegra_xusb_usb2_port *VAR_5;
 struct device *VAR_6 = VAR_4->dev;
 unsigned int VAR_7 = VAR_3->index;
 u32 VAR_8;

 if (!VAR_2)
  return;

 VAR_5 = FUNC_7(VAR_4, VAR_7);
 if (!VAR_5) {
  FUNC_2(VAR_6, "no port found for USB2 lane %u\n", VAR_7);
  return;
 }

 FUNC_6(VAR_4);

 FUNC_8(2);

 VAR_8 = FUNC_3(VAR_4, FUNC_0(VAR_7));
 VAR_8 &= ~VAR_0;
 FUNC_4(VAR_4, VAR_8, FUNC_0(VAR_7));

 VAR_8 = FUNC_3(VAR_4, FUNC_1(VAR_7));
 VAR_8 &= ~VAR_1;
 FUNC_4(VAR_4, VAR_8, FUNC_1(VAR_7));
}
