
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct prp_priv {int lock; struct media_entity* sink; struct v4l2_subdev* src_sd; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {int name; } ;
struct TYPE_2__ {int name; } ;
struct imx_ic_priv {TYPE_1__ sd; int ipu_dev; struct prp_priv* task_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (struct media_entity*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct imx_ic_priv* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct media_entity *VAR_4,
     const struct media_pad *VAR_5,
     const struct media_pad *VAR_6, u32 VAR_7)
{
 struct v4l2_subdev *VAR_8 = FUNC_3(VAR_4);
 struct imx_ic_priv *VAR_9 = FUNC_6(VAR_8);
 struct prp_priv *VAR_10 = VAR_9->task_priv;
 struct v4l2_subdev *VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_9->ipu_dev, "%s: link setup %s -> %s",
  VAR_9->sd.name, VAR_6->entity->name, VAR_5->entity->name);

 FUNC_4(&VAR_10->lock);

 if (VAR_5->flags & VAR_3) {
  if (!FUNC_1(VAR_6->entity)) {
   VAR_12 = -VAR_1;
   goto out;
  }

  VAR_11 = FUNC_3(VAR_6->entity);

  if (VAR_7 & VAR_2) {
   if (VAR_10->src_sd) {
    VAR_12 = -VAR_0;
    goto out;
   }
   VAR_10->src_sd = VAR_11;
  } else {
   VAR_10->src_sd = ((void*)0);
  }

  goto out;
 }




 if (!FUNC_2(VAR_6->entity)) {
  VAR_12 = -VAR_1;
  goto out;
 }

 if (VAR_7 & VAR_2) {
  if (VAR_10->sink) {
   VAR_12 = -VAR_0;
   goto out;
  }
 } else {
  VAR_10->sink = ((void*)0);
  goto out;
 }

 VAR_10->sink = VAR_6->entity;
out:
 FUNC_5(&VAR_10->lock);
 return VAR_12;
}
