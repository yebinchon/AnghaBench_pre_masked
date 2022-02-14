
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_p2u {struct phy_provider* base; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 struct phy_provider* FUNC_2 (struct device*,struct resource*) ;
 struct tegra_p2u* FUNC_3 (struct device*,int,int ) ;
 struct phy_provider* FUNC_4 (struct device*,int ) ;
 struct phy_provider* FUNC_5 (struct device*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct phy_provider*,struct tegra_p2u*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,char*) ;
 int FUNC_8 (struct platform_device*,struct tegra_p2u*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct phy_provider *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct phy *VAR_8;
 struct tegra_p2u *VAR_9;
 struct resource *VAR_10;

 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_7(VAR_5, VAR_2, "ctl");
 VAR_9->base = FUNC_2(VAR_7, VAR_10);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 FUNC_8(VAR_5, VAR_9);

 VAR_8 = FUNC_5(VAR_7, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_6(VAR_8, VAR_9);

 VAR_6 = FUNC_4(VAR_7, VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 return 0;
}
