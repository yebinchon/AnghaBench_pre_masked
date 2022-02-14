
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {struct media_pad* pads; } ;


 int VAR_0 ;
 struct media_pad* FUNC_0 (struct media_pad*) ;

__attribute__((used)) static struct media_entity *FUNC_1(struct media_entity *VAR_1)
{
 struct media_pad *VAR_2 = &VAR_1->pads[0];

 while (!(VAR_2->flags & VAR_0)) {
  VAR_2 = FUNC_0(VAR_2);
  if (!VAR_2)
   break;
  VAR_1 = VAR_2->entity;
  VAR_2 = &VAR_1->pads[0];
 }

 return VAR_1;
}
