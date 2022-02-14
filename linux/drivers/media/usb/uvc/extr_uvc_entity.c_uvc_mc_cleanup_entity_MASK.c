
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entity; } ;
struct uvc_entity {TYPE_2__* vdev; TYPE_1__ subdev; } ;
struct TYPE_4__ {int entity; } ;


 scalar_t__ FUNC_0 (struct uvc_entity*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct uvc_entity *VAR_1)
{
 if (FUNC_0(VAR_1) != VAR_0)
  FUNC_1(&VAR_1->subdev.entity);
 else if (VAR_1->vdev != ((void*)0))
  FUNC_1(&VAR_1->vdev->entity);
}
