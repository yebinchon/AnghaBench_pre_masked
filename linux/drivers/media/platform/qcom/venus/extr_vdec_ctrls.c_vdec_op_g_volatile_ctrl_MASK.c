
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int level; int profile; } ;
union hfi_get_property {TYPE_4__ profile_level; } ;
typedef int u32 ;
struct vdec_controls {int post_loop_deb_mode; int level; int profile; } ;
struct TYPE_5__ {struct vdec_controls dec; } ;
struct venus_inst {TYPE_3__* core; TYPE_1__ controls; } ;
struct v4l2_ctrl {int id; int val; } ;
struct hfi_buffer_requirements {int dummy; } ;
typedef enum hfi_version { ____Placeholder_hfi_version } hfi_version ;
struct TYPE_7__ {TYPE_2__* res; } ;
struct TYPE_6__ {int hfi_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi_buffer_requirements*,int) ;
 int VAR_2 ;







 struct venus_inst* FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct venus_inst*,int ,union hfi_get_property*) ;
 int FUNC_3 (struct venus_inst*,int ,struct hfi_buffer_requirements*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_3)
{
 struct venus_inst *VAR_4 = FUNC_1(VAR_3);
 struct vdec_controls *VAR_5 = &VAR_4->controls.dec;
 struct hfi_buffer_requirements VAR_6;
 union hfi_get_property VAR_7;
 enum hfi_version VAR_8 = VAR_4->core->res->hfi_version;
 u32 VAR_9 = VAR_2;
 int VAR_10;

 switch (VAR_3->id) {
 case 131:
 case 129:
 case 128:
  VAR_10 = FUNC_2(VAR_4, VAR_9, &VAR_7);
  if (!VAR_10)
   VAR_5->profile = VAR_7.profile_level.profile;
  VAR_3->val = VAR_5->profile;
  break;
 case 132:
 case 130:
  VAR_10 = FUNC_2(VAR_4, VAR_9, &VAR_7);
  if (!VAR_10)
   VAR_5->level = VAR_7.profile_level.level;
  VAR_3->val = VAR_5->level;
  break;
 case 133:
  VAR_3->val = VAR_5->post_loop_deb_mode;
  break;
 case 134:
  VAR_10 = FUNC_3(VAR_4, VAR_1, &VAR_6);
  if (!VAR_10)
   VAR_3->val = FUNC_0(&VAR_6, VAR_8);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
