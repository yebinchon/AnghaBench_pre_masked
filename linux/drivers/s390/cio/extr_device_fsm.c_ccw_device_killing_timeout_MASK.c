
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; int (* handler ) (struct ccw_device*,int ,int ) ;} ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_2__ {int async_kill_io_rc; int intparm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (struct ccw_device*,int) ;
 int FUNC_4 (struct ccw_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct ccw_device *VAR_2, enum dev_event VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == -VAR_0) {
  FUNC_3(VAR_2, 3*VAR_1);
  return;
 }

 FUNC_2(VAR_2, 0);
 if (VAR_2->handler)
  VAR_2->handler(VAR_2, VAR_2->private->intparm,
         FUNC_0(VAR_2->private->async_kill_io_rc));
}
