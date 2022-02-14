
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_queue_info {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,struct be_queue_info*,struct be_queue_info*) ;
 int FUNC_2 (struct be_adapter*,struct be_queue_info*,struct be_queue_info*) ;
 int FUNC_3 (int *,char*) ;

int FUNC_4(struct be_adapter *VAR_0,
         struct be_queue_info *VAR_1, struct be_queue_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 && FUNC_0(VAR_0)) {
  FUNC_3(&VAR_0->pdev->dev, "Upgrade to F/W ver 2.102.235.0 "
   "or newer to avoid conflicting priorities between NIC "
   "and FCoE traffic");
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 }
 return VAR_3;
}
