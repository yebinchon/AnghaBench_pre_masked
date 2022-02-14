
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_slow_path_hdr {int flags; int op_code; } ;
struct TYPE_4__ {struct iscsi_slow_path_hdr iscsi_empty; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct qed_iscsi_conn {int layer_code; int icid; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_4,
          struct qed_iscsi_conn *VAR_5,
          enum spq_mode VAR_6,
          struct qed_spq_comp_cb *VAR_7)
{
 struct iscsi_slow_path_hdr *VAR_8 = ((void*)0);
 struct qed_spq_entry *VAR_9 = ((void*)0);
 struct qed_sp_init_data VAR_10;
 int VAR_11 = -VAR_0;


 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = VAR_5->icid;
 VAR_10.opaque_fid = VAR_4->hw_info.opaque_fid;
 VAR_10.comp_mode = VAR_6;
 VAR_10.p_comp_data = VAR_7;

 VAR_11 = FUNC_2(VAR_4, &VAR_9,
     VAR_1,
     VAR_3, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_8 = &VAR_9->ramrod.iscsi_empty;
 VAR_8->op_code = VAR_1;
 FUNC_0(VAR_8->flags,
    VAR_2, VAR_5->layer_code);

 return FUNC_3(VAR_4, VAR_9, ((void*)0));
}
