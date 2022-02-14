
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct i40e_pf {TYPE_2__* pdev; int state; TYPE_3__ hw; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct i40e_pf *VAR_11)
{
 u32 VAR_12 = FUNC_2(&VAR_11->hw, VAR_0) & VAR_1;
 bool VAR_13 = 0;

 if (VAR_11->hw.mac.type == VAR_3)
  VAR_13 =
  VAR_12 == VAR_6 ||
  VAR_12 == VAR_7 ||
  VAR_12 == VAR_9 ||
  VAR_12 == VAR_8;
 if (VAR_11->hw.mac.type == VAR_2)
  VAR_13 =
  VAR_12 == VAR_4 ||
  VAR_12 == VAR_5;
 if (VAR_13) {
  FUNC_1(&VAR_11->pdev->dev, "Firmware recovery mode detected. Limiting functionality.\n");
  FUNC_1(&VAR_11->pdev->dev, "Refer to the Intel(R) Ethernet Adapters and Devices User Guide for details on firmware recovery mode.\n");
  FUNC_3(VAR_10, VAR_11->state);

  return 1;
 }
 if (FUNC_4(VAR_10, VAR_11->state))
  FUNC_0(&VAR_11->pdev->dev, "Reinitializing in normal mode with full functionality.\n");

 return 0;
}
