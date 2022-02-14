
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct media_device* mdev; } ;
struct TYPE_4__ {TYPE_1__ graph_obj; } ;
struct video_device {int pipe; TYPE_2__ entity; } ;
struct media_device {int (* enable_source ) (TYPE_2__*,int *) ;int graph_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;

int FUNC_3(struct video_device *VAR_1)
{
 struct media_device *VAR_2 = VAR_1->entity.graph_obj.mdev;
 int VAR_3 = 0, VAR_4;

 if (!VAR_2)
  return 0;

 FUNC_0(&VAR_2->graph_mutex);
 if (!VAR_2->enable_source)
  goto end;
 VAR_4 = VAR_2->enable_source(&VAR_1->entity, &VAR_1->pipe);
 if (VAR_4)
  VAR_3 = -VAR_0;
end:
 FUNC_1(&VAR_2->graph_mutex);
 return VAR_3;
}
