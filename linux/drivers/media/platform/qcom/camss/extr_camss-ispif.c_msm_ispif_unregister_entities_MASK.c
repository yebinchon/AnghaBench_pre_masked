
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; } ;
struct ispif_device {int line_num; TYPE_1__* line; int config_lock; int power_lock; } ;
struct TYPE_2__ {struct v4l2_subdev subdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*) ;

void FUNC_3(struct ispif_device *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->power_lock);
 FUNC_1(&VAR_0->config_lock);

 for (VAR_1 = 0; VAR_1 < VAR_0->line_num; VAR_1++) {
  struct v4l2_subdev *VAR_2 = &VAR_0->line[VAR_1].subdev;

  FUNC_2(VAR_2);
  FUNC_0(&VAR_2->entity);
 }
}
