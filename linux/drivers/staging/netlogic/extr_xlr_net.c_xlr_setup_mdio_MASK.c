
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xlr_net_priv {int port_id; int phy_addr; TYPE_1__* mii_bus; int base_addr; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {char* name; int phy_mask; int id; int * parent; int write; int read; struct xlr_net_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,char*,char*,int) ;
 int FUNC_6 (struct xlr_net_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct xlr_net_priv *VAR_5,
     struct platform_device *VAR_6)
{
 int VAR_7;

 VAR_5->mii_bus = FUNC_0();
 if (!VAR_5->mii_bus) {
  FUNC_3("mdiobus alloc failed\n");
  return -VAR_0;
 }

 VAR_5->mii_bus->priv = VAR_5;
 VAR_5->mii_bus->name = "xlr-mdio";
 FUNC_5(VAR_5->mii_bus->id, VAR_1, "%s-%d",
   VAR_5->mii_bus->name, VAR_5->port_id);
 VAR_5->mii_bus->read = VAR_3;
 VAR_5->mii_bus->write = VAR_4;
 VAR_5->mii_bus->parent = &VAR_6->dev;


 VAR_5->mii_bus->phy_mask = ~(1 << VAR_5->phy_addr);


 FUNC_7(VAR_5->base_addr, VAR_2, 0x7);

 VAR_7 = FUNC_2(VAR_5->mii_bus);
 if (VAR_7) {
  FUNC_1(VAR_5->mii_bus);
  FUNC_3("mdio bus registration failed\n");
  return VAR_7;
 }

 FUNC_4("Registered mdio bus id : %s\n", VAR_5->mii_bus->id);
 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_5->mii_bus);
  return VAR_7;
 }
 return 0;
}
