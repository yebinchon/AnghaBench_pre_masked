
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_p2u {int dummy; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tegra_p2u*,int ) ;
 int FUNC_1 (struct tegra_p2u*,int ,int ) ;
 struct tegra_p2u* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_8)
{
 struct tegra_p2u *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_9, VAR_0);
 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_1;
 FUNC_1(VAR_9, VAR_10, VAR_0);

 VAR_10 = FUNC_0(VAR_9, VAR_3);
 VAR_10 |= VAR_4;
 FUNC_1(VAR_9, VAR_10, VAR_3);

 VAR_10 = FUNC_0(VAR_9, VAR_5);
 VAR_10 &= ~VAR_6;
 VAR_10 |= VAR_7;
 FUNC_1(VAR_9, VAR_10, VAR_5);

 return 0;
}
