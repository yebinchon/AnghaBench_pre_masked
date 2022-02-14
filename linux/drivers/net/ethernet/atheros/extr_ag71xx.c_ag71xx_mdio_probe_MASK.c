
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mii_bus {char* name; int id; struct device* parent; struct ag71xx* priv; int reset; int write; int read; } ;
struct device_node {char* name; } ;
struct device {struct device_node* of_node; } ;
struct ag71xx {int mac_idx; int clk_mdio; struct mii_bus* mii_bus; int mdio_reset; struct net_device* ndev; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 struct mii_bus* FUNC_5 (struct device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ag71xx*,int ,struct net_device*,char*) ;
 struct device_node* FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct mii_bus*,struct device_node*) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*,char*) ;
 int VAR_5 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_15(struct ag71xx *VAR_6)
{
 struct device *VAR_7 = &VAR_6->pdev->dev;
 struct net_device *VAR_8 = VAR_6->ndev;
 static struct mii_bus *VAR_9;
 struct device_node *VAR_10, *VAR_11;
 int VAR_12;

 VAR_10 = VAR_7->of_node;
 VAR_6->mii_bus = ((void*)0);

 VAR_6->clk_mdio = FUNC_4(VAR_7, "mdio");
 if (FUNC_0(VAR_6->clk_mdio)) {
  FUNC_7(VAR_6, VAR_5, VAR_8, "Failed to get mdio clk.\n");
  return FUNC_1(VAR_6->clk_mdio);
 }

 VAR_12 = FUNC_3(VAR_6->clk_mdio);
 if (VAR_12) {
  FUNC_7(VAR_6, VAR_5, VAR_8, "Failed to enable mdio clk.\n");
  return VAR_12;
 }

 VAR_9 = FUNC_5(VAR_7);
 if (!VAR_9) {
  VAR_12 = -VAR_0;
  goto mdio_err_put_clk;
 }

 VAR_6->mdio_reset = FUNC_11(VAR_10, "mdio");
 if (FUNC_0(VAR_6->mdio_reset)) {
  FUNC_7(VAR_6, VAR_5, VAR_8, "Failed to get reset mdio.\n");
  return FUNC_1(VAR_6->mdio_reset);
 }

 VAR_9->name = "ag71xx_mdio";
 VAR_9->read = VAR_2;
 VAR_9->write = VAR_3;
 VAR_9->reset = VAR_4;
 VAR_9->priv = VAR_6;
 VAR_9->parent = VAR_7;
 FUNC_14(VAR_9->id, VAR_1, "%s.%d", VAR_10->name, VAR_6->mac_idx);

 if (!FUNC_0(VAR_6->mdio_reset)) {
  FUNC_12(VAR_6->mdio_reset);
  FUNC_6(100);
  FUNC_13(VAR_6->mdio_reset);
  FUNC_6(200);
 }

 VAR_11 = FUNC_8(VAR_10, "mdio");
 VAR_12 = FUNC_9(VAR_9, VAR_11);
 FUNC_10(VAR_11);
 if (VAR_12)
  goto mdio_err_put_clk;

 VAR_6->mii_bus = VAR_9;

 return 0;

mdio_err_put_clk:
 FUNC_2(VAR_6->clk_mdio);
 return VAR_12;
}
