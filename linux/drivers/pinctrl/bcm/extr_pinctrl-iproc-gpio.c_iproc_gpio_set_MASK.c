
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_gpio {int dev; int lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct iproc_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct iproc_gpio*,int ,unsigned int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct iproc_gpio *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5;

 FUNC_3(&VAR_4->lock, VAR_5);
 FUNC_2(VAR_4, VAR_0, VAR_2, !!(VAR_3));
 FUNC_4(&VAR_4->lock, VAR_5);

 FUNC_0(VAR_4->dev, "gpio:%u set, value:%d\n", VAR_2, VAR_3);
}
