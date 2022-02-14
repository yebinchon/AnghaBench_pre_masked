
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct media_device* mdev; } ;
struct media_entity {scalar_t__ use_count; TYPE_1__ graph_obj; } ;
struct media_device {int graph_mutex; int pm_count_walk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct media_entity*,int,int *) ;

int FUNC_4(struct media_entity *VAR_0, int VAR_1)
{
 struct media_device *VAR_2 = VAR_0->graph_obj.mdev;
 int VAR_3 = VAR_1 ? 1 : -1;
 int VAR_4;

 FUNC_1(&VAR_2->graph_mutex);


 VAR_0->use_count += VAR_3;
 FUNC_0(VAR_0->use_count < 0);


 VAR_4 = FUNC_3(VAR_0, VAR_3, &VAR_2->pm_count_walk);
 if (VAR_4 < 0)
  VAR_0->use_count -= VAR_3;

 FUNC_2(&VAR_2->graph_mutex);

 return VAR_4;
}
