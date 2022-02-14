
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct qlcnic_dcb_tc_cfg {size_t up_tc_map; TYPE_3__* prio_cfg; int valid; } ;
struct qlcnic_dcb_cee {struct qlcnic_dcb_tc_cfg* tc_cfg; int pfc_mode_enable; } ;
struct qlcnic_adapter {TYPE_2__* dcb; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {size_t pfc_type; scalar_t__ valid; } ;
struct TYPE_5__ {int state; TYPE_1__* cfg; } ;
struct TYPE_4__ {struct qlcnic_dcb_cee* type; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, int VAR_4,
       u8 *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_1(VAR_3);
 struct qlcnic_dcb_tc_cfg *VAR_7;
 u8 VAR_8 = FUNC_0(VAR_4);
 struct qlcnic_dcb_cee *VAR_9;
 u8 VAR_10;

 *VAR_5 = 0;
 VAR_9 = &VAR_6->dcb->cfg->type[VAR_2];

 if (!FUNC_2(VAR_0, &VAR_6->dcb->state) ||
     !VAR_9->pfc_mode_enable)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_7 = &VAR_9->tc_cfg[VAR_10];
  if (!VAR_7->valid)
   continue;

  if ((VAR_8 & VAR_7->up_tc_map) && (VAR_7->prio_cfg[VAR_4].valid))
   *VAR_5 = VAR_7->prio_cfg[VAR_4].pfc_type;
 }
}
