
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct media_graph {int dummy; } ;
struct TYPE_5__ {TYPE_1__* mdev; } ;
struct media_entity {int name; TYPE_2__ graph_obj; } ;
struct TYPE_6__ {int links; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int * FUNC_1 (struct media_graph*) ;
 int FUNC_2 (struct media_graph*) ;
 struct media_entity* FUNC_3 (struct media_graph*) ;
 TYPE_3__* FUNC_4 (struct media_graph*) ;

struct media_entity *FUNC_5(struct media_graph *VAR_0)
{
 struct media_entity *VAR_1;

 if (FUNC_4(VAR_0) == ((void*)0))
  return ((void*)0);






 while (FUNC_1(VAR_0) != &FUNC_4(VAR_0)->links)
  FUNC_2(VAR_0);

 VAR_1 = FUNC_3(VAR_0);
 FUNC_0(VAR_1->graph_obj.mdev->dev,
  "walk: returning entity '%s'\n", VAR_1->name);

 return VAR_1;
}
