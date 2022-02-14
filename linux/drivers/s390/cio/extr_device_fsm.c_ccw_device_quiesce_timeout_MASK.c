
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; } ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_2__ {int wait_q; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ccw_device *VAR_3, enum dev_event VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 == -VAR_1) {
  FUNC_1(VAR_3, VAR_2/10);
 } else {
  VAR_3->private->state = VAR_0;
  FUNC_2(&VAR_3->private->wait_q);
 }
}
