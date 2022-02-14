
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_led {int * wl; int led_dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct b43_led *VAR_0)
{
 if (!VAR_0->wl)
  return;
 FUNC_0(&VAR_0->led_dev);
 VAR_0->wl = ((void*)0);
}
