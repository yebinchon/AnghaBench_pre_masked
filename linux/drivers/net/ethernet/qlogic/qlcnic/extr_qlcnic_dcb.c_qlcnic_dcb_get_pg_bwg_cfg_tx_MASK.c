
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_dcb_pg_cfg {int total_bw_percent; int valid; } ;
struct qlcnic_dcb_cee {struct qlcnic_dcb_pg_cfg* pg_cfg; int tc_param_valid; } ;
struct qlcnic_adapter {TYPE_2__* dcb; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int state; TYPE_1__* cfg; } ;
struct TYPE_3__ {struct qlcnic_dcb_cee* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, int VAR_4,
      u8 *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_0(VAR_3);
 struct qlcnic_dcb_pg_cfg *VAR_7;
 struct qlcnic_dcb_cee *VAR_8;

 *VAR_5 = 0;
 VAR_8 = &VAR_6->dcb->cfg->type[VAR_2];

 if (!FUNC_1(VAR_0, &VAR_6->dcb->state) ||
     !VAR_8->tc_param_valid)
  return;

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return;

 VAR_7 = &VAR_8->pg_cfg[VAR_4];
 if (!VAR_7->valid)
  return;

 *VAR_5 = VAR_7->total_bw_percent;
}
