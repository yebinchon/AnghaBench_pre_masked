
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_lights {int lights_count; int lights_lock; struct gb_lights* lights; } ;


 int FUNC_0 (struct gb_lights*) ;
 int FUNC_1 (struct gb_lights*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gb_lights *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;

 FUNC_3(&VAR_0->lights_lock);
 if (!VAR_0->lights)
  goto free_glights;

 for (VAR_1 = 0; VAR_1 < VAR_0->lights_count; VAR_1++)
  FUNC_0(&VAR_0->lights[VAR_1]);

 FUNC_1(VAR_0->lights);

free_glights:
 FUNC_4(&VAR_0->lights_lock);
 FUNC_2(&VAR_0->lights_lock);
 FUNC_1(VAR_0);
}
