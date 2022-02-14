
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int timer_active; int device; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct visor_device *VAR_0)
{
 if (!VAR_0->timer_active)
  return;

 FUNC_0(&VAR_0->timer);
 VAR_0->timer_active = 0;
 FUNC_1(&VAR_0->device);
}
