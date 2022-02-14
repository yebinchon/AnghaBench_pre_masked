
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int a_bus_drop; scalar_t__ a_bus_req; } ;
struct TYPE_6__ {TYPE_1__* otg; } ;
struct mv_otg {int wq_lock; TYPE_4__* pdev; TYPE_3__ otg_ctrl; TYPE_2__ phy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {int default_a; } ;


 int FUNC_0 (int *,char*) ;
 struct mv_otg* FUNC_1 (struct device*) ;
 int FUNC_2 (struct mv_otg*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct mv_otg *VAR_4 = FUNC_1(VAR_0);
 if (!VAR_4->phy.otg->default_a)
  return -1;

 if (VAR_3 > 2)
  return -1;

 if (VAR_2[0] == '0') {
  VAR_4->otg_ctrl.a_bus_drop = 0;
  FUNC_0(&VAR_4->pdev->dev,
   "User request: a_bus_drop = 0\n");
 } else if (VAR_2[0] == '1') {
  VAR_4->otg_ctrl.a_bus_drop = 1;
  VAR_4->otg_ctrl.a_bus_req = 0;
  FUNC_0(&VAR_4->pdev->dev,
   "User request: a_bus_drop = 1\n");
  FUNC_0(&VAR_4->pdev->dev,
   "User request: and a_bus_req = 0\n");
 }

 if (FUNC_3(&VAR_4->wq_lock)) {
  FUNC_2(VAR_4, 0);
  FUNC_4(&VAR_4->wq_lock);
 }

 return VAR_3;
}
