
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * v4l2_ctrl_notify_fnc ;
struct v4l2_ctrl {int call_notify; TYPE_1__* handler; } ;
struct TYPE_2__ {void* notify_priv; int * notify; } ;


 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(struct v4l2_ctrl *VAR_0, v4l2_ctrl_notify_fnc VAR_1, void *VAR_2)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_1 == ((void*)0)) {
  VAR_0->call_notify = 0;
  return;
 }
 if (FUNC_0(VAR_0->handler->notify && VAR_0->handler->notify != VAR_1))
  return;
 VAR_0->handler->notify = VAR_1;
 VAR_0->handler->notify_priv = VAR_2;
 VAR_0->call_notify = 1;
}
