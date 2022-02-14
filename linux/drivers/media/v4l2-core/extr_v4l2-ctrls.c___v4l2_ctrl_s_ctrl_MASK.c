
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int val; int is_int; TYPE_1__* handler; } ;
typedef int s32 ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct v4l2_ctrl*,int ) ;

int FUNC_3(struct v4l2_ctrl *VAR_0, s32 VAR_1)
{
 FUNC_1(VAR_0->handler->lock);


 FUNC_0(!VAR_0->is_int);
 VAR_0->val = VAR_1;
 return FUNC_2(((void*)0), VAR_0, 0);
}
