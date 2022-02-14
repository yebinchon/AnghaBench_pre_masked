
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_usb2_port {scalar_t__ mode; scalar_t__ supply; } ;
struct tegra_xusb_padctl {struct device* dev; } ;
struct tegra_xusb_lane {unsigned int index; TYPE_1__* pad; } ;
struct phy {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,unsigned int,...) ;
 struct tegra_xusb_lane* FUNC_1 (struct phy*) ;
 int FUNC_2 (scalar_t__) ;
 struct tegra_xusb_usb2_port* FUNC_3 (struct tegra_xusb_padctl*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_2)
{
 struct tegra_xusb_lane *VAR_3 = FUNC_1(VAR_2);
 struct tegra_xusb_padctl *VAR_4 = VAR_3->pad->padctl;
 struct tegra_xusb_usb2_port *VAR_5;
 unsigned int VAR_6 = VAR_3->index;
 struct device *VAR_7 = VAR_4->dev;
 int VAR_8;

 VAR_5 = FUNC_3(VAR_4, VAR_6);
 if (!VAR_5) {
  FUNC_0(VAR_7, "no port found for USB2 lane %u\n", VAR_6);
  return -VAR_0;
 }

 if (VAR_5->supply && VAR_5->mode == VAR_1) {
  VAR_8 = FUNC_2(VAR_5->supply);
  if (VAR_8) {
   FUNC_0(VAR_7, "failed to enable port %u VBUS: %d\n",
    VAR_6, VAR_8);
   return VAR_8;
  }
 }

 return 0;
}
