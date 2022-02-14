
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct ethtool_eeprom {unsigned int offset; unsigned int len; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,unsigned int,int*) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_0,
         struct ethtool_eeprom *VAR_1, u8 *VAR_2)
{
 unsigned int VAR_3 = VAR_1->offset;
 unsigned int VAR_4 = VAR_1->len;
 u16 VAR_5;
 int VAR_6;

 VAR_1->len = 0;

 if (VAR_3 & 1) {
  VAR_6 = FUNC_0(VAR_0, VAR_3 >> 1, &VAR_5);
  if (VAR_6)
   return VAR_6;

  *VAR_2++ = (VAR_5 >> 8) & 0xff;

  VAR_3++;
  VAR_4--;
  VAR_1->len++;
 }

 while (VAR_4 >= 2) {
  VAR_6 = FUNC_0(VAR_0, VAR_3 >> 1, &VAR_5);
  if (VAR_6)
   return VAR_6;

  *VAR_2++ = VAR_5 & 0xff;
  *VAR_2++ = (VAR_5 >> 8) & 0xff;

  VAR_3 += 2;
  VAR_4 -= 2;
  VAR_1->len += 2;
 }

 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_0, VAR_3 >> 1, &VAR_5);
  if (VAR_6)
   return VAR_6;

  *VAR_2++ = VAR_5 & 0xff;

  VAR_3++;
  VAR_4--;
  VAR_1->len++;
 }

 return 0;
}
