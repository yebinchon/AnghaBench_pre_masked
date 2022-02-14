
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {int type; unsigned int default_value; unsigned int minimum; int maximum; int step; int flags; int name; int id; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_menu_info {unsigned int value; } ;
struct uvc_control_mapping {int v4l2_type; scalar_t__ master_manual; unsigned int (* get ) (struct uvc_control_mapping*,int ,int ) ;unsigned int menu_count; struct uvc_menu_info* menu_info; scalar_t__ master_id; int name; int id; } ;
struct TYPE_2__ {int flags; } ;
struct uvc_control {TYPE_1__ info; int cached; int entity; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 int FUNC_0 (struct uvc_video_chain*,struct uvc_control*,struct uvc_control_mapping*,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,struct uvc_control_mapping**,struct uvc_control**,int ) ;
 int FUNC_2 (struct v4l2_queryctrl*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 unsigned int FUNC_4 (struct uvc_control_mapping*,int ,int ) ;
 unsigned int FUNC_5 (struct uvc_control_mapping*,int ,int ) ;
 unsigned int FUNC_6 (struct uvc_control_mapping*,int ,int ) ;
 unsigned int FUNC_7 (struct uvc_control_mapping*,int ,int ) ;
 int FUNC_8 (struct uvc_control*,int ) ;
 int FUNC_9 (struct uvc_video_chain*,struct uvc_control*) ;

__attribute__((used)) static int FUNC_10(struct uvc_video_chain *VAR_17,
 struct uvc_control *VAR_18,
 struct uvc_control_mapping *VAR_19,
 struct v4l2_queryctrl *VAR_20)
{
 struct uvc_control_mapping *VAR_21 = ((void*)0);
 struct uvc_control *VAR_22 = ((void*)0);
 const struct uvc_menu_info *VAR_23;
 unsigned int VAR_24;

 FUNC_2(VAR_20, 0, sizeof(*VAR_20));
 VAR_20->id = VAR_19->id;
 VAR_20->type = VAR_19->v4l2_type;
 FUNC_3(VAR_20->name, VAR_19->name, sizeof(VAR_20->name));
 VAR_20->flags = 0;

 if (!(VAR_18->info.flags & VAR_4))
  VAR_20->flags |= VAR_16;
 if (!(VAR_18->info.flags & VAR_9))
  VAR_20->flags |= VAR_15;

 if (VAR_19->master_id)
  FUNC_1(VAR_18->entity, VAR_19->master_id,
       &VAR_21, &VAR_22, 0);
 if (VAR_22 && (VAR_22->info.flags & VAR_4)) {
  s32 VAR_25;
  int VAR_26 = FUNC_0(VAR_17, VAR_22, VAR_21, &VAR_25);
  if (VAR_26 < 0)
   return VAR_26;

  if (VAR_25 != VAR_19->master_manual)
    VAR_20->flags |= VAR_14;
 }

 if (!VAR_18->cached) {
  int VAR_27 = FUNC_9(VAR_17, VAR_18);
  if (VAR_27 < 0)
   return VAR_27;
 }

 if (VAR_18->info.flags & VAR_5) {
  VAR_20->default_value = VAR_19->get(VAR_19, VAR_10,
    FUNC_8(VAR_18, VAR_0));
 }

 switch (VAR_19->v4l2_type) {
 case 128:
  VAR_20->minimum = 0;
  VAR_20->maximum = VAR_19->menu_count - 1;
  VAR_20->step = 1;

  VAR_23 = VAR_19->menu_info;
  for (VAR_24 = 0; VAR_24 < VAR_19->menu_count; ++VAR_24, ++VAR_23) {
   if (VAR_23->value == VAR_20->default_value) {
    VAR_20->default_value = VAR_24;
    break;
   }
  }

  return 0;

 case 130:
  VAR_20->minimum = 0;
  VAR_20->maximum = 1;
  VAR_20->step = 1;
  return 0;

 case 129:
  VAR_20->minimum = 0;
  VAR_20->maximum = 0;
  VAR_20->step = 0;
  return 0;

 default:
  break;
 }

 if (VAR_18->info.flags & VAR_7)
  VAR_20->minimum = VAR_19->get(VAR_19, VAR_12,
         FUNC_8(VAR_18, VAR_2));

 if (VAR_18->info.flags & VAR_6)
  VAR_20->maximum = VAR_19->get(VAR_19, VAR_11,
         FUNC_8(VAR_18, VAR_1));

 if (VAR_18->info.flags & VAR_8)
  VAR_20->step = VAR_19->get(VAR_19, VAR_13,
      FUNC_8(VAR_18, VAR_3));

 return 0;
}
