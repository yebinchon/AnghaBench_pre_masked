
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_usb3_port {int dummy; } ;
struct tegra_xusb_padctl {int lock; struct device* dev; } ;
struct tegra_xusb_lane {unsigned int index; TYPE_1__* pad; } ;
struct phy {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_7 (struct tegra_xusb_padctl*,int ,int ) ;
 struct tegra_xusb_lane* FUNC_8 (struct phy*) ;
 struct tegra_xusb_usb3_port* FUNC_9 (struct tegra_xusb_padctl*,unsigned int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct phy *VAR_2)
{
 struct tegra_xusb_lane *VAR_3 = FUNC_8(VAR_2);
 struct tegra_xusb_padctl *VAR_4 = VAR_3->pad->padctl;
 struct tegra_xusb_usb3_port *VAR_5;
 unsigned int VAR_6 = VAR_3->index;
 struct device *VAR_7 = VAR_4->dev;
 u32 VAR_8;

 VAR_5 = FUNC_9(VAR_4, VAR_6);
 if (!VAR_5) {
  FUNC_3(VAR_7, "no port found for USB3 lane %u\n", VAR_6);
  return -VAR_0;
 }

 FUNC_4(&VAR_4->lock);

 VAR_8 = FUNC_6(VAR_4, VAR_1);
 VAR_8 |= FUNC_1(VAR_6);
 FUNC_7(VAR_4, VAR_8, VAR_1);

 FUNC_10(100, 200);

 VAR_8 = FUNC_6(VAR_4, VAR_1);
 VAR_8 |= FUNC_0(VAR_6);
 FUNC_7(VAR_4, VAR_8, VAR_1);

 FUNC_10(250, 350);

 VAR_8 = FUNC_6(VAR_4, VAR_1);
 VAR_8 |= FUNC_2(VAR_6);
 FUNC_7(VAR_4, VAR_8, VAR_1);

 FUNC_5(&VAR_4->lock);

 return 0;
}
