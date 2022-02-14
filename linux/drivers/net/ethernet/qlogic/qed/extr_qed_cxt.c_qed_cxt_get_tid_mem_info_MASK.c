
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_tid_seg {size_t type; int has_fl_mem; } ;
struct qed_tid_mem {int tid_size; int num_tids_per_block; scalar_t__ waste; int * blocks; } ;
struct TYPE_8__ {int val; } ;
struct qed_ilt_client_cfg {TYPE_4__ p_size; struct qed_ilt_cli_blk* pf_blks; int active; } ;
struct qed_ilt_cli_blk {int real_size_in_page; size_t start_line; int total_size; } ;
struct TYPE_5__ {int personality; } ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; TYPE_1__ hw_info; } ;
struct qed_cxt_mngr {size_t pf_start_line; int* task_type_size; TYPE_3__* ilt_shadow; TYPE_2__* conn_cfg; struct qed_ilt_client_cfg* clients; } ;
struct TYPE_7__ {int p_virt; } ;
struct TYPE_6__ {struct qed_tid_seg* tid_seg; } ;


 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;



int FUNC_3(struct qed_hwfn *VAR_7,
        struct qed_tid_mem *VAR_8)
{
 struct qed_cxt_mngr *VAR_9 = VAR_7->p_cxt_mngr;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct qed_ilt_client_cfg *VAR_15;
 struct qed_ilt_cli_blk *VAR_16;
 struct qed_tid_seg *VAR_17;


 switch (VAR_7->hw_info.personality) {
 case 129:
  VAR_10 = VAR_3;
  VAR_11 = VAR_5;
  break;
 case 128:
  VAR_10 = VAR_4;
  VAR_11 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = &VAR_9->clients[VAR_1];
 if (!VAR_15->active)
  return -VAR_0;

 VAR_17 = &VAR_9->conn_cfg[VAR_10].tid_seg[VAR_11];
 if (!VAR_17->has_fl_mem)
  return -VAR_0;

 VAR_16 = &VAR_15->pf_blks[FUNC_0(VAR_11, VAR_2)];
 VAR_12 = FUNC_1(VAR_16->total_size,
       VAR_16->real_size_in_page);

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_14 = VAR_13 + VAR_16->start_line -
      VAR_7->p_cxt_mngr->pf_start_line;
  VAR_8->blocks[VAR_13] = VAR_9->ilt_shadow[VAR_14].p_virt;
 }
 VAR_8->waste = FUNC_2(VAR_15->p_size.val) -
     VAR_16->real_size_in_page;
 VAR_8->tid_size = VAR_9->task_type_size[VAR_17->type];
 VAR_8->num_tids_per_block = VAR_16->real_size_in_page /
     VAR_8->tid_size;

 return 0;
}
