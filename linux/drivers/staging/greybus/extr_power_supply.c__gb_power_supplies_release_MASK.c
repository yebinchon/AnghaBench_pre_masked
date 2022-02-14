
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supplies {int supplies_count; int supplies_lock; struct gb_power_supplies* supply; } ;


 int FUNC_0 (struct gb_power_supplies*) ;
 int FUNC_1 (struct gb_power_supplies*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gb_power_supplies *VAR_0)
{
 int VAR_1;

 if (!VAR_0->supply)
  return;

 FUNC_2(&VAR_0->supplies_lock);
 for (VAR_1 = 0; VAR_1 < VAR_0->supplies_count; VAR_1++)
  FUNC_0(&VAR_0->supply[VAR_1]);
 FUNC_1(VAR_0->supply);
 FUNC_3(&VAR_0->supplies_lock);
 FUNC_1(VAR_0);
}
