
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rx_queue_start_ramrod_data {int complete_event_flg; int vf_rx_prod_use_zone_a; int vf_rx_prod_index; int cqe_pbl_addr; void* num_of_pbl_pages; int bd_base; void* bd_max_bytes; scalar_t__ complete_cqe_flg; void* rx_queue_id; int stats_counter_id; int vport_id; int sb_index; void* sb_id; } ;
struct TYPE_3__ {struct rx_queue_start_ramrod_data rx_queue_start; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_4__ {int queue_id; int stats_id; int vport_id; } ;
struct qed_queue_cid {scalar_t__ vfid; int vf_legacy; int vf_qid; TYPE_2__ abs; int sb_idx; int sb_igu_id; int opaque_fid; int cid; } ;
struct qed_hwfn {int dummy; } ;
typedef int init_data ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_6(struct qed_hwfn *VAR_7,
        struct qed_queue_cid *VAR_8,
        u16 VAR_9,
        dma_addr_t VAR_10,
        dma_addr_t VAR_11, u16 VAR_12)
{
 struct rx_queue_start_ramrod_data *VAR_13 = ((void*)0);
 struct qed_spq_entry *VAR_14 = ((void*)0);
 struct qed_sp_init_data VAR_15;
 int VAR_16 = -VAR_0;

 FUNC_1(VAR_7, VAR_3,
     "opaque_fid=0x%x, cid=0x%x, rx_qzone=0x%x, vport_id=0x%x, sb_id=0x%x\n",
     VAR_8->opaque_fid, VAR_8->cid,
     VAR_8->abs.queue_id, VAR_8->abs.vport_id, VAR_8->sb_igu_id);


 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.cid = VAR_8->cid;
 VAR_15.opaque_fid = VAR_8->opaque_fid;
 VAR_15.comp_mode = VAR_6;

 VAR_16 = FUNC_4(VAR_7, &VAR_14,
     VAR_1,
     VAR_2, &VAR_15);
 if (VAR_16)
  return VAR_16;

 VAR_13 = &VAR_14->ramrod.rx_queue_start;

 VAR_13->sb_id = FUNC_2(VAR_8->sb_igu_id);
 VAR_13->sb_index = VAR_8->sb_idx;
 VAR_13->vport_id = VAR_8->abs.vport_id;
 VAR_13->stats_counter_id = VAR_8->abs.stats_id;
 VAR_13->rx_queue_id = FUNC_2(VAR_8->abs.queue_id);
 VAR_13->complete_cqe_flg = 0;
 VAR_13->complete_event_flg = 1;

 VAR_13->bd_max_bytes = FUNC_2(VAR_9);
 FUNC_0(VAR_13->bd_base, VAR_10);

 VAR_13->num_of_pbl_pages = FUNC_2(VAR_12);
 FUNC_0(VAR_13->cqe_pbl_addr, VAR_11);

 if (VAR_8->vfid != VAR_5) {
  bool VAR_17 = !!(VAR_8->vf_legacy &
          VAR_4);

  VAR_13->vf_rx_prod_index = VAR_8->vf_qid;
  FUNC_1(VAR_7, VAR_3,
      "Queue%s is meant for VF rxq[%02x]\n",
      VAR_17 ? " [legacy]" : "", VAR_8->vf_qid);
  VAR_13->vf_rx_prod_use_zone_a = VAR_17;
 }

 return FUNC_5(VAR_7, VAR_14, ((void*)0));
}
