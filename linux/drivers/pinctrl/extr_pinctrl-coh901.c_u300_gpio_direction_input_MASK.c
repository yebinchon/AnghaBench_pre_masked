
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct u300_gpio {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 struct u300_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_1 ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct u300_gpio *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_3(VAR_5);
 VAR_6 = FUNC_4(FUNC_0(VAR_3, VAR_1));

 VAR_6 &= ~(VAR_0 << ((VAR_3 & 0x07) << 1));
 FUNC_5(VAR_6, FUNC_0(VAR_3, VAR_1));
 FUNC_2(VAR_5);
 return 0;
}
