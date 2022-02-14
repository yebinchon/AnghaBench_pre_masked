
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sun4i_mdio_data {int * regulator; int * membase; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mii_bus {char* name; struct sun4i_mdio_data* priv; TYPE_1__* parent; int id; int * write; int * read; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 char* FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (struct platform_device*,int ) ;
 int * FUNC_5 (TYPE_1__*,char*) ;
 struct mii_bus* FUNC_6 (int) ;
 int FUNC_7 (struct mii_bus*) ;
 int FUNC_8 (struct mii_bus*,struct device_node*) ;
 int FUNC_9 (struct platform_device*,struct mii_bus*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct mii_bus *VAR_7;
 struct sun4i_mdio_data *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_0;

 VAR_7->name = "sun4i_mii_bus";
 VAR_7->read = &VAR_3;
 VAR_7->write = &VAR_4;
 FUNC_12(VAR_7->id, VAR_2, "%s-mii", FUNC_3(&VAR_5->dev));
 VAR_7->parent = &VAR_5->dev;

 VAR_8 = VAR_7->priv;
 VAR_8->membase = FUNC_4(VAR_5, 0);
 if (FUNC_0(VAR_8->membase)) {
  VAR_9 = FUNC_1(VAR_8->membase);
  goto err_out_free_mdiobus;
 }

 VAR_8->regulator = FUNC_5(&VAR_5->dev, "phy");
 if (FUNC_0(VAR_8->regulator)) {
  if (FUNC_1(VAR_8->regulator) == -VAR_1) {
   VAR_9 = -VAR_1;
   goto err_out_free_mdiobus;
  }

  FUNC_2(&VAR_5->dev, "no regulator found\n");
  VAR_8->regulator = ((void*)0);
 } else {
  VAR_9 = FUNC_11(VAR_8->regulator);
  if (VAR_9)
   goto err_out_free_mdiobus;
 }

 VAR_9 = FUNC_8(VAR_7, VAR_6);
 if (VAR_9 < 0)
  goto err_out_disable_regulator;

 FUNC_9(VAR_5, VAR_7);

 return 0;

err_out_disable_regulator:
 if (VAR_8->regulator)
  FUNC_10(VAR_8->regulator);
err_out_free_mdiobus:
 FUNC_7(VAR_7);
 return VAR_9;
}
