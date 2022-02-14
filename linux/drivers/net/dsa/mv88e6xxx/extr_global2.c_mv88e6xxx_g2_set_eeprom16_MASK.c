
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct ethtool_eeprom {unsigned int offset; unsigned int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv88e6xxx_chip*,unsigned int,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,unsigned int,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ,int*) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_3,
         struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 unsigned int VAR_6 = VAR_4->offset;
 unsigned int VAR_7 = VAR_4->len;
 u16 VAR_8;
 int VAR_9;


 VAR_9 = FUNC_2(VAR_3, VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (!(VAR_8 & VAR_2))
  return -VAR_0;

 VAR_4->len = 0;

 if (VAR_6 & 1) {
  VAR_9 = FUNC_0(VAR_3, VAR_6 >> 1, &VAR_8);
  if (VAR_9)
   return VAR_9;

  VAR_8 = (*VAR_5++ << 8) | (VAR_8 & 0xff);

  VAR_9 = FUNC_1(VAR_3, VAR_6 >> 1, VAR_8);
  if (VAR_9)
   return VAR_9;

  VAR_6++;
  VAR_7--;
  VAR_4->len++;
 }

 while (VAR_7 >= 2) {
  VAR_8 = *VAR_5++;
  VAR_8 |= *VAR_5++ << 8;

  VAR_9 = FUNC_1(VAR_3, VAR_6 >> 1, VAR_8);
  if (VAR_9)
   return VAR_9;

  VAR_6 += 2;
  VAR_7 -= 2;
  VAR_4->len += 2;
 }

 if (VAR_7) {
  VAR_9 = FUNC_0(VAR_3, VAR_6 >> 1, &VAR_8);
  if (VAR_9)
   return VAR_9;

  VAR_8 = (VAR_8 & 0xff00) | *VAR_5++;

  VAR_9 = FUNC_1(VAR_3, VAR_6 >> 1, VAR_8);
  if (VAR_9)
   return VAR_9;

  VAR_6++;
  VAR_7--;
  VAR_4->len++;
 }

 return 0;
}
