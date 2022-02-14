
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * p_s64; } ;
struct v4l2_ctrl {scalar_t__ type; TYPE_2__ p_new; scalar_t__ is_ptr; TYPE_1__* handler; } ;
typedef int s64 ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct v4l2_ctrl*,int ) ;

int FUNC_3(struct v4l2_ctrl *VAR_1, s64 VAR_2)
{
 FUNC_1(VAR_1->handler->lock);


 FUNC_0(VAR_1->is_ptr || VAR_1->type != VAR_0);
 *VAR_1->p_new.p_s64 = VAR_2;
 return FUNC_2(((void*)0), VAR_1, 0);
}
