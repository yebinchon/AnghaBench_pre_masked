
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct core_rx_stop_ramrod_data {int complete_event_flg; int queue_id; } ;
struct TYPE_4__ {struct core_rx_stop_ramrod_data core_rx_queue_stop; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct qed_ll2_info {int queue_id; int cid; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_4,
        struct qed_ll2_info *VAR_5)
{
 struct core_rx_stop_ramrod_data *VAR_6 = ((void*)0);
 struct qed_spq_entry *VAR_7 = ((void*)0);
 struct qed_sp_init_data VAR_8;
 int VAR_9 = -VAR_1;


 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cid = VAR_5->cid;
 VAR_8.opaque_fid = VAR_4->hw_info.opaque_fid;
 VAR_8.comp_mode = VAR_3;

 VAR_9 = FUNC_1(VAR_4, &VAR_7,
     VAR_0,
     VAR_2, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6 = &VAR_7->ramrod.core_rx_queue_stop;

 VAR_6->complete_event_flg = 1;
 VAR_6->queue_id = VAR_5->queue_id;

 return FUNC_2(VAR_4, VAR_7, ((void*)0));
}
