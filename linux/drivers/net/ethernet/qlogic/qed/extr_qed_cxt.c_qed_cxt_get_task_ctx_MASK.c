
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct qed_tid_seg {size_t type; int has_fl_mem; } ;
struct qed_ilt_client_cfg {struct qed_ilt_cli_blk* pf_blks; int active; } ;
struct qed_ilt_cli_blk {size_t real_size_in_page; size_t start_line; int total_size; } ;
struct TYPE_4__ {int personality; } ;
struct qed_hwfn {TYPE_1__ hw_info; struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {size_t* task_type_size; size_t pf_start_line; TYPE_3__* ilt_shadow; TYPE_2__* conn_cfg; struct qed_ilt_client_cfg* clients; } ;
struct TYPE_6__ {scalar_t__ p_virt; } ;
struct TYPE_5__ {struct qed_tid_seg* tid_seg; } ;


 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (int ,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;



int FUNC_3(struct qed_hwfn *VAR_9,
    u32 VAR_10, u8 VAR_11, void **VAR_12)
{
 struct qed_cxt_mngr *VAR_13 = VAR_9->p_cxt_mngr;
 struct qed_ilt_client_cfg *VAR_14;
 struct qed_tid_seg *VAR_15;
 struct qed_ilt_cli_blk *VAR_16;
 u32 VAR_17;
 u32 VAR_18, VAR_19;
 u32 VAR_20;
 u32 VAR_21, VAR_22;


 switch (VAR_9->hw_info.personality) {
 case 129:
  VAR_21 = VAR_3;
  VAR_22 = VAR_7;
  break;
 case 128:
  VAR_21 = VAR_4;
  VAR_22 = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = &VAR_13->clients[VAR_1];
 if (!VAR_14->active)
  return -VAR_0;

 VAR_15 = &VAR_13->conn_cfg[VAR_21].tid_seg[VAR_22];

 if (VAR_11 == VAR_6) {
  VAR_16 = &VAR_14->pf_blks[FUNC_1(VAR_22)];
 } else if (VAR_11 == VAR_5) {
  if (!VAR_15->has_fl_mem)
   return -VAR_0;
  VAR_16 = &VAR_14->pf_blks[FUNC_0(VAR_22, VAR_2)];
 } else {
  return -VAR_0;
 }
 VAR_20 = FUNC_2(VAR_16->total_size, VAR_16->real_size_in_page);
 VAR_18 = VAR_13->task_type_size[VAR_15->type];
 VAR_17 = VAR_16->real_size_in_page / VAR_18;

 if (VAR_20 < VAR_10 / VAR_17)
  return -VAR_0;

 VAR_19 = VAR_10 / VAR_17 + VAR_16->start_line -
    VAR_13->pf_start_line;
 *VAR_12 = (u8 *)VAR_13->ilt_shadow[VAR_19].p_virt +
         (VAR_10 % VAR_17) * VAR_18;

 return 0;
}
