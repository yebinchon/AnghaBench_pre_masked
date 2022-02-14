
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rdma_deregister_tid_ramrod_data {int itid; } ;
struct TYPE_5__ {struct rdma_deregister_tid_ramrod_data rdma_deregister_tid; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; } ;
struct qed_ptt {int dummy; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_3__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
struct TYPE_6__ {int proto; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;
 struct qed_ptt* FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry*,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(void *VAR_8, u32 VAR_9)
{
 struct qed_hwfn *VAR_10 = (struct qed_hwfn *)VAR_8;
 struct rdma_deregister_tid_ramrod_data *VAR_11;
 struct qed_sp_init_data VAR_12;
 struct qed_spq_entry *VAR_13;
 struct qed_ptt *VAR_14;
 u8 VAR_15;
 int VAR_16;

 FUNC_1(VAR_10, VAR_2, "itid = %08x\n", VAR_9);


 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.opaque_fid = VAR_10->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_3;

 VAR_16 = FUNC_7(VAR_10, &VAR_13, VAR_4,
     VAR_10->p_rdma_info->proto, &VAR_12);
 if (VAR_16) {
  FUNC_1(VAR_10, VAR_2, "rc = %d\n", VAR_16);
  return VAR_16;
 }

 VAR_11 = &VAR_13->ramrod.rdma_deregister_tid;
 VAR_11->itid = FUNC_2(VAR_9);

 VAR_16 = FUNC_8(VAR_10, VAR_13, &VAR_15);
 if (VAR_16) {
  FUNC_1(VAR_10, VAR_2, "rc = %d\n", VAR_16);
  return VAR_16;
 }

 if (VAR_15 == VAR_5) {
  FUNC_0(VAR_10, "fw_return_code = %d\n", VAR_15);
  return -VAR_1;
 } else if (VAR_15 == VAR_6) {



  VAR_14 = FUNC_5(VAR_10);
  if (!VAR_14) {
   VAR_16 = -VAR_0;
   FUNC_1(VAR_10, VAR_2,
       "Failed to acquire PTT\n");
   return VAR_16;
  }

  VAR_16 = FUNC_4(VAR_10, VAR_14);
  if (VAR_16) {
   FUNC_6(VAR_10, VAR_14);
   FUNC_1(VAR_10, VAR_2,
       "Drain failed\n");
   return VAR_16;
  }

  FUNC_6(VAR_10, VAR_14);


  VAR_16 = FUNC_7(VAR_10, &VAR_13,
      VAR_4,
      VAR_10->p_rdma_info->proto,
      &VAR_12);
  if (VAR_16) {
   FUNC_1(VAR_10, VAR_2,
       "Failed to init sp-element\n");
   return VAR_16;
  }

  VAR_16 = FUNC_8(VAR_10, VAR_13, &VAR_15);
  if (VAR_16) {
   FUNC_1(VAR_10, VAR_2,
       "Ramrod failed\n");
   return VAR_16;
  }

  if (VAR_15 != VAR_7) {
   FUNC_0(VAR_10, "fw_return_code = %d\n",
      VAR_15);
   return VAR_16;
  }
 }

 FUNC_1(VAR_10, VAR_2, "De-registered TID, rc = %d\n", VAR_16);
 return VAR_16;
}
