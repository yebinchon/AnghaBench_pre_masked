
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct mii_bus {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* phy_write ) (struct mv88e6xxx_chip*,struct mii_bus*,int,int,int ) ;} ;


 int VAR_0 ;
 struct mii_bus* FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,struct mii_bus*,int,int,int ) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_1, int VAR_2, int VAR_3, u16 VAR_4)
{
 int VAR_5 = VAR_2;
 struct mii_bus *VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (!VAR_6)
  return -VAR_0;

 if (!VAR_1->info->ops->phy_write)
  return -VAR_0;

 return VAR_1->info->ops->phy_write(VAR_1, VAR_6, VAR_5, VAR_3, VAR_4);
}
