
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netxen_adapter {int capabilities; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,int *) ;

__attribute__((used)) static void
FUNC_2(struct netxen_adapter *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;

 if (VAR_2->capabilities & VAR_0) {

  if (FUNC_1(VAR_3, &VAR_1)) {
   FUNC_0(VAR_3,
    "failed to create bridged_mode sysfs entry\n");
  }
 }
}
