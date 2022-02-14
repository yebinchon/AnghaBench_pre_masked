
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccw_device {TYPE_2__* drv; int ccwlock; TYPE_1__* private; } ;
struct TYPE_4__ {scalar_t__ set_offline; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ccw_device *VAR_3)
{
 if (VAR_3->private->state == VAR_1) {
  FUNC_2(VAR_3->ccwlock);
  FUNC_0(VAR_3, VAR_0);
  FUNC_3(VAR_3->ccwlock);
  return 0;
 }
 if (VAR_3->drv && VAR_3->drv->set_offline)
  return FUNC_1(VAR_3);
 return -VAR_2;
}
