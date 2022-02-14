
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct media_graph {size_t top; TYPE_3__* stack; int ent_enum; } ;
struct TYPE_5__ {TYPE_1__* mdev; } ;
struct media_entity {int name; TYPE_2__ graph_obj; } ;
struct TYPE_6__ {int * entity; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,struct media_entity*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct media_graph*,struct media_entity*) ;

void FUNC_4(struct media_graph *VAR_0,
       struct media_entity *VAR_1)
{
 FUNC_2(&VAR_0->ent_enum);
 FUNC_1(&VAR_0->ent_enum, VAR_1);

 VAR_0->top = 0;
 VAR_0->stack[VAR_0->top].entity = ((void*)0);
 FUNC_3(VAR_0, VAR_1);
 FUNC_0(VAR_1->graph_obj.mdev->dev,
  "begin graph walk at '%s'\n", VAR_1->name);
}
