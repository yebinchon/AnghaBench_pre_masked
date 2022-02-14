
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct qed_tid_seg {int has_fl_mem; size_t type; int count; } ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {TYPE_1__* conn_cfg; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_2__ {struct qed_tid_seg* tid_seg; } ;



__attribute__((used)) static void FUNC_0(struct qed_hwfn *VAR_0,
     enum protocol_type VAR_1,
     u8 VAR_2,
     u8 VAR_3, u32 VAR_4, bool VAR_5)
{
 struct qed_cxt_mngr *VAR_6 = VAR_0->p_cxt_mngr;
 struct qed_tid_seg *VAR_7 = &VAR_6->conn_cfg[VAR_1].tid_seg[VAR_2];

 VAR_7->count = VAR_4;
 VAR_7->has_fl_mem = VAR_5;
 VAR_7->type = VAR_3;
}
