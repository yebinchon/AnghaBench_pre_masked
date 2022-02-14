
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_usb2_port {int supply; } ;
struct tegra_xusb_usb2_pad {scalar_t__ enable; int lock; } ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane {int index; TYPE_1__* pad; } ;
struct phy {int dev; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_5 (struct tegra_xusb_padctl*,int ,int ) ;
 struct tegra_xusb_lane* FUNC_6 (struct phy*) ;
 int FUNC_7 (int ) ;
 struct tegra_xusb_usb2_port* FUNC_8 (struct tegra_xusb_padctl*,int ) ;
 struct tegra_xusb_usb2_pad* FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct phy *VAR_3)
{
 struct tegra_xusb_lane *VAR_4 = FUNC_6(VAR_3);
 struct tegra_xusb_usb2_pad *VAR_5 = FUNC_9(VAR_4->pad);
 struct tegra_xusb_padctl *VAR_6 = VAR_4->pad->padctl;
 struct tegra_xusb_usb2_port *VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_8(VAR_6, VAR_4->index);
 if (!VAR_7) {
  FUNC_1(&VAR_3->dev, "no port found for USB2 lane %u\n",
   VAR_4->index);
  return -VAR_0;
 }

 FUNC_2(&VAR_5->lock);

 if (FUNC_0(VAR_5->enable == 0))
  goto out;

 if (--VAR_5->enable > 0)
  goto out;

 VAR_8 = FUNC_4(VAR_6, VAR_1);
 VAR_8 |= VAR_2;
 FUNC_5(VAR_6, VAR_8, VAR_1);

out:
 FUNC_7(VAR_7->supply);
 FUNC_3(&VAR_5->lock);
 return 0;
}
