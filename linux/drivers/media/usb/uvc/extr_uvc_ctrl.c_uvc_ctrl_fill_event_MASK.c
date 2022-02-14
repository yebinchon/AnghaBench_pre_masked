
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_queryctrl {int default_value; int step; int maximum; int minimum; int flags; int type; int id; } ;
struct TYPE_3__ {int default_value; int step; int maximum; int minimum; int flags; int type; int changes; int value; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;
struct v4l2_event {TYPE_2__ u; int id; int type; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_control_mapping {int dummy; } ;
struct uvc_control {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_video_chain*,struct uvc_control*,struct uvc_control_mapping*,struct v4l2_queryctrl*) ;
 int FUNC_1 (struct v4l2_event*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uvc_video_chain *VAR_1,
 struct v4l2_event *VAR_2,
 struct uvc_control *VAR_3,
 struct uvc_control_mapping *VAR_4,
 s32 VAR_5, u32 VAR_6)
{
 struct v4l2_queryctrl VAR_7;

 FUNC_0(VAR_1, VAR_3, VAR_4, &VAR_7);

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->type = VAR_0;
 VAR_2->id = VAR_7.id;
 VAR_2->u.ctrl.value = VAR_5;
 VAR_2->u.ctrl.changes = VAR_6;
 VAR_2->u.ctrl.type = VAR_7.type;
 VAR_2->u.ctrl.flags = VAR_7.flags;
 VAR_2->u.ctrl.minimum = VAR_7.minimum;
 VAR_2->u.ctrl.maximum = VAR_7.maximum;
 VAR_2->u.ctrl.step = VAR_7.step;
 VAR_2->u.ctrl.default_value = VAR_7.default_value;
}
