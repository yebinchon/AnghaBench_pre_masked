
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc6393xb {int lock; scalar_t__ scr; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct gpio_chip*,unsigned int,int) ;
 struct tc6393xb* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_0,
   unsigned VAR_1, int VAR_2)
{
 struct tc6393xb *VAR_3 = FUNC_3(VAR_0);
 unsigned long VAR_4;
 u8 VAR_5;

 FUNC_4(&VAR_3->lock, VAR_4);

 FUNC_2(VAR_0, VAR_1, VAR_2);

 VAR_5 = FUNC_6(VAR_3->scr + FUNC_0(VAR_1 / 8));
 VAR_5 |= FUNC_1(VAR_1);
 FUNC_7(VAR_5, VAR_3->scr + FUNC_0(VAR_1 / 8));

 FUNC_5(&VAR_3->lock, VAR_4);

 return 0;
}
