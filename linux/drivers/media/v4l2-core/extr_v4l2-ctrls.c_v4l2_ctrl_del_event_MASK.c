
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subscribed_event {int node; int id; TYPE_1__* fh; } ;
struct v4l2_ctrl {int dummy; } ;
struct TYPE_2__ {int ctrl_handler; } ;


 int FUNC_0 (int *) ;
 struct v4l2_ctrl* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct v4l2_ctrl*) ;
 int FUNC_3 (struct v4l2_ctrl*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subscribed_event *VAR_0)
{
 struct v4l2_ctrl *VAR_1 = FUNC_1(VAR_0->fh->ctrl_handler, VAR_0->id);

 if (VAR_1 == ((void*)0))
  return;

 FUNC_2(VAR_1);
 FUNC_0(&VAR_0->node);
 FUNC_3(VAR_1);
}
