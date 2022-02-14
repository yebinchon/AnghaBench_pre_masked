
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 struct gpio_desc* FUNC_0 (struct device*,char*,int,int) ;

__attribute__((used)) static struct gpio_desc *FUNC_1(struct device *VAR_2, int VAR_3)
{






 switch (VAR_3) {
 case 128:
 case 130:
  return FUNC_0(VAR_2, "enable", 0,
    VAR_1 | VAR_0);
 case 129:
 case 131:
  return FUNC_0(VAR_2, "enable", 1,
    VAR_1 | VAR_0);
 default:
  return ((void*)0);
 }
}
