
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {int flags; TYPE_2__* ahw; int state; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ op_mode; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,int *) ;
 scalar_t__ FUNC_2 (struct device*,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_14)
{
 struct device *VAR_15 = &VAR_14->pdev->dev;

 if (FUNC_1(VAR_15, &VAR_11))
  FUNC_0(VAR_15, "failed to create port stats sysfs entry");

 if (VAR_14->ahw->op_mode == VAR_2)
  return;
 if (FUNC_2(VAR_15, &VAR_13))
  FUNC_0(VAR_15, "failed to create diag_mode sysfs entry\n");
 if (FUNC_1(VAR_15, &VAR_4))
  FUNC_0(VAR_15, "failed to create crb sysfs entry\n");
 if (FUNC_1(VAR_15, &VAR_7))
  FUNC_0(VAR_15, "failed to create mem sysfs entry\n");

 if (FUNC_3(VAR_3, &VAR_14->state))
  return;

 if (FUNC_1(VAR_15, &VAR_9))
  FUNC_0(VAR_15, "failed to create pci config sysfs entry");

 if (FUNC_2(VAR_15, &VAR_12))
  FUNC_0(VAR_15, "failed to create beacon sysfs entry");

 if (!(VAR_14->flags & VAR_0))
  return;
 if (FUNC_1(VAR_15, &VAR_5))
  FUNC_0(VAR_15, "failed to create esw config sysfs entry");
 if (VAR_14->ahw->op_mode != VAR_1)
  return;
 if (FUNC_1(VAR_15, &VAR_8))
  FUNC_0(VAR_15, "failed to create npar config sysfs entry");
 if (FUNC_1(VAR_15, &VAR_10))
  FUNC_0(VAR_15, "failed to create pm config sysfs entry");
 if (FUNC_1(VAR_15, &VAR_6))
  FUNC_0(VAR_15, "failed to create eswitch stats sysfs entry");
}
