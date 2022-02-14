
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_controls {int level; int profile; int post_loop_deb_mode; } ;
struct TYPE_2__ {struct vdec_controls dec; } ;
struct venus_inst {TYPE_1__ controls; } ;
struct v4l2_ctrl {int id; int val; } ;


 int VAR_0 ;






 struct venus_inst* FUNC_0 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_ctrl *VAR_1)
{
 struct venus_inst *VAR_2 = FUNC_0(VAR_1);
 struct vdec_controls *VAR_3 = &VAR_2->controls.dec;

 switch (VAR_1->id) {
 case 133:
  VAR_3->post_loop_deb_mode = VAR_1->val;
  break;
 case 131:
 case 129:
 case 128:
  VAR_3->profile = VAR_1->val;
  break;
 case 132:
 case 130:
  VAR_3->level = VAR_1->val;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
