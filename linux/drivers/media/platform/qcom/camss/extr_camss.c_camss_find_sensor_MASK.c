
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {scalar_t__ function; struct media_pad* pads; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct media_entity*) ;
 struct media_pad* FUNC_1 (struct media_pad*) ;

struct media_entity *FUNC_2(struct media_entity *VAR_2)
{
 struct media_pad *VAR_3;

 while (1) {
  VAR_3 = &VAR_2->pads[0];
  if (!(VAR_3->flags & VAR_1))
   return ((void*)0);

  VAR_3 = FUNC_1(VAR_3);
  if (!VAR_3 || !FUNC_0(VAR_3->entity))
   return ((void*)0);

  VAR_2 = VAR_3->entity;

  if (VAR_2->function == VAR_0)
   return VAR_2;
 }
}
