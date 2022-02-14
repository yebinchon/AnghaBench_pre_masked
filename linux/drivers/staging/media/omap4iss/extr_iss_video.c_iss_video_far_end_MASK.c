
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct media_graph {int dummy; } ;
struct TYPE_3__ {struct media_device* mdev; } ;
struct media_entity {TYPE_1__ graph_obj; } ;
struct media_device {int graph_mutex; } ;
struct TYPE_4__ {struct media_entity entity; } ;
struct iss_video {scalar_t__ type; TYPE_2__ video; } ;


 int FUNC_0 (struct media_entity*) ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (struct media_graph*) ;
 scalar_t__ FUNC_3 (struct media_graph*,struct media_device*) ;
 struct media_entity* FUNC_4 (struct media_graph*) ;
 int FUNC_5 (struct media_graph*,struct media_entity*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct iss_video* FUNC_8 (int ) ;

__attribute__((used)) static struct iss_video *
FUNC_9(struct iss_video *VAR_0)
{
 struct media_graph VAR_1;
 struct media_entity *VAR_2 = &VAR_0->video.entity;
 struct media_device *VAR_3 = VAR_2->graph_obj.mdev;
 struct iss_video *VAR_4 = ((void*)0);

 FUNC_6(&VAR_3->graph_mutex);

 if (FUNC_3(&VAR_1, VAR_3)) {
  FUNC_7(&VAR_3->graph_mutex);
  return ((void*)0);
 }

 FUNC_5(&VAR_1, VAR_2);

 while ((VAR_2 = FUNC_4(&VAR_1))) {
  if (VAR_2 == &VAR_0->video.entity)
   continue;

  if (!FUNC_0(VAR_2))
   continue;

  VAR_4 = FUNC_8(FUNC_1(VAR_2));
  if (VAR_4->type != VAR_0->type)
   break;

  VAR_4 = ((void*)0);
 }

 FUNC_7(&VAR_3->graph_mutex);

 FUNC_2(&VAR_1);

 return VAR_4;
}
