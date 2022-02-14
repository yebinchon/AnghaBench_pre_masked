
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_tid_seg {scalar_t__ count; } ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {TYPE_1__* conn_cfg; } ;
struct TYPE_2__ {struct qed_tid_seg* tid_seg; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct qed_tid_seg *FUNC_0(struct qed_hwfn *VAR_1,
      u32 VAR_2)
{
 struct qed_cxt_mngr *VAR_3 = VAR_1->p_cxt_mngr;
 u32 VAR_4;




 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->conn_cfg[VAR_4].tid_seg[VAR_2].count)
   return &VAR_3->conn_cfg[VAR_4].tid_seg[VAR_2];
 return ((void*)0);
}
