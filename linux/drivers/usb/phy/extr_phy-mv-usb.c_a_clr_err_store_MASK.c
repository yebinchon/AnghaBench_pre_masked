
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int a_clr_err; } ;
struct TYPE_7__ {TYPE_2__* otg; } ;
struct mv_otg {int wq_lock; TYPE_1__* pdev; TYPE_4__ otg_ctrl; TYPE_3__ phy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int default_a; } ;
struct TYPE_5__ {int dev; } ;


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

 if (VAR_2[0] == '1') {
  VAR_4->otg_ctrl.a_clr_err = 1;
  FUNC_0(&VAR_4->pdev->dev,
   "User request: a_clr_err = 1\n");
 }

 if (FUNC_3(&VAR_4->wq_lock)) {
  FUNC_2(VAR_4, 0);
  FUNC_4(&VAR_4->wq_lock);
 }

 return VAR_3;
}
