
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_mdio_bus {int external; } ;
struct mv88e6xxx_chip {int dummy; } ;
struct mii_bus {struct mv88e6xxx_mdio_bus* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int,int,int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int,int,int *) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_1, struct mii_bus *VAR_2,
         int VAR_3, int VAR_4, u16 *VAR_5)
{
 struct mv88e6xxx_mdio_bus *VAR_6 = VAR_2->priv;
 bool VAR_7 = VAR_6->external;

 if (VAR_4 & VAR_0)
  return FUNC_0(VAR_1, VAR_7, VAR_3, VAR_4,
           VAR_5);

 return FUNC_1(VAR_1, VAR_7, VAR_3, VAR_4,
        VAR_5);
}
