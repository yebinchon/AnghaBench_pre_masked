
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
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_3 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_lane* FUNC_4 (struct phy*) ;
 int FUNC_5 (int ) ;
 struct tegra_xusb_hsic_pad* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_9)
{
 struct tegra_xusb_lane *VAR_10 = FUNC_4(VAR_9);
 struct tegra_xusb_hsic_pad *VAR_11 = FUNC_6(VAR_10->pad);
 struct tegra_xusb_padctl *VAR_12 = VAR_10->pad->padctl;
 unsigned int VAR_13 = VAR_10->index;
 u32 VAR_14;

 VAR_14 = FUNC_2(VAR_12, FUNC_0(VAR_13));
 VAR_14 |= VAR_0 |
   VAR_1 |
   VAR_2 |
   VAR_6 |
   VAR_7 |
   VAR_8 |
   VAR_3 |
   VAR_4 |
   VAR_5;
 FUNC_3(VAR_12, VAR_14, FUNC_1(VAR_13));

 FUNC_5(VAR_11->supply);

 return 0;
}
