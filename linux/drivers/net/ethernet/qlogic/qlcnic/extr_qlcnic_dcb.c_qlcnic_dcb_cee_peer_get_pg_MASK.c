
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct qlcnic_dcb_cee {TYPE_4__* tc_cfg; TYPE_3__* pg_cfg; } ;
struct qlcnic_adapter {TYPE_2__* dcb; } ;
struct net_device {int dummy; } ;
struct cee_pg {size_t* prio_pg; int * pg_bw; } ;
struct TYPE_8__ {size_t pgid; size_t up_tc_map; scalar_t__ valid; } ;
struct TYPE_7__ {int total_bw_percent; int valid; } ;
struct TYPE_6__ {TYPE_1__* cfg; int state; } ;
struct TYPE_5__ {struct qlcnic_dcb_cee* type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
          struct cee_pg *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_0(VAR_4);
 struct qlcnic_dcb_cee *VAR_7;
 u8 VAR_8, VAR_9, VAR_10, VAR_11;

 if (!FUNC_1(VAR_0, &VAR_6->dcb->state))
  return 0;

 VAR_7 = &VAR_6->dcb->cfg->type[VAR_3];

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (!VAR_7->pg_cfg[VAR_8].valid)
   continue;

  VAR_5->pg_bw[VAR_9] = VAR_7->pg_cfg[VAR_8].total_bw_percent;

  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   if (VAR_7->tc_cfg[VAR_8].valid &&
       (VAR_7->tc_cfg[VAR_8].pgid == VAR_8)) {
    VAR_11 = VAR_7->tc_cfg[VAR_8].up_tc_map;
    VAR_5->prio_pg[VAR_9++] = VAR_11;
    break;
   }
  }
 }

 return 0;
}
