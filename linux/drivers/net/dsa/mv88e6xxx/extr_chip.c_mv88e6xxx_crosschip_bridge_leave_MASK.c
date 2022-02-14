
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {int dev; struct mv88e6xxx_chip* priv; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 scalar_t__ FUNC_2 (struct mv88e6xxx_chip*,int,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_5(struct dsa_switch *VAR_0, int VAR_1,
          int VAR_2, struct net_device *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_0->priv;

 if (!FUNC_1(VAR_4))
  return;

 FUNC_3(VAR_4);
 if (FUNC_2(VAR_4, VAR_1, VAR_2))
  FUNC_0(VAR_0->dev, "failed to remap cross-chip Port VLAN\n");
 FUNC_4(VAR_4);
}
