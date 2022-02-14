
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int a_bus_req; scalar_t__ a_bus_drop; } ;
struct TYPE_6__ {TYPE_1__* otg; } ;
struct mv_otg {int wq_lock; TYPE_4__* pdev; TYPE_3__ otg_ctrl; TYPE_2__ phy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct mv_otg* FUNC_1 (struct device*) ;
 int FUNC_2 (struct mv_otg*) ;
 int FUNC_3 (struct mv_otg*) ;
 int FUNC_4 (struct mv_otg*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct mv_otg *VAR_6 = FUNC_1(VAR_2);

 if (VAR_5 > 2)
  return -1;


 if (VAR_6->phy.otg->state != VAR_1
     && VAR_6->phy.otg->state != VAR_0)
  return -1;


 FUNC_2(VAR_6);
 FUNC_3(VAR_6);

 if (VAR_4[0] == '1') {
  VAR_6->otg_ctrl.a_bus_req = 1;
  VAR_6->otg_ctrl.a_bus_drop = 0;
  FUNC_0(&VAR_6->pdev->dev,
   "User request: a_bus_req = 1\n");

  if (FUNC_5(&VAR_6->wq_lock)) {
   FUNC_4(VAR_6, 0);
   FUNC_6(&VAR_6->wq_lock);
  }
 }

 return VAR_5;
}
