
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int state; TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_2__ {scalar_t__ op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct qlcnic_adapter*,int,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct net_device *VAR_7,
    enum ethtool_phys_id_state VAR_8)
{
 struct qlcnic_adapter *VAR_9 = FUNC_2(VAR_7);
 int VAR_10 = -VAR_2, VAR_11 = 1;

 if (VAR_9->ahw->op_mode == VAR_4) {
  FUNC_3(VAR_7,
       "LED test is not supported in non-privileged mode\n");
  return -VAR_3;
 }

 switch (VAR_8) {
 case 129:
  if (FUNC_5(VAR_5, &VAR_9->state))
   return -VAR_0;

  if (FUNC_6(VAR_6, &VAR_9->state))
   break;

  VAR_10 = FUNC_4(VAR_9, VAR_11, 0);
  if (VAR_10)
   FUNC_1(VAR_7, "Failed to set LED blink state\n");
  break;
 case 128:
  VAR_11 = 0;

  if (FUNC_6(VAR_6, &VAR_9->state))
   break;

  VAR_10 = FUNC_4(VAR_9, VAR_11, 0);
  if (VAR_10)
   FUNC_1(VAR_7, "Failed to reset LED blink state\n");
  break;

 default:
  return -VAR_1;
 }

 if (!VAR_11 || VAR_10)
  FUNC_0(VAR_5, &VAR_9->state);

 return VAR_10;
}
