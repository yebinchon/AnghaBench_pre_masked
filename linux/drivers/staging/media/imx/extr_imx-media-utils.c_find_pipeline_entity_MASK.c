
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct media_entity {int dummy; } ;
struct video_device {struct media_entity entity; TYPE_1__* queue; } ;
struct v4l2_subdev {int grp_id; struct media_entity entity; } ;
struct media_pad {struct media_entity* entity; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int type; } ;


 struct media_pad* FUNC_0 (struct media_entity*,int,int,int) ;
 scalar_t__ FUNC_1 (struct media_entity*) ;
 scalar_t__ FUNC_2 (struct media_entity*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 struct video_device* FUNC_4 (struct media_entity*) ;

__attribute__((used)) static struct media_entity *
FUNC_5(struct media_entity *VAR_0, u32 VAR_1,
       enum v4l2_buf_type VAR_2, bool VAR_3)
{
 struct media_pad *VAR_4 = ((void*)0);
 struct video_device *VAR_5;
 struct v4l2_subdev *VAR_6;

 if (VAR_1 && FUNC_1(VAR_0)) {
  VAR_6 = FUNC_3(VAR_0);
  if (VAR_6->grp_id & VAR_1)
   return &VAR_6->entity;
 } else if (VAR_2 && FUNC_2(VAR_0)) {
  VAR_5 = FUNC_4(VAR_0);
  if (VAR_2 == VAR_5->queue->type)
   return &VAR_5->entity;
 }

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_4 ? VAR_4->entity : ((void*)0);
}
