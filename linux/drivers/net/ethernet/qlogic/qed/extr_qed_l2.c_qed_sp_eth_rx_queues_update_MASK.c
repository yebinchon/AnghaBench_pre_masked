
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct rx_queue_update_ramrod_data {size_t complete_cqe_flg; size_t complete_event_flg; int rx_queue_id; int vport_id; } ;
struct TYPE_3__ {struct rx_queue_update_ramrod_data rx_queue_update; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; struct qed_spq_comp_cb* p_comp_data; } ;
struct TYPE_4__ {int queue_id; int vport_id; } ;
struct qed_queue_cid {TYPE_2__ abs; int opaque_fid; int cid; } ;
struct qed_hwfn {int dummy; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_4(struct qed_hwfn *VAR_3,
    void **VAR_4,
    u8 VAR_5,
    u8 VAR_6,
    u8 VAR_7,
    enum spq_mode VAR_8,
    struct qed_spq_comp_cb *VAR_9)
{
 struct rx_queue_update_ramrod_data *VAR_10 = ((void*)0);
 struct qed_spq_entry *VAR_11 = ((void*)0);
 struct qed_sp_init_data VAR_12;
 struct qed_queue_cid *VAR_13;
 int VAR_14 = -VAR_0;
 u8 VAR_15;

 FUNC_1(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.comp_mode = VAR_8;
 VAR_12.p_comp_data = VAR_9;

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_13 = ((struct qed_queue_cid **)VAR_4)[VAR_15];


  VAR_12.cid = VAR_13->cid;
  VAR_12.opaque_fid = VAR_13->opaque_fid;

  VAR_14 = FUNC_2(VAR_3, &VAR_11,
      VAR_1,
      VAR_2, &VAR_12);
  if (VAR_14)
   return VAR_14;

  VAR_10 = &VAR_11->ramrod.rx_queue_update;
  VAR_10->vport_id = VAR_13->abs.vport_id;

  VAR_10->rx_queue_id = FUNC_0(VAR_13->abs.queue_id);
  VAR_10->complete_cqe_flg = VAR_6;
  VAR_10->complete_event_flg = VAR_7;

  VAR_14 = FUNC_3(VAR_3, VAR_11, ((void*)0));
  if (VAR_14)
   return VAR_14;
 }

 return VAR_14;
}
