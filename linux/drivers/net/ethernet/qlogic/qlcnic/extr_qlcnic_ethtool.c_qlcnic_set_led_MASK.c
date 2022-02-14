
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_adapter {int drv_sds_rings; int state; TYPE_3__* pdev; TYPE_2__* nic_ops; TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* config_led ) (struct qlcnic_adapter*,int,int) ;} ;
struct TYPE_4__ {scalar_t__ op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct qlcnic_adapter*,int,int) ;
 int FUNC_10 (struct qlcnic_adapter*,int,int) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_10,
     enum ethtool_phys_id_state VAR_11)
{
 struct qlcnic_adapter *VAR_12 = FUNC_2(VAR_10);
 int VAR_13 = VAR_12->drv_sds_rings;
 int VAR_14 = -VAR_2, VAR_15 = 1;

 if (FUNC_4(VAR_12))
  return FUNC_5(VAR_10, VAR_11);

 if (VAR_12->ahw->op_mode == VAR_5) {
  FUNC_3(VAR_10, "LED test not supported for non "
    "privilege function\n");
  return -VAR_3;
 }

 switch (VAR_11) {
 case 129:
  if (FUNC_12(VAR_8, &VAR_12->state))
   return -VAR_0;

  if (FUNC_13(VAR_9, &VAR_12->state))
   break;

  if (!FUNC_13(VAR_6, &VAR_12->state)) {
   if (FUNC_6(VAR_10, VAR_4))
    break;
   FUNC_8(VAR_7, &VAR_12->state);
  }

  if (VAR_12->nic_ops->config_led(VAR_12, 1, 0xf) == 0) {
   VAR_14 = 0;
   break;
  }

  FUNC_1(&VAR_12->pdev->dev,
   "Failed to set LED blink state.\n");
  break;

 case 128:
  VAR_15 = 0;

  if (FUNC_13(VAR_9, &VAR_12->state))
   break;

  if (!FUNC_13(VAR_6, &VAR_12->state)) {
   if (FUNC_6(VAR_10, VAR_4))
    break;
   FUNC_8(VAR_7, &VAR_12->state);
  }

  if (VAR_12->nic_ops->config_led(VAR_12, 0, 0xf))
   FUNC_1(&VAR_12->pdev->dev,
    "Failed to reset LED blink state.\n");

  break;

 default:
  return -VAR_1;
 }

 if (FUNC_11(VAR_7, &VAR_12->state))
  FUNC_7(VAR_10, VAR_13);

 if (!VAR_15 || VAR_14)
  FUNC_0(VAR_8, &VAR_12->state);

 return VAR_14;
}
