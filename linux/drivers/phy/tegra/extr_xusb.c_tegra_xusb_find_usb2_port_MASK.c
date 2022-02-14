
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_usb2_port {int dummy; } ;
struct tegra_xusb_port {int dummy; } ;
struct tegra_xusb_padctl {int dummy; } ;


 struct tegra_xusb_port* FUNC_0 (struct tegra_xusb_padctl*,char*,unsigned int) ;
 struct tegra_xusb_usb2_port* FUNC_1 (struct tegra_xusb_port*) ;

struct tegra_xusb_usb2_port *
FUNC_2(struct tegra_xusb_padctl *VAR_0, unsigned int VAR_1)
{
 struct tegra_xusb_port *VAR_2;

 VAR_2 = FUNC_0(VAR_0, "usb2", VAR_1);
 if (VAR_2)
  return FUNC_1(VAR_2);

 return ((void*)0);
}
