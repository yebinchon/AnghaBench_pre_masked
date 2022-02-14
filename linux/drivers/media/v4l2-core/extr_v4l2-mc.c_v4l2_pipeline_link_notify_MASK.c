
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* mdev; } ;
struct media_link {TYPE_4__* sink; TYPE_3__* source; TYPE_2__ graph_obj; } ;
struct media_graph {int dummy; } ;
struct media_entity {int dummy; } ;
struct TYPE_8__ {struct media_entity* entity; } ;
struct TYPE_7__ {struct media_entity* entity; } ;
struct TYPE_5__ {struct media_graph pm_count_walk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct media_entity*,int,struct media_graph*) ;
 int FUNC_1 (struct media_entity*,struct media_graph*) ;

int FUNC_2(struct media_link *VAR_3, u32 VAR_4,
         unsigned int VAR_5)
{
 struct media_graph *VAR_6 = &VAR_3->graph_obj.mdev->pm_count_walk;
 struct media_entity *VAR_7 = VAR_3->source->entity;
 struct media_entity *VAR_8 = VAR_3->sink->entity;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_1(VAR_7, VAR_6);
 VAR_10 = FUNC_1(VAR_8, VAR_6);

 if (VAR_5 == VAR_0 &&
     !(VAR_4 & VAR_2)) {

  FUNC_0(VAR_7, -VAR_10, VAR_6);
  FUNC_0(VAR_8, -VAR_9, VAR_6);
  return 0;
 }

 if (VAR_5 == VAR_1 &&
  (VAR_4 & VAR_2)) {

  VAR_11 = FUNC_0(VAR_7, VAR_10, VAR_6);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_6);
  if (VAR_11 < 0)
   FUNC_0(VAR_7, -VAR_10, VAR_6);
 }

 return VAR_11;
}
