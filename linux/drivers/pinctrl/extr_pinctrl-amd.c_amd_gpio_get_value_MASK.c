
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct amd_gpio {int lock; scalar_t__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct amd_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;
 struct amd_gpio *VAR_5 = FUNC_1(VAR_1);

 FUNC_2(&VAR_5->lock, VAR_4);
 VAR_3 = FUNC_4(VAR_5->base + VAR_2 * 4);
 FUNC_3(&VAR_5->lock, VAR_4);

 return !!(VAR_3 & FUNC_0(VAR_0));
}
