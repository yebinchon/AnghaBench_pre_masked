
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct hi6220_priv {struct phy* reg; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 struct hi6220_priv* FUNC_4 (struct device*,int,int ) ;
 struct phy_provider* FUNC_5 (struct device*,int ) ;
 struct phy* FUNC_6 (struct device*,int *,int *) ;
 int FUNC_7 (struct hi6220_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct phy*,struct hi6220_priv*) ;
 struct phy* FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct phy_provider *VAR_5;
 struct device *VAR_6 = &VAR_4->dev;
 struct phy *VAR_7;
 struct hi6220_priv *VAR_8;

 VAR_8 = FUNC_4(VAR_6, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->dev = VAR_6;
 VAR_8->reg = FUNC_9(VAR_6->of_node,
     "hisilicon,peripheral-syscon");
 if (FUNC_0(VAR_8->reg)) {
  FUNC_3(VAR_6, "no hisilicon,peripheral-syscon\n");
  return FUNC_1(VAR_8->reg);
 }

 FUNC_7(VAR_8);

 VAR_7 = FUNC_6(VAR_6, ((void*)0), &VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_8(VAR_7, VAR_8);
 VAR_5 = FUNC_5(VAR_6, VAR_3);
 return FUNC_2(VAR_5);
}
