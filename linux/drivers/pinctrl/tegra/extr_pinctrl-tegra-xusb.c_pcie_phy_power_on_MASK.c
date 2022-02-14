
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
 unsigned long VAR_9 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_padctl* FUNC_3 (struct phy*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_10)
{
 struct tegra_xusb_padctl *VAR_11 = FUNC_3(VAR_10);
 unsigned long VAR_12;
 int VAR_13 = -VAR_0;
 u32 VAR_14;

 VAR_14 = FUNC_1(VAR_11, VAR_1);
 VAR_14 &= ~VAR_4;
 FUNC_2(VAR_11, VAR_14, VAR_1);

 VAR_14 = FUNC_1(VAR_11, VAR_5);
 VAR_14 |= VAR_6 |
   VAR_7 |
   VAR_8;
 FUNC_2(VAR_11, VAR_14, VAR_5);

 VAR_14 = FUNC_1(VAR_11, VAR_1);
 VAR_14 |= VAR_3;
 FUNC_2(VAR_11, VAR_14, VAR_1);

 VAR_12 = VAR_9 + FUNC_0(50);

 while (FUNC_4(VAR_9, VAR_12)) {
  VAR_14 = FUNC_1(VAR_11, VAR_1);
  if (VAR_14 & VAR_2) {
   VAR_13 = 0;
   break;
  }

  FUNC_5(100, 200);
 }

 return VAR_13;
}
