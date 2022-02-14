
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ result; int error; } ;
struct wlfw_ind_register_resp_msg_v01 {int fw_status; scalar_t__ fw_status_valid; TYPE_1__ resp; } ;
struct wlfw_ind_register_req_msg_v01 {int client_id_valid; int fw_ready_enable_valid; int fw_ready_enable; int msa_ready_enable_valid; int msa_ready_enable; int client_id; } ;
struct qmi_txn {int dummy; } ;
struct ath10k_qmi {int fw_ready; int qmi_hdl; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int *,int *,struct qmi_txn*,int ,int ,int ,struct wlfw_ind_register_req_msg_v01*) ;
 int FUNC_3 (struct qmi_txn*) ;
 int FUNC_4 (int *,struct qmi_txn*,int ,struct wlfw_ind_register_resp_msg_v01*) ;
 int FUNC_5 (struct qmi_txn*,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_6(struct ath10k_qmi *VAR_11)
{
 struct wlfw_ind_register_resp_msg_v01 VAR_12 = {};
 struct wlfw_ind_register_req_msg_v01 VAR_13 = {};
 struct ath10k *VAR_14 = VAR_11->ar;
 struct qmi_txn VAR_15;
 int VAR_16;

 VAR_13.client_id_valid = 1;
 VAR_13.client_id = VAR_1;
 VAR_13.fw_ready_enable_valid = 1;
 VAR_13.fw_ready_enable = 1;
 VAR_13.msa_ready_enable_valid = 1;
 VAR_13.msa_ready_enable = 1;

 VAR_16 = FUNC_4(&VAR_11->qmi_hdl, &VAR_15,
      VAR_10, &VAR_12);
 if (VAR_16 < 0)
  goto out;

 VAR_16 = FUNC_2(&VAR_11->qmi_hdl, ((void*)0), &VAR_15,
          VAR_7,
          VAR_8,
          VAR_9, &VAR_13);
 if (VAR_16 < 0) {
  FUNC_3(&VAR_15);
  FUNC_1(VAR_14, "failed to send indication registered request: %d\n", VAR_16);
  goto out;
 }

 VAR_16 = FUNC_5(&VAR_15, VAR_2 * VAR_4);
 if (VAR_16 < 0)
  goto out;

 if (VAR_12.resp.result != VAR_5) {
  FUNC_1(VAR_14, "indication request rejected: %d\n", VAR_12.resp.error);
  VAR_16 = -VAR_3;
  goto out;
 }

 if (VAR_12.fw_status_valid) {
  if (VAR_12.fw_status & VAR_6)
   VAR_11->fw_ready = 1;
 }
 FUNC_0(VAR_14, VAR_0, "qmi indication register request completed\n");
 return 0;

out:
 return VAR_16;
}
