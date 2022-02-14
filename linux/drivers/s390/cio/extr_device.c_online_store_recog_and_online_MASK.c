
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ccw_device {TYPE_1__* drv; TYPE_3__* private; int ccwlock; } ;
struct TYPE_5__ {int recog_done; } ;
struct TYPE_6__ {scalar_t__ state; TYPE_2__ flags; int wait_q; } ;
struct TYPE_4__ {scalar_t__ set_online; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ccw_device *VAR_4)
{

 if (VAR_4->private->state == VAR_0) {
  FUNC_2(VAR_4->ccwlock);
  FUNC_0(VAR_4);
  FUNC_3(VAR_4->ccwlock);
  FUNC_4(VAR_4->private->wait_q,
      VAR_4->private->flags.recog_done);
  if (VAR_4->private->state != VAR_1)

   return -VAR_2;
 }
 if (VAR_4->drv && VAR_4->drv->set_online)
  return FUNC_1(VAR_4);
 return -VAR_3;
}
