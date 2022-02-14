
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tx_queue_start_ramrod_data {void* qm_pq_id; int pbl_base_addr; void* pbl_size; void* same_as_last_id; void* queue_zone_id; int stats_counter_id; int sb_index; void* sb_id; int vport_id; } ;
struct TYPE_3__ {struct tx_queue_start_ramrod_data tx_queue_start; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_4__ {int queue_id; int stats_id; int vport_id; } ;
struct qed_queue_cid {TYPE_2__ abs; int sb_idx; int sb_igu_id; int opaque_fid; int cid; } ;
struct qed_hwfn {int dummy; } ;
typedef int init_data ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int
FUNC_5(struct qed_hwfn *VAR_4,
    struct qed_queue_cid *VAR_5,
    dma_addr_t VAR_6, u16 VAR_7, u16 VAR_8)
{
 struct tx_queue_start_ramrod_data *VAR_9 = ((void*)0);
 struct qed_spq_entry *VAR_10 = ((void*)0);
 struct qed_sp_init_data VAR_11;
 int VAR_12 = -VAR_0;


 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.cid = VAR_5->cid;
 VAR_11.opaque_fid = VAR_5->opaque_fid;
 VAR_11.comp_mode = VAR_3;

 VAR_12 = FUNC_3(VAR_4, &VAR_10,
     VAR_1,
     VAR_2, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_9 = &VAR_10->ramrod.tx_queue_start;
 VAR_9->vport_id = VAR_5->abs.vport_id;

 VAR_9->sb_id = FUNC_1(VAR_5->sb_igu_id);
 VAR_9->sb_index = VAR_5->sb_idx;
 VAR_9->stats_counter_id = VAR_5->abs.stats_id;

 VAR_9->queue_zone_id = FUNC_1(VAR_5->abs.queue_id);
 VAR_9->same_as_last_id = FUNC_1(VAR_5->abs.queue_id);

 VAR_9->pbl_size = FUNC_1(VAR_7);
 FUNC_0(VAR_9->pbl_base_addr, VAR_6);

 VAR_9->qm_pq_id = FUNC_1(VAR_8);

 return FUNC_4(VAR_4, VAR_10, ((void*)0));
}
