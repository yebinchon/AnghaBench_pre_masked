
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane {TYPE_1__* pad; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_1 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_lane* FUNC_2 (struct phy*) ;
 int FUNC_3 (struct tegra_xusb_padctl*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_4)
{
 struct tegra_xusb_lane *VAR_5 = FUNC_2(VAR_4);
 struct tegra_xusb_padctl *VAR_6 = VAR_5->pad->padctl;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 VAR_7 &= ~(VAR_1 <<
     VAR_2);
 VAR_7 |= VAR_3 <<
   VAR_2;
 FUNC_1(VAR_6, VAR_7, VAR_0);

 return FUNC_3(VAR_6);
}
