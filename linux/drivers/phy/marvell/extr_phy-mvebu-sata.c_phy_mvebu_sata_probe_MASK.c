
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct priv {struct phy_provider* clk; struct phy_provider* base; } ;
struct platform_device {int dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 struct phy_provider* FUNC_2 (int *,char*) ;
 struct phy_provider* FUNC_3 (int *,struct resource*) ;
 struct priv* FUNC_4 (int *,int,int ) ;
 struct phy_provider* FUNC_5 (int *,int ) ;
 struct phy_provider* FUNC_6 (int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct phy_provider*) ;
 int FUNC_8 (struct phy_provider*,struct priv*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct phy_provider *VAR_6;
 struct resource *VAR_7;
 struct priv *VAR_8;
 struct phy *VAR_9;

 VAR_8 = FUNC_4(&VAR_5->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_9(VAR_5, VAR_2, 0);
 VAR_8->base = FUNC_3(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->clk = FUNC_2(&VAR_5->dev, "sata");
 if (FUNC_0(VAR_8->clk))
  return FUNC_1(VAR_8->clk);

 VAR_9 = FUNC_6(&VAR_5->dev, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_8(VAR_9, VAR_8);

 VAR_6 = FUNC_5(&VAR_5->dev,
           VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);


 FUNC_7(VAR_9);

 return 0;
}
