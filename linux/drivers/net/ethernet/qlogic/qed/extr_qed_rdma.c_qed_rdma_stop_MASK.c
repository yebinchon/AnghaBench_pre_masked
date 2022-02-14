
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rdma_close_func_ramrod_data {scalar_t__ cnq_start_offset; int num_cnqs; } ;
struct TYPE_5__ {struct rdma_close_func_ramrod_data rdma_close_func; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; } ;
struct qed_ptt {int dummy; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct qed_hwfn {int b_rdma_enabled_in_prs; TYPE_3__* p_rdma_info; TYPE_1__ hw_info; int rdma_prs_search_reg; } ;
typedef int init_data ;
struct TYPE_6__ {int num_cnqs; int proto; scalar_t__ active; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,int ) ;
 int FUNC_3 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*) ;
 struct qed_ptt* FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_8 (struct qed_hwfn*) ;
 int FUNC_9 (struct qed_hwfn*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_13(void *VAR_7)
{
 struct qed_hwfn *VAR_8 = (struct qed_hwfn *)VAR_7;
 struct rdma_close_func_ramrod_data *VAR_9;
 struct qed_sp_init_data VAR_10;
 struct qed_spq_entry *VAR_11;
 struct qed_ptt *VAR_12;
 u32 VAR_13;
 int VAR_14 = -VAR_0;

 FUNC_0(VAR_8, VAR_3, "RDMA stop\n");

 VAR_12 = FUNC_5(VAR_8);
 if (!VAR_12) {
  FUNC_0(VAR_8, VAR_3, "Failed to acquire PTT\n");
  return VAR_14;
 }


 FUNC_12(VAR_8, VAR_12, VAR_8->rdma_prs_search_reg, 0);
 VAR_8->b_rdma_enabled_in_prs = 0;
 VAR_8->p_rdma_info->active = 0;
 FUNC_12(VAR_8, VAR_12, VAR_2, 0);

 VAR_13 = FUNC_7(VAR_8, VAR_12, VAR_1);

 FUNC_12(VAR_8, VAR_12, VAR_1,
        (VAR_13 & 0xFFFE));

 if (FUNC_1(VAR_8)) {
  VAR_14 = FUNC_4(VAR_8);
  if (VAR_14) {
   FUNC_6(VAR_8, VAR_12);
   return VAR_14;
  }
 } else {
  FUNC_9(VAR_8);
 }

 FUNC_6(VAR_8, VAR_12);


 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.opaque_fid = VAR_8->hw_info.opaque_fid;
 VAR_10.comp_mode = VAR_5;


 VAR_14 = FUNC_10(VAR_8, &VAR_11, VAR_6,
     VAR_8->p_rdma_info->proto, &VAR_10);
 if (VAR_14)
  goto out;

 VAR_9 = &VAR_11->ramrod.rdma_close_func;

 VAR_9->num_cnqs = VAR_8->p_rdma_info->num_cnqs;
 VAR_9->cnq_start_offset = (u8)FUNC_2(VAR_8, VAR_4);

 VAR_14 = FUNC_11(VAR_8, VAR_11, ((void*)0));

out:
 FUNC_8(VAR_8);

 FUNC_0(VAR_8, VAR_3, "RDMA stop done, rc = %d\n", VAR_14);
 return VAR_14;
}
