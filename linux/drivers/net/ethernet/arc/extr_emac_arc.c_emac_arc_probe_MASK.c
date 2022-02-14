
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct net_device {int dummy; } ;
struct arc_emac_priv {int clk; int drv_version; int drv_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*,struct device*) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 struct arc_emac_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct platform_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct net_device *VAR_8;
 struct arc_emac_priv *VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_7->of_node)
  return -VAR_3;

 VAR_8 = FUNC_2(sizeof(struct arc_emac_priv));
 if (!VAR_8)
  return -VAR_4;
 FUNC_9(VAR_6, VAR_8);
 FUNC_1(VAR_8, VAR_7);

 VAR_9 = FUNC_7(VAR_8);
 VAR_9->drv_name = VAR_0;
 VAR_9->drv_version = VAR_1;

 VAR_10 = FUNC_8(VAR_7->of_node);
 if (VAR_10 < 0)
  VAR_10 = VAR_5;

 VAR_9->clk = FUNC_5(VAR_7, "hclk");
 if (FUNC_0(VAR_9->clk)) {
  FUNC_4(VAR_7, "failed to retrieve host clock from device tree\n");
  VAR_11 = -VAR_2;
  goto out_netdev;
 }

 VAR_11 = FUNC_3(VAR_8, VAR_10);
out_netdev:
 if (VAR_11)
  FUNC_6(VAR_8);
 return VAR_11;
}
