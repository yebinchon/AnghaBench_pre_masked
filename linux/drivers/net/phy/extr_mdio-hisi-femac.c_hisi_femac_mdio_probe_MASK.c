
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {char* name; TYPE_1__ dev; } ;
struct mii_bus {char* name; struct hisi_femac_mdio_data* priv; TYPE_1__* parent; int id; int * write; int * read; } ;
struct hisi_femac_mdio_data {int clk; int membase; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mii_bus* FUNC_6 (int) ;
 int FUNC_7 (struct mii_bus*) ;
 int FUNC_8 (struct mii_bus*,struct device_node*) ;
 int FUNC_9 (struct platform_device*,struct mii_bus*) ;
 int FUNC_10 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 struct mii_bus *VAR_6;
 struct hisi_femac_mdio_data *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_6->name = "hisi_femac_mii_bus";
 VAR_6->read = &VAR_2;
 VAR_6->write = &VAR_3;
 FUNC_10(VAR_6->id, VAR_1, "%s", VAR_4->name);
 VAR_6->parent = &VAR_4->dev;

 VAR_7 = VAR_6->priv;
 VAR_7->membase = FUNC_5(VAR_4, 0);
 if (FUNC_0(VAR_7->membase)) {
  VAR_8 = FUNC_1(VAR_7->membase);
  goto err_out_free_mdiobus;
 }

 VAR_7->clk = FUNC_4(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  VAR_8 = FUNC_1(VAR_7->clk);
  goto err_out_free_mdiobus;
 }

 VAR_8 = FUNC_3(VAR_7->clk);
 if (VAR_8)
  goto err_out_free_mdiobus;

 VAR_8 = FUNC_8(VAR_6, VAR_5);
 if (VAR_8)
  goto err_out_disable_clk;

 FUNC_9(VAR_4, VAR_6);

 return 0;

err_out_disable_clk:
 FUNC_2(VAR_7->clk);
err_out_free_mdiobus:
 FUNC_7(VAR_6);
 return VAR_8;
}
