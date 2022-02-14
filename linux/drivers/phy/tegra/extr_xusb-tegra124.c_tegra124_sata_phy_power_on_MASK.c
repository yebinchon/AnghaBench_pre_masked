
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
 int VAR_10 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_11 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_3 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_lane* FUNC_4 (struct phy*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_12)
{
 struct tegra_xusb_lane *VAR_13 = FUNC_4(VAR_12);
 struct tegra_xusb_padctl *VAR_14 = VAR_13->pad->padctl;
 unsigned long VAR_15;
 int VAR_16 = -VAR_0;
 u32 VAR_17;

 VAR_17 = FUNC_2(VAR_14, VAR_1);
 VAR_17 &= ~VAR_3;
 VAR_17 &= ~VAR_2;
 FUNC_3(VAR_14, VAR_17, VAR_1);

 VAR_17 = FUNC_2(VAR_14, VAR_4);
 VAR_17 &= ~VAR_8;
 VAR_17 &= ~VAR_7;
 FUNC_3(VAR_14, VAR_17, VAR_4);

 VAR_17 = FUNC_2(VAR_14, VAR_4);
 VAR_17 |= VAR_6;
 FUNC_3(VAR_14, VAR_17, VAR_4);

 VAR_17 = FUNC_2(VAR_14, VAR_4);
 VAR_17 |= VAR_9;
 FUNC_3(VAR_14, VAR_17, VAR_4);

 VAR_15 = VAR_11 + FUNC_1(50);

 while (FUNC_5(VAR_11, VAR_15)) {
  VAR_17 = FUNC_2(VAR_14, VAR_4);
  if (VAR_17 & VAR_5) {
   VAR_16 = 0;
   break;
  }

  FUNC_6(100, 200);
 }

 VAR_17 = FUNC_2(VAR_14, VAR_10);
 VAR_17 |= FUNC_0(VAR_13->index);
 FUNC_3(VAR_14, VAR_17, VAR_10);

 return VAR_16;
}
