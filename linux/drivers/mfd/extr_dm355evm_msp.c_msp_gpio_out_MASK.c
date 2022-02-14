
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_3, unsigned VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;





 if (FUNC_1(VAR_4) != VAR_0)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = VAR_2;

 VAR_7 &= ~VAR_6;
 if (VAR_5)
  VAR_7 |= VAR_6;
 VAR_2 = VAR_7;

 return FUNC_2(VAR_7, VAR_0);
}
