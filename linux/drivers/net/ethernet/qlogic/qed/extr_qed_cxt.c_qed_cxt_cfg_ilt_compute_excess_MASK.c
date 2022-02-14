
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_tid_seg {scalar_t__ count; size_t type; } ;
struct TYPE_2__ {int val; } ;
struct qed_ilt_client_cfg {TYPE_1__ p_size; } ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {int* task_type_size; struct qed_ilt_client_cfg* clients; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,int ) ;
 struct qed_tid_seg* FUNC_4 (struct qed_hwfn*,int) ;

u32 FUNC_5(struct qed_hwfn *VAR_3, u32 VAR_4)
{
 struct qed_ilt_client_cfg *VAR_5;
 u32 VAR_6, VAR_7;
 struct qed_cxt_mngr *VAR_8;
 u32 VAR_9, VAR_10;
 struct qed_tid_seg *VAR_11;
 int VAR_12;

 VAR_7 = FUNC_3(VAR_3, VAR_2);
 VAR_6 = VAR_4 - VAR_7;

 if (!VAR_6)
  return 0;

 if (!FUNC_2(VAR_3))
  return 0;

 VAR_8 = VAR_3->p_cxt_mngr;
 VAR_5 = &VAR_8->clients[VAR_0];
 VAR_9 = FUNC_1(VAR_5->p_size.val);

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_11 = FUNC_4(VAR_3, VAR_12);
  if (!VAR_11 || VAR_11->count == 0)
   continue;

  VAR_10 = VAR_8->task_type_size[VAR_11->type];
  if (!VAR_10)
   continue;

  return (VAR_9 / VAR_10) * VAR_6;
 }

 FUNC_0(VAR_3, "failed computing excess ILT lines\n");
 return 0;
}
