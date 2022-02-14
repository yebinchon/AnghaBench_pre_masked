
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj_port_mdb {int vid; int addr; } ;
struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {int dev; struct mv88e6xxx_chip* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct mv88e6xxx_chip*,int,int ,int ,int ) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_1, int VAR_2,
       const struct switchdev_obj_port_mdb *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_1->priv;

 FUNC_2(VAR_4);
 if (FUNC_1(VAR_4, VAR_2, VAR_3->addr, VAR_3->vid,
      VAR_0))
  FUNC_0(VAR_1->dev, "p%d: failed to load multicast MAC address\n",
   VAR_2);
 FUNC_3(VAR_4);
}
