
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uvc_video_chain {TYPE_1__* dev; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {TYPE_5__ entity; int name; } ;
struct uvc_entity {int flags; TYPE_2__* vdev; int pads; int num_pads; TYPE_3__ subdev; int name; } ;
struct TYPE_7__ {TYPE_5__ entity; } ;
struct TYPE_6__ {int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uvc_entity*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_5(struct uvc_video_chain *VAR_4,
         struct uvc_entity *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_5) != VAR_2) {
  FUNC_4(&VAR_5->subdev, &VAR_3);
  FUNC_2(VAR_5->subdev.name, VAR_5->name,
   sizeof(VAR_5->subdev.name));

  VAR_6 = FUNC_1(&VAR_5->subdev.entity,
     VAR_5->num_pads, VAR_5->pads);

  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_3(&VAR_4->dev->vdev,
        &VAR_5->subdev);
 } else if (VAR_5->vdev != ((void*)0)) {
  VAR_6 = FUNC_1(&VAR_5->vdev->entity,
     VAR_5->num_pads, VAR_5->pads);
  if (VAR_5->flags & VAR_1)
   VAR_5->vdev->entity.flags |= VAR_0;
 } else
  VAR_6 = 0;

 return VAR_6;
}
