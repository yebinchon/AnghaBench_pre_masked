
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct s5p_mfc_ctx {int slice_interface; int loop_filter_mpeg4; int display_delay_enable; int display_delay; } ;


 int VAR_0 ;




 struct s5p_mfc_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_1)
{
 struct s5p_mfc_ctx *VAR_2 = FUNC_0(VAR_1);

 switch (VAR_1->id) {
 case 131:
  VAR_2->display_delay = VAR_1->val;
  break;
 case 130:
  VAR_2->display_delay_enable = VAR_1->val;
  break;
 case 129:
  VAR_2->loop_filter_mpeg4 = VAR_1->val;
  break;
 case 128:
  VAR_2->slice_interface = VAR_1->val;
  break;
 default:
  FUNC_1("Invalid control 0x%08x\n", VAR_1->id);
  return -VAR_0;
 }
 return 0;
}
