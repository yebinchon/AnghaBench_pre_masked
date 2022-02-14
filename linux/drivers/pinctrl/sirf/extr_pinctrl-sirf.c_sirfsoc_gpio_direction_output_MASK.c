
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sirfsoc_gpio_chip {int lock; } ;
struct sirfsoc_gpio_bank {int id; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct sirfsoc_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct sirfsoc_gpio_chip*,struct sirfsoc_gpio_bank*,int ,int) ;
 struct sirfsoc_gpio_bank* FUNC_3 (struct sirfsoc_gpio_chip*,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_0,
 unsigned VAR_1, int VAR_2)
{
 struct sirfsoc_gpio_chip *VAR_3 = FUNC_1(VAR_0);
 struct sirfsoc_gpio_bank *VAR_4 = FUNC_3(VAR_3, VAR_1);
 int VAR_5 = FUNC_4(VAR_1);
 u32 VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_4->id, VAR_5);

 FUNC_5(&VAR_3->lock, VAR_7);

 FUNC_2(VAR_3, VAR_4, VAR_6, VAR_2);

 FUNC_6(&VAR_3->lock, VAR_7);

 return 0;
}
