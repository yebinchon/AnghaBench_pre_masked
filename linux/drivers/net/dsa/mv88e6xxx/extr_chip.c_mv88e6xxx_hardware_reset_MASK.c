
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {struct gpio_desc* reset; } ;
struct gpio_desc {int dummy; } ;


 int FUNC_0 (struct gpio_desc*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct mv88e6xxx_chip *VAR_0)
{
 struct gpio_desc *VAR_1 = VAR_0->reset;


 if (VAR_1) {
  FUNC_0(VAR_1, 1);
  FUNC_1(10000, 20000);
  FUNC_0(VAR_1, 0);
  FUNC_1(10000, 20000);
 }
}
