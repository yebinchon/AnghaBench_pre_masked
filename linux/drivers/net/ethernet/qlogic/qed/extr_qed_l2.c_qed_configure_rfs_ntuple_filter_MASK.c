
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;
struct rx_update_gft_filter_data {int rx_qid_valid; int filter_action; scalar_t__ flow_id; scalar_t__ flow_id_valid; void* vport_id; void* rx_qid; void* pkt_hdr_length; int pkt_hdr_addr; } ;
struct TYPE_4__ {struct rx_update_gft_filter_data rx_update_gft; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct qed_ntuple_filter_params {scalar_t__ qid; int length; scalar_t__ addr; scalar_t__ b_is_add; int vport_id; scalar_t__ b_is_drop; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,scalar_t__,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,scalar_t__,int *) ;
 int FUNC_5 (struct qed_hwfn*,int ,scalar_t__*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_8 (struct qed_hwfn*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int
FUNC_10(struct qed_hwfn *VAR_10,
    struct qed_spq_comp_cb *VAR_11,
    struct qed_ntuple_filter_params *VAR_12)
{
 struct rx_update_gft_filter_data *VAR_13 = ((void*)0);
 struct qed_spq_entry *VAR_14 = ((void*)0);
 struct qed_sp_init_data VAR_15;
 u16 VAR_16 = 0;
 u8 VAR_17 = 0;
 int VAR_18 = -VAR_0;


 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.cid = FUNC_8(VAR_10);

 VAR_15.opaque_fid = VAR_10->hw_info.opaque_fid;

 if (VAR_11) {
  VAR_15.comp_mode = VAR_8;
  VAR_15.p_comp_data = VAR_11;
 } else {
  VAR_15.comp_mode = VAR_9;
 }

 VAR_18 = FUNC_7(VAR_10, &VAR_14,
     VAR_2,
     VAR_5, &VAR_15);
 if (VAR_18)
  return VAR_18;

 VAR_13 = &VAR_14->ramrod.rx_update_gft;

 FUNC_0(VAR_13->pkt_hdr_addr, VAR_12->addr);
 VAR_13->pkt_hdr_length = FUNC_2(VAR_12->length);

 if (VAR_12->b_is_drop) {
  VAR_13->vport_id = FUNC_2(VAR_1);
 } else {
  VAR_18 = FUNC_5(VAR_10, VAR_12->vport_id, &VAR_17);
  if (VAR_18)
   goto err;

  if (VAR_12->qid != VAR_7) {
   VAR_18 = FUNC_4(VAR_10, VAR_12->qid,
          &VAR_16);
   if (VAR_18)
    goto err;

   VAR_13->rx_qid_valid = 1;
   VAR_13->rx_qid = FUNC_2(VAR_16);
  }

  VAR_13->vport_id = FUNC_2((u16)VAR_17);
 }

 VAR_13->flow_id_valid = 0;
 VAR_13->flow_id = 0;
 VAR_13->filter_action = VAR_12->b_is_add ? VAR_3
     : VAR_4;

 FUNC_1(VAR_10, VAR_6,
     "V[%0x], Q[%04x] - %s filter from 0x%llx [length %04xb]\n",
     VAR_17, VAR_16,
     VAR_12->b_is_add ? "Adding" : "Removing",
     (u64)VAR_12->addr, VAR_12->length);

 return FUNC_9(VAR_10, VAR_14, ((void*)0));

err:
 FUNC_6(VAR_10, VAR_14);
 return VAR_18;
}
