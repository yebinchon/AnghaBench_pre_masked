
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int eeprom_len; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;



__attribute__((used)) static int FUNC_0(struct dsa_switch *VAR_0)
{
 struct mv88e6xxx_chip *VAR_1 = VAR_0->priv;

 return VAR_1->eeprom_len;
}
