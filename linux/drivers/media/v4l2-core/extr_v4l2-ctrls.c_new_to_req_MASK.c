
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_ref {struct v4l2_ctrl_ref* req; int p_req; TYPE_1__* ctrl; } ;
struct TYPE_2__ {int p_new; } ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct v4l2_ctrl_ref *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->ctrl, VAR_0->ctrl->p_new, VAR_0->p_req);
 VAR_0->req = VAR_0;
}
