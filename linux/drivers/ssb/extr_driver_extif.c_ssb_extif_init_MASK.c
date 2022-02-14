
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_extif {int gpio_lock; int dev; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ssb_extif *VAR_0)
{
 if (!VAR_0->dev)
  return;
 FUNC_0(&VAR_0->gpio_lock);
}
