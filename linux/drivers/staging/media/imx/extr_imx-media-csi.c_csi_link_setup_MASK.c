
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int grp_id; } ;
struct media_pad {int flags; scalar_t__ index; struct media_entity* entity; } ;
struct media_entity {int name; } ;
struct csi_priv {scalar_t__ active_output_pad; int lock; struct media_entity* sink; int dest; scalar_t__ fim; int ctrl_hdlr; struct v4l2_subdev* src_sd; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_entity*) ;
 struct v4l2_subdev* FUNC_4 (struct media_entity*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 struct csi_priv* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct media_entity *VAR_8,
     const struct media_pad *VAR_9,
     const struct media_pad *VAR_10, u32 VAR_11)
{
 struct v4l2_subdev *VAR_12 = FUNC_4(VAR_8);
 struct csi_priv *VAR_13 = FUNC_9(VAR_12);
 struct v4l2_subdev *VAR_14;
 int VAR_15 = 0;

 FUNC_0(VAR_13->dev, "link setup %s -> %s\n", VAR_10->entity->name,
  VAR_9->entity->name);

 FUNC_5(&VAR_13->lock);

 if (VAR_9->flags & VAR_7) {
  if (!FUNC_2(VAR_10->entity)) {
   VAR_15 = -VAR_2;
   goto out;
  }

  VAR_14 = FUNC_4(VAR_10->entity);

  if (VAR_11 & VAR_6) {
   if (VAR_13->src_sd) {
    VAR_15 = -VAR_1;
    goto out;
   }
   VAR_13->src_sd = VAR_14;
  } else {
   VAR_13->src_sd = ((void*)0);
  }

  goto out;
 }



 if (VAR_11 & VAR_6) {
  if (VAR_13->sink) {
   VAR_15 = -VAR_1;
   goto out;
  }
 } else {
  FUNC_7(&VAR_13->ctrl_hdlr);
  FUNC_8(&VAR_13->ctrl_hdlr, 0);
  VAR_13->sink = ((void*)0);

  VAR_13->active_output_pad = VAR_0;
  goto out;
 }


 VAR_13->active_output_pad = VAR_9->index;


 if (VAR_9->index == VAR_0) {
  if (!FUNC_3(VAR_10->entity)) {
   VAR_15 = -VAR_2;
   goto out;
  }

  if (VAR_13->fim) {
   VAR_15 = FUNC_1(VAR_13->fim);
   if (VAR_15)
    goto out;
  }

  VAR_13->dest = VAR_4;
 } else {
  if (!FUNC_2(VAR_10->entity)) {
   VAR_15 = -VAR_2;
   goto out;
  }

  VAR_14 = FUNC_4(VAR_10->entity);
  switch (VAR_14->grp_id) {
  case 128:
   VAR_13->dest = VAR_5;
   break;
  case 129:
   VAR_13->dest = VAR_3;
   break;
  default:
   VAR_15 = -VAR_2;
   goto out;
  }
 }

 VAR_13->sink = VAR_10->entity;
out:
 FUNC_6(&VAR_13->lock);
 return VAR_15;
}
