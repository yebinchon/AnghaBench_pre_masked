
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_chip {int* gpio_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_1,
           unsigned int VAR_2, int VAR_3)
{
 u8 VAR_4 = (1 << (VAR_2 & 0x7));
 int VAR_5 = (VAR_2 / 8);
 int VAR_6;

 VAR_6 = VAR_0 + VAR_5;

 if (VAR_3)
  VAR_1->gpio_data[VAR_5] |= VAR_4;
 else
  VAR_1->gpio_data[VAR_5] &= ~VAR_4;

 return FUNC_0(VAR_1, VAR_6, VAR_1->gpio_data[VAR_5]);
}
