
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_4 == VAR_0)
  VAR_1 = VAR_5;
 return !!(VAR_5 & FUNC_0(VAR_3));
}
