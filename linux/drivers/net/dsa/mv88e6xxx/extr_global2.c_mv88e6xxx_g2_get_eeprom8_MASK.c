
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_chip {int dummy; } ;
struct ethtool_eeprom {unsigned int offset; unsigned int len; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,unsigned int,int *) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_0,
        struct ethtool_eeprom *VAR_1, u8 *VAR_2)
{
 unsigned int VAR_3 = VAR_1->offset;
 unsigned int VAR_4 = VAR_1->len;
 int VAR_5;

 VAR_1->len = 0;

 while (VAR_4) {
  VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_2);
  if (VAR_5)
   return VAR_5;

  VAR_1->len++;
  VAR_3++;
  VAR_2++;
  VAR_4--;
 }

 return 0;
}
