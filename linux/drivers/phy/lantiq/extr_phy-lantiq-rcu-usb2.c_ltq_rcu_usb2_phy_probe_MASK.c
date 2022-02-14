
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct ltq_rcu_usb2_priv {struct device* dev; struct phy_provider* phy; int phy_reset; int ctrl_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct ltq_rcu_usb2_priv*) ;
 struct ltq_rcu_usb2_priv* FUNC_4 (struct device*,int,int ) ;
 struct phy_provider* FUNC_5 (struct device*,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ,int *) ;
 int FUNC_7 (struct ltq_rcu_usb2_priv*,struct platform_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct phy_provider*,struct ltq_rcu_usb2_priv*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct ltq_rcu_usb2_priv *VAR_6;
 struct phy_provider *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = VAR_5;

 VAR_8 = FUNC_7(VAR_6, VAR_4);
 if (VAR_8)
  return VAR_8;


 FUNC_10(VAR_6->ctrl_reset);

 FUNC_9(VAR_6->phy_reset);

 VAR_6->phy = FUNC_6(VAR_5, VAR_5->of_node, &VAR_2);
 if (FUNC_0(VAR_6->phy)) {
  FUNC_2(VAR_5, "failed to create PHY\n");
  return FUNC_1(VAR_6->phy);
 }

 FUNC_8(VAR_6->phy, VAR_6);

 VAR_7 = FUNC_5(VAR_5, VAR_3);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_3(VAR_6->dev, VAR_6);
 return 0;
}
