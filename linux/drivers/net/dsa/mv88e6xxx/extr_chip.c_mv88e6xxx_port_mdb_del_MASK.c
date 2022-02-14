
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj_port_mdb {int vid; int addr; } ;
struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int ,int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_0, int VAR_1,
      const struct switchdev_obj_port_mdb *VAR_2)
{
 struct mv88e6xxx_chip *VAR_3 = VAR_0->priv;
 int VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2->addr, VAR_2->vid, 0);
 FUNC_2(VAR_3);

 return VAR_4;
}
