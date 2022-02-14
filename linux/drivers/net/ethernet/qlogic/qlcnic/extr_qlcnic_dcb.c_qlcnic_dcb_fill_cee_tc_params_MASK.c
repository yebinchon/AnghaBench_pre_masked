
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct qlcnic_dcb_tc_cfg {int valid; size_t pgid; int prio_type; TYPE_1__* prio_cfg; int up_tc_map; } ;
struct qlcnic_dcb_param {int * prio_pg_map; int * hdr_prio_pfc_map; } ;
struct qlcnic_dcb_mbx_params {int prio_tc_map; } ;
struct qlcnic_dcb_cee {TYPE_2__* pg_cfg; scalar_t__ pfc_mode_enable; struct qlcnic_dcb_tc_cfg* tc_cfg; } ;
struct TYPE_4__ {int prio_count; } ;
struct TYPE_3__ {int valid; int pfc_type; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int ,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct qlcnic_dcb_mbx_params *VAR_3,
       struct qlcnic_dcb_param *VAR_4,
       struct qlcnic_dcb_cee *VAR_5)
{
 struct qlcnic_dcb_tc_cfg *VAR_6;
 u8 VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = FUNC_3(VAR_3->prio_tc_map, VAR_7);
  VAR_6 = &VAR_5->tc_cfg[VAR_8];
  VAR_6->valid = 1;
  VAR_6->up_tc_map |= FUNC_0(VAR_7);

  if (FUNC_1(VAR_4->hdr_prio_pfc_map[1], VAR_7) &&
      VAR_5->pfc_mode_enable) {
   VAR_6->prio_cfg[VAR_7].valid = 1;
   VAR_6->prio_cfg[VAR_7].pfc_type = VAR_1;
  }

  if (VAR_7 < 4)
   VAR_9 = FUNC_2(VAR_4->prio_pg_map[0], VAR_7);
  else
   VAR_9 = FUNC_2(VAR_4->prio_pg_map[1], VAR_7);

  VAR_6->pgid = VAR_9;

  VAR_6->prio_type = VAR_2;
  VAR_5->pg_cfg[VAR_6->pgid].prio_count++;
 }
}
