
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_dcb_cee {TYPE_4__* tc_cfg; int pfc_mode_enable; int tc_param_valid; } ;
struct qlcnic_adapter {TYPE_2__* dcb; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* prio_cfg; } ;
struct TYPE_7__ {int pfc_type; } ;
struct TYPE_6__ {TYPE_1__* cfg; int state; } ;
struct TYPE_5__ {struct qlcnic_dcb_cee* type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static u8 FUNC_3(struct net_device *VAR_4, int VAR_5, u8 *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_1(VAR_4);
 struct qlcnic_dcb_cee *VAR_8;

 if (!FUNC_2(VAR_2, &VAR_7->dcb->state))
  return 1;

 VAR_8 = &VAR_7->dcb->cfg->type[VAR_3];
 *VAR_6 = 0;

 switch (VAR_5) {
 case 128:
  if (VAR_8->tc_param_valid)
   *VAR_6 |= VAR_0;
  else
   *VAR_6 |= VAR_1;
  break;
 case 129:
  if (VAR_8->pfc_mode_enable) {
   if (VAR_8->tc_cfg[0].prio_cfg[0].pfc_type)
    *VAR_6 |= VAR_0;
  } else {
   *VAR_6 |= VAR_1;
  }
  break;
 case 130:
  *VAR_6 |= VAR_0;
  break;
 default:
  FUNC_0(VAR_4, "Invalid Feature ID %d\n", VAR_5);
  return 1;
 }

 return 0;
}
