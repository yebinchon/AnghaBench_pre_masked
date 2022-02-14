
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_gmii_sel_priv {int phy_provider; int regmap; int soc_data; struct device* dev; } ;
struct of_device_id {int data; } ;
struct device_node {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,struct phy_gmii_sel_priv*) ;
 struct phy_gmii_sel_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ) ;
 struct of_device_id* FUNC_6 (int ,struct device_node*) ;
 int VAR_3 ;
 int FUNC_7 (struct phy_gmii_sel_priv*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 const struct of_device_id *VAR_8;
 struct phy_gmii_sel_priv *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(VAR_3, VAR_5->dev.of_node);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_4(&VAR_5->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = &VAR_5->dev;
 VAR_9->soc_data = VAR_8->data;

 VAR_9->regmap = FUNC_8(VAR_7->parent);
 if (FUNC_0(VAR_9->regmap)) {
  VAR_10 = FUNC_1(VAR_9->regmap);
  FUNC_2(VAR_6, "Failed to get syscon %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(&VAR_5->dev, VAR_9);

 VAR_9->phy_provider =
  FUNC_5(VAR_6,
           VAR_4);
 if (FUNC_0(VAR_9->phy_provider)) {
  VAR_10 = FUNC_1(VAR_9->phy_provider);
  FUNC_2(VAR_6, "Failed to create phy provider %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
