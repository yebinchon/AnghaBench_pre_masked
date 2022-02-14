
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_src_iids {int pf_cids; int per_vf_cids; } ;
struct qed_cxt_mngr {scalar_t__ arfs_count; TYPE_1__* conn_cfg; } ;
struct TYPE_2__ {scalar_t__ cids_per_vf; scalar_t__ cid_count; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;

__attribute__((used)) static void FUNC_1(struct qed_cxt_mngr *VAR_1,
        struct qed_src_iids *VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_0(VAR_3))
   continue;

  VAR_2->pf_cids += VAR_1->conn_cfg[VAR_3].cid_count;
  VAR_2->per_vf_cids += VAR_1->conn_cfg[VAR_3].cids_per_vf;
 }


 VAR_2->pf_cids += VAR_1->arfs_count;
}
