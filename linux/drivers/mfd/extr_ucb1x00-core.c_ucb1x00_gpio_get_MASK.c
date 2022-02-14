
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct ucb1x00* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct ucb1x00*) ;
 int FUNC_2 (struct ucb1x00*) ;
 unsigned int FUNC_3 (struct ucb1x00*,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct ucb1x00 *VAR_3 = FUNC_0(VAR_1);
 unsigned VAR_4;

 FUNC_2(VAR_3);
 VAR_4 = FUNC_3(VAR_3, VAR_0);
 FUNC_1(VAR_3);

 return !!(VAR_4 & (1 << VAR_2));
}
