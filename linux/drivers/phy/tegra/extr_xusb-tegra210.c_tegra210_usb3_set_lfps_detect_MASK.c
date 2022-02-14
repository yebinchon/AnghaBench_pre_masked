
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_port {struct tegra_xusb_lane* lane; } ;
struct tegra_xusb_padctl {scalar_t__ pcie; } ;
struct tegra_xusb_lane {scalar_t__ pad; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (struct tegra_xusb_padctl*,int) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int,int) ;
 struct tegra_xusb_port* FUNC_3 (struct tegra_xusb_padctl*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct tegra_xusb_padctl *VAR_7,
      unsigned int VAR_8, bool VAR_9)
{
 struct tegra_xusb_port *VAR_10;
 struct tegra_xusb_lane *VAR_11;
 u32 VAR_12, VAR_13;

 VAR_10 = FUNC_3(VAR_7, "usb3", VAR_8);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = VAR_10->lane;

 if (VAR_11->pad == VAR_7->pcie)
  VAR_13 = FUNC_0(VAR_11->index);
 else
  VAR_13 = VAR_6;

 VAR_12 = FUNC_1(VAR_7, VAR_13);

 VAR_12 &= ~((VAR_1 <<
      VAR_2) |
     VAR_5 |
     VAR_4);

 if (!VAR_9) {
  VAR_12 |= (VAR_3 <<
     VAR_2) |
    VAR_5 |
    VAR_4;
 }

 FUNC_2(VAR_7, VAR_12, VAR_13);

 return 0;
}
