
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {struct qed_cid_acquired_map** acquired_vf; struct qed_cid_acquired_map* acquired; struct qed_conn_type_cfg* conn_cfg; } ;
struct qed_conn_type_cfg {int cids_per_vf; scalar_t__ cid_count; } ;
struct qed_cid_acquired_map {int cid_map; int max_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ,size_t) ;

void FUNC_2(struct qed_hwfn *VAR_3)
{
 struct qed_cxt_mngr *VAR_4 = VAR_3->p_cxt_mngr;
 struct qed_cid_acquired_map *VAR_5;
 struct qed_conn_type_cfg *VAR_6;
 int VAR_7;
 u32 VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  u32 VAR_9;

  VAR_6 = &VAR_4->conn_cfg[VAR_7];
  if (VAR_6->cid_count) {
   VAR_5 = &VAR_4->acquired[VAR_7];
   VAR_8 = FUNC_0(VAR_5->max_count,
        sizeof(unsigned long) *
        VAR_0) *
         sizeof(unsigned long);
   FUNC_1(VAR_5->cid_map, 0, VAR_8);
  }

  if (!VAR_6->cids_per_vf)
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   VAR_5 = &VAR_4->acquired_vf[VAR_7][VAR_9];
   VAR_8 = FUNC_0(VAR_5->max_count,
        sizeof(unsigned long) *
        VAR_0) *
         sizeof(unsigned long);
   FUNC_1(VAR_5->cid_map, 0, VAR_8);
  }
 }
}
