
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsp_gpio {int dev; int lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct nsp_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct nsp_gpio*,int ,int ,unsigned int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_3, unsigned VAR_4,
         int VAR_5)
{
 struct nsp_gpio *VAR_6 = FUNC_1(VAR_3);
 unsigned long VAR_7;

 FUNC_3(&VAR_6->lock, VAR_7);
 FUNC_2(VAR_6, VAR_2, VAR_1, VAR_4, 1);
 FUNC_2(VAR_6, VAR_2, VAR_0, VAR_4, !!(VAR_5));
 FUNC_4(&VAR_6->lock, VAR_7);

 FUNC_0(VAR_6->dev, "gpio:%u set output, value:%d\n", VAR_4, VAR_5);
 return 0;
}
