
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {struct qed_cid_acquired_map** acquired_vf; struct qed_cid_acquired_map* acquired; struct qed_conn_type_cfg* conn_cfg; } ;
struct qed_conn_type_cfg {scalar_t__ cids_per_vf; scalar_t__ cid_count; } ;
struct qed_cid_acquired_map {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*,size_t,size_t,scalar_t__,struct qed_cid_acquired_map*) ;
 int FUNC_1 (struct qed_hwfn*) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_3)
{
 struct qed_cxt_mngr *VAR_4 = VAR_3->p_cxt_mngr;
 u32 VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  struct qed_conn_type_cfg *VAR_9 = &VAR_4->conn_cfg[VAR_7];
  struct qed_cid_acquired_map *VAR_10;


  VAR_10 = &VAR_4->acquired[VAR_7];
  if (FUNC_0(VAR_3, VAR_7, VAR_5,
          VAR_9->cid_count, VAR_10))
   goto cid_map_fail;


  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_10 = &VAR_4->acquired_vf[VAR_7][VAR_8];
   if (FUNC_0(VAR_3, VAR_7,
           VAR_6,
           VAR_9->cids_per_vf, VAR_10))
    goto cid_map_fail;
  }

  VAR_5 += VAR_9->cid_count;
  VAR_6 += VAR_9->cids_per_vf;
 }

 return 0;

cid_map_fail:
 FUNC_1(VAR_3);
 return -VAR_0;
}
