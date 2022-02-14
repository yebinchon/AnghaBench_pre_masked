
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct media_device* mdev; } ;
struct TYPE_4__ {TYPE_1__ graph_obj; } ;
struct video_device {TYPE_2__ entity; } ;
struct media_device {int graph_mutex; int (* disable_source ) (TYPE_2__*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(struct video_device *VAR_0)
{
 struct media_device *VAR_1 = VAR_0->entity.graph_obj.mdev;

 if (VAR_1) {
  FUNC_0(&VAR_1->graph_mutex);
  if (VAR_1->disable_source)
   VAR_1->disable_source(&VAR_0->entity);
  FUNC_1(&VAR_1->graph_mutex);
 }
}
