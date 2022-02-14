
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct video_device {int ctrl_handler; TYPE_2__ entity; } ;
struct TYPE_6__ {int name; } ;
struct v4l2_subdev {int ctrl_handler; TYPE_3__ entity; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {int num_pads; struct media_pad* pads; } ;
struct TYPE_4__ {int dev; } ;
struct imx_media_dev {TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct media_entity*) ;
 struct media_pad* FUNC_2 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 int FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct imx_media_dev *VAR_1,
          struct video_device *VAR_2,
          struct media_entity *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (FUNC_1(VAR_3)) {
  struct v4l2_subdev *VAR_6 = FUNC_3(VAR_3);

  FUNC_0(VAR_1->md.dev,
   "adding controls to %s from %s\n",
   VAR_2->entity.name, VAR_6->entity.name);

  VAR_5 = FUNC_4(VAR_2->ctrl_handler,
         VAR_6->ctrl_handler,
         ((void*)0), 1);
  if (VAR_5)
   return VAR_5;
 }


 for (VAR_4 = 0; VAR_4 < VAR_3->num_pads; VAR_4++) {
  struct media_pad *VAR_7, *VAR_8 = &VAR_3->pads[VAR_4];

  if (!(VAR_8->flags & VAR_0))
   continue;

  VAR_7 = FUNC_2(VAR_8);
  if (!VAR_7 || !FUNC_1(VAR_7->entity))
   continue;

  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_7->entity);
  if (VAR_5)
   break;
 }

 return VAR_5;
}
