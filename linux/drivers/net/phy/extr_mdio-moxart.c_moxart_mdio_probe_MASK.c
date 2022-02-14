
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {char* name; int id; TYPE_1__ dev; } ;
struct moxart_mdio_data {int base; } ;
struct mii_bus {char* name; struct moxart_mdio_data* priv; int * irq; TYPE_1__* parent; int id; int * reset; int * write; int * read; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*,int ) ;
 struct mii_bus* FUNC_3 (int) ;
 int FUNC_4 (struct mii_bus*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct mii_bus*,struct device_node*) ;
 int FUNC_6 (struct platform_device*,struct mii_bus*) ;
 int FUNC_7 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct mii_bus *VAR_9;
 struct moxart_mdio_data *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_3(sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_0;

 VAR_9->name = "MOXA ART Ethernet MII";
 VAR_9->read = &VAR_4;
 VAR_9->write = &VAR_6;
 VAR_9->reset = &VAR_5;
 FUNC_7(VAR_9->id, VAR_1, "%s-%d-mii", VAR_7->name, VAR_7->id);
 VAR_9->parent = &VAR_7->dev;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_9->irq[VAR_12] = VAR_2;

 VAR_10 = VAR_9->priv;
 VAR_10->base = FUNC_2(VAR_7, 0);
 if (FUNC_0(VAR_10->base)) {
  VAR_11 = FUNC_1(VAR_10->base);
  goto err_out_free_mdiobus;
 }

 VAR_11 = FUNC_5(VAR_9, VAR_8);
 if (VAR_11 < 0)
  goto err_out_free_mdiobus;

 FUNC_6(VAR_7, VAR_9);

 return 0;

err_out_free_mdiobus:
 FUNC_4(VAR_9);
 return VAR_11;
}
