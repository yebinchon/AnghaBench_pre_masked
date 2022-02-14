
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_ref {TYPE_2__* ctrl; TYPE_1__* req; } ;
struct TYPE_4__ {int p_new; int p_cur; } ;
struct TYPE_3__ {int p_req; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct v4l2_ctrl_ref *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->req)
  FUNC_0(VAR_0->ctrl, VAR_0->req->p_req, VAR_0->ctrl->p_new);
 else
  FUNC_0(VAR_0->ctrl, VAR_0->ctrl->p_cur, VAR_0->ctrl->p_new);
}
