
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsp_gpio {int dev; int lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct nsp_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct nsp_gpio*,int ,int ,unsigned int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct nsp_gpio *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6;

 FUNC_3(&VAR_5->lock, VAR_6);
 FUNC_2(VAR_5, VAR_1, VAR_0, VAR_3, !!(VAR_4));
 FUNC_4(&VAR_5->lock, VAR_6);

 FUNC_0(VAR_5->dev, "gpio:%u set, value:%d\n", VAR_3, VAR_4);
}
