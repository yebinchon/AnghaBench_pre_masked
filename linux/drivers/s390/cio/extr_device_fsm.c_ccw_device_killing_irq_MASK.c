
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; int (* handler ) (struct ccw_device*,int ,int ) ;} ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_2__ {int async_kill_io_rc; int intparm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (struct ccw_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ccw_device *VAR_0, enum dev_event VAR_1)
{
 FUNC_2(VAR_0, 0);

 FUNC_1(VAR_0, 0);

 if (VAR_0->handler)
  VAR_0->handler(VAR_0, VAR_0->private->intparm,
         FUNC_0(VAR_0->private->async_kill_io_rc));
}
