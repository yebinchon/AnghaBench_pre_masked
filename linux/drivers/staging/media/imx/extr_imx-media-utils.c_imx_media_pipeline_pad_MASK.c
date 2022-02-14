
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct video_device {TYPE_1__* queue; } ;
struct v4l2_subdev {int grp_id; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {int num_pads; struct media_pad* pads; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct media_entity*) ;
 scalar_t__ FUNC_1 (struct media_entity*) ;
 struct media_pad* FUNC_2 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 struct video_device* FUNC_4 (struct media_entity*) ;

struct media_pad *
FUNC_5(struct media_entity *VAR_2, u32 VAR_3,
         enum v4l2_buf_type VAR_4, bool VAR_5)
{
 struct media_entity *VAR_6 = VAR_2;
 struct media_pad *VAR_7 = ((void*)0);
 struct video_device *VAR_8;
 struct v4l2_subdev *VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_6->num_pads; VAR_10++) {
  struct media_pad *VAR_11 = &VAR_6->pads[VAR_10];

  if ((VAR_5 && !(VAR_11->flags & VAR_0)) ||
      (!VAR_5 && !(VAR_11->flags & VAR_1)))
   continue;

  VAR_7 = FUNC_2(VAR_11);
  if (!VAR_7)
   continue;

  if (VAR_3) {
   if (FUNC_0(VAR_7->entity)) {
    VAR_9 = FUNC_3(VAR_7->entity);
    if (VAR_9->grp_id & VAR_3)
     return VAR_7;
   }

   return FUNC_5(VAR_7->entity, VAR_3,
            VAR_4, VAR_5);
  } else if (VAR_4) {
   if (FUNC_1(VAR_7->entity)) {
    VAR_8 = FUNC_4(VAR_7->entity);
    if (VAR_4 == VAR_8->queue->type)
     return VAR_7;
   }

   return FUNC_5(VAR_7->entity, VAR_3,
            VAR_4, VAR_5);
  } else {
   return VAR_7;
  }
 }

 return ((void*)0);
}
