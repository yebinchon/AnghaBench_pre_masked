
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int flags; TYPE_1__* handler; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct v4l2_ctrl*,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;

void FUNC_4(struct v4l2_ctrl *VAR_1, bool VAR_2)
{
 bool VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1->handler->lock);

 if (VAR_2)

  VAR_3 = FUNC_3(1, &VAR_1->flags);
 else

  VAR_3 = FUNC_2(1, &VAR_1->flags);
 if (VAR_3 != VAR_2)
  FUNC_1(((void*)0), VAR_1, VAR_0);
}
