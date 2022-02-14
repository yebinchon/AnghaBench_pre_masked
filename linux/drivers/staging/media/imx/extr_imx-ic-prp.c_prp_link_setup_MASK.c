
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int grp_id; } ;
struct prp_priv {int lock; struct v4l2_subdev* sink_sd_prpvf; struct v4l2_subdev* sink_sd_prpenc; struct v4l2_subdev* src_sd; } ;
struct media_pad {int flags; int index; struct media_entity* entity; } ;
struct media_entity {int name; } ;
struct TYPE_2__ {int name; } ;
struct imx_ic_priv {TYPE_1__ sd; int ipu_dev; struct prp_priv* task_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct imx_ic_priv* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct media_entity *VAR_5,
     const struct media_pad *VAR_6,
     const struct media_pad *VAR_7, u32 VAR_8)
{
 struct v4l2_subdev *VAR_9 = FUNC_1(VAR_5);
 struct imx_ic_priv *VAR_10 = FUNC_4(VAR_9);
 struct prp_priv *VAR_11 = VAR_10->task_priv;
 struct v4l2_subdev *VAR_12;
 int VAR_13 = 0;

 FUNC_0(VAR_10->ipu_dev, "%s: link setup %s -> %s",
  VAR_10->sd.name, VAR_7->entity->name, VAR_6->entity->name);

 VAR_12 = FUNC_1(VAR_7->entity);

 FUNC_2(&VAR_11->lock);

 if (VAR_6->flags & VAR_4) {
  if (VAR_8 & VAR_3) {
   if (VAR_11->src_sd) {
    VAR_13 = -VAR_0;
    goto out;
   }
   if (VAR_11->sink_sd_prpenc &&
       (VAR_12->grp_id & VAR_2)) {
    VAR_13 = -VAR_1;
    goto out;
   }
   VAR_11->src_sd = VAR_12;
  } else {
   VAR_11->src_sd = ((void*)0);
  }

  goto out;
 }


 if (VAR_8 & VAR_3) {
  switch (VAR_6->index) {
  case 129:
   if (VAR_11->sink_sd_prpenc) {
    VAR_13 = -VAR_0;
    goto out;
   }
   if (VAR_11->src_sd && (VAR_11->src_sd->grp_id &
          VAR_2)) {
    VAR_13 = -VAR_1;
    goto out;
   }
   VAR_11->sink_sd_prpenc = VAR_12;
   break;
  case 128:
   if (VAR_11->sink_sd_prpvf) {
    VAR_13 = -VAR_0;
    goto out;
   }
   VAR_11->sink_sd_prpvf = VAR_12;
   break;
  default:
   VAR_13 = -VAR_1;
  }
 } else {
  switch (VAR_6->index) {
  case 129:
   VAR_11->sink_sd_prpenc = ((void*)0);
   break;
  case 128:
   VAR_11->sink_sd_prpvf = ((void*)0);
   break;
  default:
   VAR_13 = -VAR_1;
  }
 }

out:
 FUNC_3(&VAR_11->lock);
 return VAR_13;
}
