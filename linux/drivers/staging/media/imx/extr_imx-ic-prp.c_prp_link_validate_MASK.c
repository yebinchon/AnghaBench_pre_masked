
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_format {int dummy; } ;
struct v4l2_subdev {int grp_id; } ;
struct prp_priv {int csi_id; int lock; scalar_t__ sink_sd_prpenc; TYPE_2__* src_sd; } ;
struct media_link {int dummy; } ;
struct TYPE_3__ {int entity; } ;
struct imx_ic_priv {TYPE_1__ sd; struct prp_priv* task_priv; } ;
struct TYPE_4__ {int grp_id; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct imx_ic_priv* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,struct media_link*,struct v4l2_subdev_format*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3,
        struct media_link *VAR_4,
        struct v4l2_subdev_format *VAR_5,
        struct v4l2_subdev_format *VAR_6)
{
 struct imx_ic_priv *VAR_7 = FUNC_4(VAR_3);
 struct prp_priv *VAR_8 = VAR_7->task_priv;
 struct v4l2_subdev *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_3, VAR_4,
      VAR_5, VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_1(&VAR_7->sd.entity,
     VAR_1, 1);
 if (FUNC_0(VAR_9))
  VAR_9 = ((void*)0);

 FUNC_2(&VAR_8->lock);

 if (VAR_8->src_sd->grp_id & VAR_2) {




  if (VAR_8->sink_sd_prpenc) {
   VAR_10 = -VAR_0;
   goto out;
  }
 } else {

  if (!VAR_9) {
   VAR_10 = -VAR_0;
   goto out;
  }
 }

 if (VAR_9) {
  switch (VAR_9->grp_id) {
  case 129:
   VAR_8->csi_id = 0;
   break;
  case 128:
   VAR_8->csi_id = 1;
   break;
  default:
   VAR_10 = -VAR_0;
  }
 } else {
  VAR_8->csi_id = 0;
 }

out:
 FUNC_3(&VAR_8->lock);
 return VAR_10;
}
