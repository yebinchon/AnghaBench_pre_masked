
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int b_bus_req; int lock; TYPE_1__* otg; } ;
struct TYPE_5__ {int host_request_flag; } ;
struct ci_hdrc {TYPE_3__ fsm; TYPE_2__ gadget; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ci_hdrc*) ;
 struct ci_hdrc* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct ci_hdrc *VAR_5 = FUNC_1(VAR_1);

 if (VAR_4 > 2)
  return -1;

 FUNC_2(&VAR_5->fsm.lock);
 if (VAR_3[0] == '0')
  VAR_5->fsm.b_bus_req = 0;
 else if (VAR_3[0] == '1') {
  VAR_5->fsm.b_bus_req = 1;
  if (VAR_5->fsm.otg->state == VAR_0) {
   VAR_5->gadget.host_request_flag = 1;
   FUNC_3(&VAR_5->fsm.lock);
   return VAR_4;
  }
 }

 FUNC_0(VAR_5);
 FUNC_3(&VAR_5->fsm.lock);

 return VAR_4;
}
