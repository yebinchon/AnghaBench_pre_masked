
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {scalar_t__ grp_id; int ctrl_handler; } ;
struct media_pad {TYPE_4__* entity; } ;
struct media_entity {int dummy; } ;
struct TYPE_5__ {int entity; } ;
struct fimc_vid_cap {scalar_t__ input; TYPE_3__* ctx; TYPE_1__ subdev; scalar_t__ inh_sensor_ctrls; scalar_t__ user_subdev_api; } ;
struct fimc_dev {struct fimc_vid_cap vid_cap; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {int handler; } ;
struct TYPE_7__ {TYPE_2__ ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int,scalar_t__) ;
 struct v4l2_subdev* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 struct v4l2_subdev* FUNC_4 (struct media_entity*) ;
 int FUNC_5 (int *,int ,int *,int) ;
 struct fimc_dev* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct media_entity *VAR_3,
      const struct media_pad *VAR_4,
      const struct media_pad *VAR_5, u32 VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_4(VAR_3);
 struct fimc_dev *VAR_8 = FUNC_6(VAR_7);
 struct fimc_vid_cap *VAR_9 = &VAR_8->vid_cap;
 struct v4l2_subdev *VAR_10;

 if (!FUNC_3(VAR_5->entity))
  return -VAR_1;

 if (FUNC_0(VAR_8 == ((void*)0)))
  return 0;

 FUNC_1("%s --> %s, flags: 0x%x. input: 0x%x",
     VAR_4->entity->name, VAR_5->entity->name, VAR_6,
     VAR_8->vid_cap.input);

 if (!(VAR_6 & VAR_2)) {
  VAR_8->vid_cap.input = 0;
  return 0;
 }

 if (VAR_9->input != 0)
  return -VAR_0;

 VAR_9->input = VAR_7->grp_id;

 if (VAR_9->user_subdev_api || VAR_9->inh_sensor_ctrls)
  return 0;


 VAR_10 = FUNC_2(&VAR_9->subdev.entity);
 if (VAR_10 == ((void*)0))
  return 0;

 return FUNC_5(&VAR_9->ctx->ctrls.handler,
         VAR_10->ctrl_handler, ((void*)0), 1);
}
