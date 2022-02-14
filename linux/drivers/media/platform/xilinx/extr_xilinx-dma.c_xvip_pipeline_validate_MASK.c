
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xvip_pipeline {unsigned int num_dmas; struct xvip_dma* output; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {struct media_device* mdev; } ;
struct media_entity {scalar_t__ function; TYPE_2__ graph_obj; } ;
struct TYPE_4__ {struct media_entity entity; } ;
struct xvip_dma {TYPE_3__ pad; TYPE_1__ video; } ;
struct media_graph {int dummy; } ;
struct media_device {int graph_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct media_entity*) ;
 int FUNC_1 (struct media_graph*) ;
 int FUNC_2 (struct media_graph*,struct media_device*) ;
 struct media_entity* FUNC_3 (struct media_graph*) ;
 int FUNC_4 (struct media_graph*,struct media_entity*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct xvip_dma* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct xvip_pipeline *VAR_3,
      struct xvip_dma *VAR_4)
{
 struct media_graph VAR_5;
 struct media_entity *VAR_6 = &VAR_4->video.entity;
 struct media_device *VAR_7 = VAR_6->graph_obj.mdev;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 int VAR_10;

 FUNC_5(&VAR_7->graph_mutex);


 VAR_10 = FUNC_2(&VAR_5, VAR_7);
 if (VAR_10) {
  FUNC_6(&VAR_7->graph_mutex);
  return VAR_10;
 }

 FUNC_4(&VAR_5, VAR_6);

 while ((VAR_6 = FUNC_3(&VAR_5))) {
  struct xvip_dma *VAR_11;

  if (VAR_6->function != VAR_1)
   continue;

  VAR_11 = FUNC_7(FUNC_0(VAR_6));

  if (VAR_11->pad.flags & VAR_2) {
   VAR_3->output = VAR_11;
   VAR_9++;
  } else {
   VAR_8++;
  }
 }

 FUNC_6(&VAR_7->graph_mutex);

 FUNC_1(&VAR_5);


 if (VAR_9 != 1 || VAR_8 > 1)
  return -VAR_0;

 VAR_3->num_dmas = VAR_8 + VAR_9;

 return 0;
}
