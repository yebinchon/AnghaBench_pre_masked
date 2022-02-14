
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {int dev; struct mv88e6xxx_chip* priv; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct mv88e6xxx_chip*,struct net_device*) ;
 scalar_t__ FUNC_2 (struct mv88e6xxx_chip*,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_5(struct dsa_switch *VAR_0, int VAR_1,
     struct net_device *VAR_2)
{
 struct mv88e6xxx_chip *VAR_3 = VAR_0->priv;

 FUNC_3(VAR_3);
 if (FUNC_1(VAR_3, VAR_2) ||
     FUNC_2(VAR_3, VAR_1))
  FUNC_0(VAR_0->dev, "failed to remap in-chip Port VLAN\n");
 FUNC_4(VAR_3);
}
