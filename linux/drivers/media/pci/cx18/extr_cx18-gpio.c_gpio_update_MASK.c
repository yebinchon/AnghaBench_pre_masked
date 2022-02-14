
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18 {int gpio_val; int gpio_lock; } ;


 int FUNC_0 (struct cx18*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cx18 *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_1 == 0)
  return;

 FUNC_1(&VAR_0->gpio_lock);
 VAR_0->gpio_val = (VAR_0->gpio_val & ~VAR_1) | (VAR_2 & VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->gpio_lock);
}
