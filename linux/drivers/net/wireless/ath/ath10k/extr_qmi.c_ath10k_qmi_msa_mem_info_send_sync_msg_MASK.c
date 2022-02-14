
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ result; int error; } ;
struct wlfw_msa_info_resp_msg_v01 {int mem_region_info_len; TYPE_2__* mem_region_info; TYPE_1__ resp; } ;
struct wlfw_msa_info_req_msg_v01 {int size; int msa_addr; } ;
struct qmi_txn {int dummy; } ;
struct ath10k_qmi {int nr_mem_region; TYPE_3__* mem_region; int qmi_hdl; int msa_mem_size; int msa_pa; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;
struct TYPE_6__ {int secure; int size; int addr; } ;
struct TYPE_5__ {int secure_flag; int size; int region_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath10k*,int ,char*,...) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int *,int *,struct qmi_txn*,int ,int ,int ,struct wlfw_msa_info_req_msg_v01*) ;
 int FUNC_3 (struct qmi_txn*) ;
 int FUNC_4 (int *,struct qmi_txn*,int ,struct wlfw_msa_info_resp_msg_v01*) ;
 int FUNC_5 (struct qmi_txn*,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct ath10k_qmi *VAR_10)
{
 struct wlfw_msa_info_resp_msg_v01 VAR_11 = {};
 struct wlfw_msa_info_req_msg_v01 VAR_12 = {};
 struct ath10k *VAR_13 = VAR_10->ar;
 struct qmi_txn VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_12.msa_addr = VAR_10->msa_pa;
 VAR_12.size = VAR_10->msa_mem_size;

 VAR_15 = FUNC_4(&VAR_10->qmi_hdl, &VAR_14,
      VAR_9, &VAR_11);
 if (VAR_15 < 0)
  goto out;

 VAR_15 = FUNC_2(&VAR_10->qmi_hdl, ((void*)0), &VAR_14,
          VAR_6,
          VAR_7,
          VAR_8, &VAR_12);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_14);
  FUNC_1(VAR_13, "failed to send msa mem info req: %d\n", VAR_15);
  goto out;
 }

 VAR_15 = FUNC_5(&VAR_14, VAR_1 * VAR_3);
 if (VAR_15 < 0)
  goto out;

 if (VAR_11.resp.result != VAR_4) {
  FUNC_1(VAR_13, "msa info req rejected: %d\n", VAR_11.resp.error);
  VAR_15 = -VAR_2;
  goto out;
 }

 if (VAR_11.mem_region_info_len > VAR_5) {
  FUNC_1(VAR_13, "invalid memory region length received: %d\n",
      VAR_11.mem_region_info_len);
  VAR_15 = -VAR_2;
  goto out;
 }

 VAR_10->nr_mem_region = VAR_11.mem_region_info_len;
 for (VAR_16 = 0; VAR_16 < VAR_11.mem_region_info_len; VAR_16++) {
  VAR_10->mem_region[VAR_16].addr = VAR_11.mem_region_info[VAR_16].region_addr;
  VAR_10->mem_region[VAR_16].size = VAR_11.mem_region_info[VAR_16].size;
  VAR_10->mem_region[VAR_16].secure = VAR_11.mem_region_info[VAR_16].secure_flag;
  FUNC_0(VAR_13, VAR_0,
      "qmi msa mem region %d addr 0x%pa size 0x%x flag 0x%08x\n",
      VAR_16, &VAR_10->mem_region[VAR_16].addr,
      VAR_10->mem_region[VAR_16].size,
      VAR_10->mem_region[VAR_16].secure);
 }

 FUNC_0(VAR_13, VAR_0, "qmi msa mem info request completed\n");
 return 0;

out:
 return VAR_15;
}
