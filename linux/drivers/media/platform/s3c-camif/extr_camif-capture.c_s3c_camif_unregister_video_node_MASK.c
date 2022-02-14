
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int ctrl_handler; int entity; } ;
struct camif_dev {TYPE_1__* vp; } ;
struct TYPE_2__ {struct video_device vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct video_device*) ;
 int FUNC_3 (struct video_device*) ;

void FUNC_4(struct camif_dev *VAR_0, int VAR_1)
{
 struct video_device *VAR_2 = &VAR_0->vp[VAR_1].vdev;

 if (FUNC_2(VAR_2)) {
  FUNC_3(VAR_2);
  FUNC_0(&VAR_2->entity);
  FUNC_1(VAR_2->ctrl_handler);
 }
}
