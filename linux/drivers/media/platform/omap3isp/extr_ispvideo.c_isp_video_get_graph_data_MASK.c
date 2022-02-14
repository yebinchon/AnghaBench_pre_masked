
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
struct isp_video {scalar_t__ type; TYPE_2__ video; } ;
struct isp_pipeline {struct isp_video* output; struct isp_video* input; int ent_enum; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct media_entity*) ;
 int FUNC_1 (int *,struct media_entity*) ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_graph*) ;
 int FUNC_4 (struct media_graph*,struct media_device*) ;
 struct media_entity* FUNC_5 (struct media_graph*) ;
 int FUNC_6 (struct media_graph*,struct media_entity*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct isp_video* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct isp_video *VAR_2,
        struct isp_pipeline *VAR_3)
{
 struct media_graph VAR_4;
 struct media_entity *VAR_5 = &VAR_2->video.entity;
 struct media_device *VAR_6 = VAR_5->graph_obj.mdev;
 struct isp_video *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_7(&VAR_6->graph_mutex);
 VAR_8 = FUNC_4(&VAR_4, VAR_6);
 if (VAR_8) {
  FUNC_8(&VAR_6->graph_mutex);
  return VAR_8;
 }

 FUNC_6(&VAR_4, VAR_5);

 while ((VAR_5 = FUNC_5(&VAR_4))) {
  struct isp_video *VAR_9;

  FUNC_1(&VAR_3->ent_enum, VAR_5);

  if (VAR_7 != ((void*)0))
   continue;

  if (VAR_5 == &VAR_2->video.entity)
   continue;

  if (!FUNC_0(VAR_5))
   continue;

  VAR_9 = FUNC_9(FUNC_2(VAR_5));
  if (VAR_9->type != VAR_2->type)
   VAR_7 = VAR_9;
 }

 FUNC_8(&VAR_6->graph_mutex);

 FUNC_3(&VAR_4);

 if (VAR_2->type == VAR_1) {
  VAR_3->input = VAR_7;
  VAR_3->output = VAR_2;
 } else {
  if (VAR_7 == ((void*)0))
   return -VAR_0;

  VAR_3->input = VAR_2;
  VAR_3->output = VAR_7;
 }

 return 0;
}
