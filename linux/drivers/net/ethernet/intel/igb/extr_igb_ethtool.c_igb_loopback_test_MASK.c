
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct igb_adapter {TYPE_2__* pdev; TYPE_3__ hw; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct igb_adapter*) ;
 int FUNC_7 (struct igb_adapter*) ;

__attribute__((used)) static int FUNC_8(struct igb_adapter *VAR_1, u64 *VAR_2)
{



 if (FUNC_2(&VAR_1->hw)) {
  FUNC_0(&VAR_1->pdev->dev,
   "Cannot do PHY loopback test when SoL/IDER is active.\n");
  *VAR_2 = 0;
  goto out;
 }

 if (VAR_1->hw.mac.type == VAR_0) {
  FUNC_1(&VAR_1->pdev->dev,
   "Loopback test not supported on i354.\n");
  *VAR_2 = 0;
  goto out;
 }
 *VAR_2 = FUNC_6(VAR_1);
 if (*VAR_2)
  goto out;
 *VAR_2 = FUNC_7(VAR_1);
 if (*VAR_2)
  goto err_loopback;
 *VAR_2 = FUNC_5(VAR_1);
 FUNC_4(VAR_1);

err_loopback:
 FUNC_3(VAR_1);
out:
 return *VAR_2;
}
