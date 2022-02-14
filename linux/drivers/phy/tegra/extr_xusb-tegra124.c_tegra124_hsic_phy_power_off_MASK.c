
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane {unsigned int index; TYPE_1__* pad; } ;
struct tegra_xusb_hsic_pad {int supply; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_lane* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ) ;
 struct tegra_xusb_hsic_pad* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_4)
{
 struct tegra_xusb_lane *VAR_5 = FUNC_3(VAR_4);
 struct tegra_xusb_hsic_pad *VAR_6 = FUNC_5(VAR_5->pad);
 struct tegra_xusb_padctl *VAR_7 = VAR_5->pad->padctl;
 unsigned int VAR_8 = VAR_5->index;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_7, FUNC_0(VAR_8));
 VAR_9 |= VAR_0 |
   VAR_3 |
   VAR_1 |
   VAR_2;
 FUNC_2(VAR_7, VAR_9, FUNC_0(VAR_8));

 FUNC_4(VAR_6->supply);

 return 0;
}
