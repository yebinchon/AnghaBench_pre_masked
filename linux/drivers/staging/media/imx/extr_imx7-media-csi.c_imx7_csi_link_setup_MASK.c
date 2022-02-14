
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {int name; } ;
struct imx7_csi {int lock; struct v4l2_subdev* src_sd; struct media_entity* sink; int ctrl_hdlr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct imx7_csi*) ;
 int FUNC_2 (struct imx7_csi*) ;
 int FUNC_3 (struct media_entity*) ;
 struct v4l2_subdev* FUNC_4 (struct media_entity*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 struct imx7_csi* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct media_entity *VAR_4,
          const struct media_pad *VAR_5,
          const struct media_pad *VAR_6, u32 VAR_7)
{
 struct v4l2_subdev *VAR_8 = FUNC_4(VAR_4);
 struct imx7_csi *VAR_9 = FUNC_9(VAR_8);
 struct v4l2_subdev *VAR_10;
 int VAR_11 = 0;

 FUNC_0(VAR_9->dev, "link setup %s -> %s\n", VAR_6->entity->name,
  VAR_5->entity->name);

 FUNC_5(&VAR_9->lock);

 if (VAR_5->flags & VAR_3) {
  if (!FUNC_3(VAR_6->entity)) {
   VAR_11 = -VAR_1;
   goto unlock;
  }

  VAR_10 = FUNC_4(VAR_6->entity);

  if (VAR_7 & VAR_2) {
   if (VAR_9->src_sd) {
    VAR_11 = -VAR_0;
    goto unlock;
   }
   VAR_9->src_sd = VAR_10;
  } else {
   VAR_9->src_sd = ((void*)0);
  }

  goto init;
 }


 if (VAR_7 & VAR_2) {
  if (VAR_9->sink) {
   VAR_11 = -VAR_0;
   goto unlock;
  }
  VAR_9->sink = VAR_6->entity;
 } else {
  FUNC_7(&VAR_9->ctrl_hdlr);
  FUNC_8(&VAR_9->ctrl_hdlr, 0);
  VAR_9->sink = ((void*)0);
 }

init:
 if (VAR_9->sink || VAR_9->src_sd)
  VAR_11 = FUNC_2(VAR_9);
 else
  FUNC_1(VAR_9);

unlock:
 FUNC_6(&VAR_9->lock);

 return VAR_11;
}
