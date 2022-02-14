
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {int name; } ;
struct csi_state {int sink_linked; int lock; struct v4l2_subdev* src_sd; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 struct csi_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct media_entity *VAR_3,
    const struct media_pad *VAR_4,
    const struct media_pad *VAR_5, u32 VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_1(VAR_3);
 struct csi_state *VAR_8 = FUNC_2(VAR_7);
 struct v4l2_subdev *VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_8->dev, "link setup %s -> %s", VAR_5->entity->name,
  VAR_4->entity->name);

 VAR_9 = FUNC_1(VAR_5->entity);

 FUNC_3(&VAR_8->lock);

 if (VAR_4->flags & VAR_2) {
  if (VAR_6 & VAR_1) {
   if (VAR_8->sink_linked) {
    VAR_10 = -VAR_0;
    goto out;
   }
   VAR_8->sink_linked = 1;
  } else {
   VAR_8->sink_linked = 0;
  }
 } else {
  if (VAR_6 & VAR_1) {
   if (VAR_8->src_sd) {
    VAR_10 = -VAR_0;
    goto out;
   }
   VAR_8->src_sd = VAR_9;
  } else {
   VAR_8->src_sd = ((void*)0);
  }
 }

out:
 FUNC_4(&VAR_8->lock);
 return VAR_10;
}
