
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct v4l2_querymenu {size_t index; int name; void* id; } ;
struct uvc_video_chain {int ctrl_mutex; } ;
struct uvc_menu_info {int value; int name; } ;
struct uvc_control_mapping {scalar_t__ v4l2_type; size_t menu_count; scalar_t__ data_type; int (* get ) (struct uvc_control_mapping*,int ,int ) ;struct uvc_menu_info* menu_info; } ;
struct TYPE_2__ {int flags; } ;
struct uvc_control {int cached; TYPE_1__ info; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct v4l2_querymenu*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_5 (struct uvc_control*,int ) ;
 int FUNC_6 (struct uvc_video_chain*,struct uvc_control*) ;
 struct uvc_control* FUNC_7 (struct uvc_video_chain*,void*,struct uvc_control_mapping**) ;

int FUNC_8(struct uvc_video_chain *VAR_7,
 struct v4l2_querymenu *VAR_8)
{
 const struct uvc_menu_info *VAR_9;
 struct uvc_control_mapping *VAR_10;
 struct uvc_control *VAR_11;
 u32 VAR_12 = VAR_8->index;
 u32 VAR_13 = VAR_8->id;
 int VAR_14;

 FUNC_0(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->id = VAR_13;
 VAR_8->index = VAR_12;

 VAR_14 = FUNC_1(&VAR_7->ctrl_mutex);
 if (VAR_14 < 0)
  return -VAR_1;

 VAR_11 = FUNC_7(VAR_7, VAR_8->id, &VAR_10);
 if (VAR_11 == ((void*)0) || VAR_10->v4l2_type != VAR_6) {
  VAR_14 = -VAR_0;
  goto done;
 }

 if (VAR_8->index >= VAR_10->menu_count) {
  VAR_14 = -VAR_0;
  goto done;
 }

 VAR_9 = &VAR_10->menu_info[VAR_8->index];

 if (VAR_10->data_type == VAR_3 &&
     (VAR_11->info.flags & VAR_4)) {
  s32 VAR_15;

  if (!VAR_11->cached) {
   VAR_14 = FUNC_6(VAR_7, VAR_11);
   if (VAR_14 < 0)
    goto done;
  }

  VAR_15 = VAR_10->get(VAR_10, VAR_5,
          FUNC_5(VAR_11, VAR_2));
  if (!(VAR_15 & VAR_9->value)) {
   VAR_14 = -VAR_0;
   goto done;
  }
 }

 FUNC_3(VAR_8->name, VAR_9->name, sizeof(VAR_8->name));

done:
 FUNC_2(&VAR_7->ctrl_mutex);
 return VAR_14;
}
