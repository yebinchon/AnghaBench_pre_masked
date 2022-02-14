
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_dcb_tc_cfg {int pgid; int prio_type; int up_tc_map; int bwg_percent; scalar_t__ valid; } ;
struct qlcnic_dcb_cee {struct qlcnic_dcb_tc_cfg* tc_cfg; int tc_param_valid; } ;
struct qlcnic_adapter {TYPE_2__* dcb; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int state; TYPE_1__* cfg; } ;
struct TYPE_3__ {struct qlcnic_dcb_cee* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_3, int VAR_4, u8 *VAR_5,
       u8 *VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 struct qlcnic_adapter *VAR_9 = FUNC_0(VAR_3);
 struct qlcnic_dcb_tc_cfg *VAR_10, *VAR_11;
 struct qlcnic_dcb_cee *VAR_12;
 u8 VAR_13, VAR_14, VAR_15;

 VAR_12 = &VAR_9->dcb->cfg->type[VAR_2];
 *VAR_5 = *VAR_6 = *VAR_7 = *VAR_8 = 0;

 if (!FUNC_1(VAR_0, &VAR_9->dcb->state) ||
     !VAR_12->tc_param_valid)
  return;

 if (VAR_4 < 0 || (VAR_4 >= VAR_1))
  return;

 VAR_10 = &VAR_12->tc_cfg[VAR_4];
 if (!VAR_10->valid)
  return;

 *VAR_6 = VAR_10->pgid;
 *VAR_5 = VAR_10->prio_type;
 *VAR_8 = VAR_10->up_tc_map;
 VAR_15 = *VAR_6;

 for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_11 = &VAR_12->tc_cfg[VAR_13];
  if (VAR_11->valid && (VAR_15 == VAR_11->pgid))
   VAR_14++;
 }

 VAR_10->bwg_percent = (100 / VAR_14);
 *VAR_7 = VAR_10->bwg_percent;
}
