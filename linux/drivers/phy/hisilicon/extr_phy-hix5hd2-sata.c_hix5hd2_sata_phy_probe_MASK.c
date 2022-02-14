
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct hix5hd2_priv {struct phy* peri_ctrl; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ,int ) ;
 struct hix5hd2_priv* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 struct phy* FUNC_7 (struct device*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct phy*,struct hix5hd2_priv*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct resource*) ;
 struct phy* FUNC_11 (int ,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct phy_provider *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct resource *VAR_9;
 struct phy *VAR_10;
 struct hix5hd2_priv *VAR_11;

 VAR_11 = FUNC_5(VAR_8, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_9 = FUNC_9(VAR_6, VAR_3, 0);
 if (!VAR_9)
  return -VAR_0;

 VAR_11->base = FUNC_4(VAR_8, VAR_9->start, FUNC_10(VAR_9));
 if (!VAR_11->base)
  return -VAR_1;

 VAR_11->peri_ctrl = FUNC_11(VAR_8->of_node,
     "hisilicon,peripheral-syscon");
 if (FUNC_0(VAR_11->peri_ctrl))
  VAR_11->peri_ctrl = ((void*)0);

 VAR_10 = FUNC_7(VAR_8, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_8, "failed to create PHY\n");
  return FUNC_1(VAR_10);
 }

 FUNC_8(VAR_10, VAR_11);
 VAR_7 = FUNC_6(VAR_8, VAR_5);
 return FUNC_2(VAR_7);
}
