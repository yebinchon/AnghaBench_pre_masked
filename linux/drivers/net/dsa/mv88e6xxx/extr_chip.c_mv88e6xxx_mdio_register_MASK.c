
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_mdio_bus {int external; int list; struct mv88e6xxx_chip* chip; struct mii_bus* bus; } ;
struct mv88e6xxx_chip {int mdios; int dev; } ;
struct mii_bus {char* name; int parent; int write; int read; int id; struct mv88e6xxx_mdio_bus* priv; } ;
struct device_node {char* full_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 struct mii_bus* FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mv88e6xxx_chip*,struct mii_bus*) ;
 int FUNC_6 (struct mv88e6xxx_chip*,struct mii_bus*) ;
 int FUNC_7 (struct mv88e6xxx_chip*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct mv88e6xxx_chip*) ;
 int FUNC_9 (struct mv88e6xxx_chip*) ;
 int FUNC_10 (struct mii_bus*,struct device_node*) ;
 int FUNC_11 (int ,int ,char*,struct device_node*) ;

__attribute__((used)) static int FUNC_12(struct mv88e6xxx_chip *VAR_4,
       struct device_node *VAR_5,
       bool VAR_6)
{
 static int VAR_7;
 struct mv88e6xxx_mdio_bus *VAR_8;
 struct mii_bus *VAR_9;
 int VAR_10;

 if (VAR_6) {
  FUNC_8(VAR_4);
  VAR_10 = FUNC_7(VAR_4, 1);
  FUNC_9(VAR_4);

  if (VAR_10)
   return VAR_10;
 }

 VAR_9 = FUNC_2(VAR_4->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = VAR_9->priv;
 VAR_8->bus = VAR_9;
 VAR_8->chip = VAR_4;
 FUNC_0(&VAR_8->list);
 VAR_8->external = VAR_6;

 if (VAR_5) {
  VAR_9->name = VAR_5->full_name;
  FUNC_11(VAR_9->id, VAR_1, "%pOF", VAR_5);
 } else {
  VAR_9->name = "mv88e6xxx SMI";
  FUNC_11(VAR_9->id, VAR_1, "mv88e6xxx-%d", VAR_7++);
 }

 VAR_9->read = VAR_2;
 VAR_9->write = VAR_3;
 VAR_9->parent = VAR_4->dev;

 if (!VAR_6) {
  VAR_10 = FUNC_6(VAR_4, VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_10(VAR_9, VAR_5);
 if (VAR_10) {
  FUNC_1(VAR_4->dev, "Cannot register MDIO bus (%d)\n", VAR_10);
  FUNC_5(VAR_4, VAR_9);
  return VAR_10;
 }

 if (VAR_6)
  FUNC_4(&VAR_8->list, &VAR_4->mdios);
 else
  FUNC_3(&VAR_8->list, &VAR_4->mdios);

 return 0;
}
