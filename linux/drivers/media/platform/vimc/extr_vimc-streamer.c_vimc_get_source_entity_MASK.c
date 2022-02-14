
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_pad {struct media_entity* entity; } ;
struct media_entity {int num_pads; TYPE_1__* pads; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 struct media_pad* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static struct media_entity *FUNC_1(struct media_entity *VAR_1)
{
 struct media_pad *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_pads; VAR_3++) {
  if (VAR_1->pads[VAR_3].flags & VAR_0)
   continue;
  VAR_2 = FUNC_0(&VAR_1->pads[VAR_3]);
  return VAR_2 ? VAR_2->entity : ((void*)0);
 }
 return ((void*)0);
}
