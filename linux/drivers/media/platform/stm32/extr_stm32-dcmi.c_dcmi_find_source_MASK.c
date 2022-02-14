
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dcmi {TYPE_1__* vdev; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {struct media_pad* pads; } ;
struct TYPE_2__ {struct media_entity entity; } ;


 int VAR_0 ;
 int FUNC_0 (struct media_entity*) ;
 struct media_pad* FUNC_1 (struct media_pad*) ;

__attribute__((used)) static struct media_entity *FUNC_2(struct stm32_dcmi *VAR_1)
{
 struct media_entity *VAR_2 = &VAR_1->vdev->entity;
 struct media_pad *VAR_3;


 while (1) {
  VAR_3 = &VAR_2->pads[0];
  if (!(VAR_3->flags & VAR_0))
   break;

  VAR_3 = FUNC_1(VAR_3);
  if (!VAR_3 || !FUNC_0(VAR_3->entity))
   break;

  VAR_2 = VAR_3->entity;
 }

 return VAR_2;
}
