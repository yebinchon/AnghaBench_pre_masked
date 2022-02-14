
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct macb {TYPE_2__* mii_bus; int phy_node; TYPE_7__* dev; TYPE_1__* pdev; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {char* name; TYPE_9__* parent; struct macb* priv; int id; int * write; int * read; } ;
struct TYPE_10__ {char* name; int id; TYPE_9__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_9__*,char*,struct device_node*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (struct macb*,int ,int ) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,struct device_node*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct device_node*) ;
 scalar_t__ FUNC_12 (struct device_node*) ;
 scalar_t__ FUNC_13 (struct device_node*) ;
 int FUNC_14 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_15(struct macb *VAR_7)
{
 struct device_node *VAR_8;
 int VAR_9 = -VAR_1;


 FUNC_4(VAR_7, VAR_4, FUNC_0(VAR_3));

 VAR_7->mii_bus = FUNC_5();
 if (!VAR_7->mii_bus) {
  VAR_9 = -VAR_0;
  goto err_out;
 }

 VAR_7->mii_bus->name = "MACB_mii_bus";
 VAR_7->mii_bus->read = &VAR_5;
 VAR_7->mii_bus->write = &VAR_6;
 FUNC_14(VAR_7->mii_bus->id, VAR_2, "%s-%x",
   VAR_7->pdev->name, VAR_7->pdev->id);
 VAR_7->mii_bus->priv = VAR_7;
 VAR_7->mii_bus->parent = &VAR_7->pdev->dev;

 FUNC_2(&VAR_7->dev->dev, VAR_7->mii_bus);

 VAR_8 = VAR_7->pdev->dev.of_node;
 if (VAR_8 && FUNC_12(VAR_8)) {
  if (FUNC_13(VAR_8) < 0) {
   FUNC_1(&VAR_7->pdev->dev,
    "broken fixed-link specification %pOF\n", VAR_8);
   goto err_out_free_mdiobus;
  }

  VAR_9 = FUNC_7(VAR_7->mii_bus);
 } else {
  VAR_9 = FUNC_9(VAR_7->mii_bus, VAR_8);
 }

 if (VAR_9)
  goto err_out_free_fixed_link;

 VAR_9 = FUNC_3(VAR_7->dev);
 if (VAR_9)
  goto err_out_unregister_bus;

 return 0;

err_out_unregister_bus:
 FUNC_8(VAR_7->mii_bus);
err_out_free_fixed_link:
 if (VAR_8 && FUNC_12(VAR_8))
  FUNC_11(VAR_8);
err_out_free_mdiobus:
 FUNC_10(VAR_7->phy_node);
 FUNC_6(VAR_7->mii_bus);
err_out:
 return VAR_9;
}
