
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int dummy; } ;
struct v4l2_ctrl_ref {int p_req; int ctrl; } ;


 int FUNC_0 (struct v4l2_ext_control*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_ext_control *VAR_0,
         struct v4l2_ctrl_ref *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->ctrl, VAR_1->p_req);
}
