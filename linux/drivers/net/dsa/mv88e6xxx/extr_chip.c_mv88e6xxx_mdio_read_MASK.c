
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_mdio_bus {struct mv88e6xxx_chip* chip; } ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct mii_bus {struct mv88e6xxx_mdio_bus* priv; } ;
struct TYPE_4__ {int (* phy_read ) (struct mv88e6xxx_chip*,struct mii_bus*,int,int,int*) ;} ;
struct TYPE_3__ {scalar_t__ family; TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,struct mii_bus*,int,int,int*) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_4, int VAR_5, int VAR_6)
{
 struct mv88e6xxx_mdio_bus *VAR_7 = VAR_4->priv;
 struct mv88e6xxx_chip *VAR_8 = VAR_7->chip;
 u16 VAR_9;
 int VAR_10;

 if (!VAR_8->info->ops->phy_read)
  return -VAR_0;

 FUNC_0(VAR_8);
 VAR_10 = VAR_8->info->ops->phy_read(VAR_8, VAR_4, VAR_5, VAR_6, &VAR_9);
 FUNC_1(VAR_8);

 if (VAR_6 == VAR_1) {

  if (VAR_8->info->family != VAR_2)
   if (!(VAR_9 & 0x3f0))
    VAR_9 |= VAR_3 >> 4;
 }

 return VAR_10 ? VAR_10 : VAR_9;
}
