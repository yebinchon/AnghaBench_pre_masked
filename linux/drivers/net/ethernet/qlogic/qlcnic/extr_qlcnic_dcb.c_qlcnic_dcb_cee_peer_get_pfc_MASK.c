
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct qlcnic_dcb_tc_cfg {int up_tc_map; } ;
struct TYPE_4__ {int max_pfc_tc; } ;
struct qlcnic_dcb_cfg {TYPE_2__ capability; struct qlcnic_dcb_cee* type; } ;
struct qlcnic_dcb_cee {struct qlcnic_dcb_tc_cfg* tc_cfg; } ;
struct qlcnic_adapter {TYPE_1__* dcb; } ;
struct net_device {int dummy; } ;
struct cee_pfc {int tcs_supported; int pfc_en; } ;
struct TYPE_3__ {int state; struct qlcnic_dcb_cfg* cfg; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,size_t,size_t*) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
           struct cee_pfc *VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_1(VAR_3);
 struct qlcnic_dcb_cfg *VAR_6 = VAR_5->dcb->cfg;
 struct qlcnic_dcb_tc_cfg *VAR_7;
 struct qlcnic_dcb_cee *VAR_8;
 u8 VAR_9, VAR_10, VAR_11;

 VAR_4->pfc_en = 0;

 if (!FUNC_4(VAR_0, &VAR_5->dcb->state))
  return 0;

 VAR_8 = &VAR_6->type[VAR_2];

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_7 = &VAR_8->tc_cfg[VAR_9];
  VAR_11 = FUNC_3(VAR_7->up_tc_map);

  VAR_10 = 0;
  FUNC_2(VAR_3, VAR_11, &VAR_10);
  if (VAR_10)
   VAR_4->pfc_en |= FUNC_0(VAR_9);
 }

 VAR_4->tcs_supported = VAR_6->capability.max_pfc_tc;

 return 0;
}
