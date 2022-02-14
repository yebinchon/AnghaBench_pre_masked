
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct phy {int dummy; } ;


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
 unsigned long VAR_10 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_padctl* FUNC_3 (struct phy*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_11)
{
 struct tegra_xusb_padctl *VAR_12 = FUNC_3(VAR_11);
 unsigned long VAR_13;
 int VAR_14 = -VAR_0;
 u32 VAR_15;

 VAR_15 = FUNC_1(VAR_12, VAR_1);
 VAR_15 &= ~VAR_3;
 VAR_15 &= ~VAR_2;
 FUNC_2(VAR_12, VAR_15, VAR_1);

 VAR_15 = FUNC_1(VAR_12, VAR_4);
 VAR_15 &= ~VAR_8;
 VAR_15 &= ~VAR_7;
 FUNC_2(VAR_12, VAR_15, VAR_4);

 VAR_15 = FUNC_1(VAR_12, VAR_4);
 VAR_15 |= VAR_6;
 FUNC_2(VAR_12, VAR_15, VAR_4);

 VAR_15 = FUNC_1(VAR_12, VAR_4);
 VAR_15 |= VAR_9;
 FUNC_2(VAR_12, VAR_15, VAR_4);

 VAR_13 = VAR_10 + FUNC_0(50);

 while (FUNC_4(VAR_10, VAR_13)) {
  VAR_15 = FUNC_1(VAR_12, VAR_4);
  if (VAR_15 & VAR_5) {
   VAR_14 = 0;
   break;
  }

  FUNC_5(100, 200);
 }

 return VAR_14;
}
