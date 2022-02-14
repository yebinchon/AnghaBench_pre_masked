
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int max_pfc_tc; int max_ets_tc; } ;
struct qlcnic_dcb_cfg {TYPE_2__ capability; } ;
struct qlcnic_adapter {TYPE_1__* dcb; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int state; struct qlcnic_dcb_cfg* cfg; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_0(VAR_2);
 struct qlcnic_dcb_cfg *VAR_6 = VAR_5->dcb->cfg;

 if (!FUNC_1(VAR_1, &VAR_5->dcb->state))
  return -VAR_0;

 switch (VAR_3) {
 case 128:
  *VAR_4 = VAR_6->capability.max_ets_tc;
  return 0;
 case 129:
  *VAR_4 = VAR_6->capability.max_pfc_tc;
  return 0;
 default:
  return -VAR_0;
 }
}
