
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane {int index; TYPE_1__* pad; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_3 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_lane* FUNC_4 (struct phy*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_11)
{
 struct tegra_xusb_lane *VAR_12 = FUNC_4(VAR_11);
 struct tegra_xusb_padctl *VAR_13 = VAR_12->pad->padctl;
 unsigned long VAR_14;
 int VAR_15 = -VAR_0;
 u32 VAR_16;

 VAR_16 = FUNC_2(VAR_13, VAR_1);
 VAR_16 &= ~VAR_4;
 FUNC_3(VAR_13, VAR_16, VAR_1);

 VAR_16 = FUNC_2(VAR_13, VAR_5);
 VAR_16 |= VAR_6 |
   VAR_7 |
   VAR_8;
 FUNC_3(VAR_13, VAR_16, VAR_5);

 VAR_16 = FUNC_2(VAR_13, VAR_1);
 VAR_16 |= VAR_3;
 FUNC_3(VAR_13, VAR_16, VAR_1);

 VAR_14 = VAR_10 + FUNC_1(50);

 while (FUNC_5(VAR_10, VAR_14)) {
  VAR_16 = FUNC_2(VAR_13, VAR_1);
  if (VAR_16 & VAR_2) {
   VAR_15 = 0;
   break;
  }

  FUNC_6(100, 200);
 }

 VAR_16 = FUNC_2(VAR_13, VAR_9);
 VAR_16 |= FUNC_0(VAR_12->index);
 FUNC_3(VAR_13, VAR_16, VAR_9);

 return VAR_15;
}
