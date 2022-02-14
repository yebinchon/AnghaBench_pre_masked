
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int entity; int name; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {struct media_pad* pads; } ;
struct iss_pipeline {TYPE_2__* output; } ;
struct iss_device {int crashed; int dev; } ;
struct TYPE_3__ {struct media_entity entity; } ;
struct TYPE_4__ {TYPE_1__ video; struct iss_device* iss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (int *,int *) ;
 struct media_pad* FUNC_3 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_4 (struct media_entity*) ;
 int VAR_2 ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct iss_pipeline *VAR_4,
    struct media_entity *VAR_5)
{
 struct iss_device *VAR_6 = VAR_4->output->iss;
 struct media_entity *VAR_7;
 struct media_pad *VAR_8;
 struct v4l2_subdev *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_7 = &VAR_4->output->video.entity;
 while (1) {
  VAR_8 = &VAR_7->pads[0];
  if (!(VAR_8->flags & VAR_1))
   break;

  VAR_8 = FUNC_3(VAR_8);
  if (!VAR_8 || !FUNC_1(VAR_8->entity))
   break;

  VAR_7 = VAR_8->entity;
  if (VAR_7 == VAR_5)
   break;

  VAR_9 = FUNC_4(VAR_7);
  VAR_11 = FUNC_5(VAR_9, VAR_3, VAR_2, 0);
  if (VAR_11 < 0) {
   FUNC_0(VAR_6->dev, "%s: module stop timeout.\n",
     VAR_9->name);




   FUNC_2(&VAR_6->crashed, &VAR_9->entity);
   VAR_10 = -VAR_0;
  }
 }

 return VAR_10;
}
