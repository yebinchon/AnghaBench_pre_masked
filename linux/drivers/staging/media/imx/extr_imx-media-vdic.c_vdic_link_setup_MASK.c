
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vdic_priv {int csi_direct; scalar_t__ active_input_pad; int lock; struct media_entity* src; struct imx_media_video_dev* vdev; struct v4l2_subdev* sink_sd; int ipu_dev; } ;
struct v4l2_subdev {int grp_id; int name; } ;
struct media_pad {int flags; scalar_t__ index; struct media_entity* entity; } ;
struct media_entity {int name; } ;
struct imx_media_video_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (struct media_entity*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vdic_priv* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct media_entity *VAR_8,
       const struct media_pad *VAR_9,
       const struct media_pad *VAR_10, u32 VAR_11)
{
 struct v4l2_subdev *VAR_12 = FUNC_3(VAR_8);
 struct vdic_priv *VAR_13 = FUNC_6(VAR_12);
 struct v4l2_subdev *VAR_14;
 int VAR_15 = 0;

 FUNC_0(VAR_13->ipu_dev, "%s: link setup %s -> %s",
  VAR_12->name, VAR_10->entity->name, VAR_9->entity->name);

 FUNC_4(&VAR_13->lock);

 if (VAR_9->flags & VAR_6) {
  if (!FUNC_1(VAR_10->entity)) {
   VAR_15 = -VAR_2;
   goto out;
  }

  VAR_14 = FUNC_3(VAR_10->entity);

  if (VAR_11 & VAR_5) {
   if (VAR_13->sink_sd) {
    VAR_15 = -VAR_1;
    goto out;
   }
   VAR_13->sink_sd = VAR_14;
  } else {
   VAR_13->sink_sd = ((void*)0);
  }

  goto out;
 }



 if (VAR_11 & VAR_5) {
  if (VAR_13->src) {
   VAR_15 = -VAR_1;
   goto out;
  }
 } else {
  VAR_13->src = ((void*)0);
  goto out;
 }

 if (VAR_9->index == VAR_7) {
  struct imx_media_video_dev *VAR_16 = VAR_13->vdev;

  if (!FUNC_2(VAR_10->entity)) {
   VAR_15 = -VAR_2;
   goto out;
  }
  if (!VAR_16) {
   VAR_15 = -VAR_3;
   goto out;
  }

  VAR_13->csi_direct = 0;
 } else {
  if (!FUNC_1(VAR_10->entity)) {
   VAR_15 = -VAR_2;
   goto out;
  }

  VAR_14 = FUNC_3(VAR_10->entity);


  if (!(VAR_14->grp_id & VAR_4) ||
      VAR_10->index != VAR_0) {
   VAR_15 = -VAR_2;
   goto out;
  }

  VAR_13->csi_direct = 1;
 }

 VAR_13->src = VAR_10->entity;

 VAR_13->active_input_pad = VAR_9->index;
out:
 FUNC_5(&VAR_13->lock);
 return VAR_15;
}
