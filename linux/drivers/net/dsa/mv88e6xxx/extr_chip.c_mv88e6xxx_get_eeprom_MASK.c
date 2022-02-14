
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct ethtool_eeprom {int magic; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_eeprom ) (struct mv88e6xxx_chip*,struct ethtool_eeprom*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,struct ethtool_eeprom*,int *) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_1,
    struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_1->priv;
 int VAR_5;

 if (!VAR_4->info->ops->get_eeprom)
  return -VAR_0;

 FUNC_0(VAR_4);
 VAR_5 = VAR_4->info->ops->get_eeprom(VAR_4, VAR_2, VAR_3);
 FUNC_1(VAR_4);

 if (VAR_5)
  return VAR_5;

 VAR_2->magic = 0xc3ec4951;

 return 0;
}
