
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_4__ {int dev; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct net_local {struct mii_bus* mii_bus; scalar_t__ base_addr; struct device_node* phy_node; TYPE_1__* ndev; } ;
struct mii_bus {char* name; struct device* parent; int write; int read; struct net_local* priv; int id; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ mem_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 struct mii_bus* FUNC_2 () ;
 int FUNC_3 (struct mii_bus*) ;
 int FUNC_4 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct mii_bus*,struct device_node*) ;
 struct phy_device* FUNC_7 (struct device_node*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,char*,unsigned long long) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct net_local *VAR_7, struct device *VAR_8)
{
 struct mii_bus *VAR_9;
 int VAR_10;
 struct resource VAR_11;
 struct device_node *VAR_12 = FUNC_5(VAR_7->phy_node);
 struct device_node *VAR_13;




 if (!VAR_12) {
  FUNC_0(VAR_8, "Failed to register mdio bus.\n");
  return -VAR_0;
 }
 VAR_13 = FUNC_5(VAR_12);

 FUNC_4(VAR_13, 0, &VAR_11);
 if (VAR_7->ndev->mem_start != VAR_11.start) {
  struct phy_device *VAR_14;
  VAR_14 = FUNC_7(VAR_7->phy_node);
  if (!VAR_14)
   FUNC_1(VAR_8,
     "MDIO of the phy is not registered yet\n");
  else
   FUNC_8(&VAR_14->mdio.dev);
  return 0;
 }




 FUNC_10(VAR_3,
    VAR_7->base_addr + VAR_4);

 VAR_9 = FUNC_2();
 if (!VAR_9) {
  FUNC_0(VAR_8, "Failed to allocate mdiobus\n");
  return -VAR_1;
 }

 FUNC_9(VAR_9->id, VAR_2, "%.8llx",
   (unsigned long long)VAR_11.start);
 VAR_9->priv = VAR_7;
 VAR_9->name = "Xilinx Emaclite MDIO";
 VAR_9->read = VAR_5;
 VAR_9->write = VAR_6;
 VAR_9->parent = VAR_8;

 VAR_10 = FUNC_6(VAR_9, VAR_12);
 if (VAR_10) {
  FUNC_0(VAR_8, "Failed to register mdio bus.\n");
  goto err_register;
 }

 VAR_7->mii_bus = VAR_9;

 return 0;

err_register:
 FUNC_3(VAR_9);
 return VAR_10;
}
