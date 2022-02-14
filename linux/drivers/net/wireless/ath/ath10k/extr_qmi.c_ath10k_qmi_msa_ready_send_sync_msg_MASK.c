
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ result; int error; } ;
struct wlfw_msa_ready_resp_msg_v01 {TYPE_1__ resp; } ;
struct wlfw_msa_ready_req_msg_v01 {int dummy; } ;
struct qmi_txn {int dummy; } ;
struct ath10k_qmi {int qmi_hdl; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int *,int *,struct qmi_txn*,int ,int ,int ,struct wlfw_msa_ready_req_msg_v01*) ;
 int FUNC_3 (struct qmi_txn*) ;
 int FUNC_4 (int *,struct qmi_txn*,int ,struct wlfw_msa_ready_resp_msg_v01*) ;
 int FUNC_5 (struct qmi_txn*,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct ath10k_qmi *VAR_9)
{
 struct wlfw_msa_ready_resp_msg_v01 VAR_10 = {};
 struct wlfw_msa_ready_req_msg_v01 VAR_11 = {};
 struct ath10k *VAR_12 = VAR_9->ar;
 struct qmi_txn VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(&VAR_9->qmi_hdl, &VAR_13,
      VAR_8, &VAR_10);
 if (VAR_14 < 0)
  goto out;

 VAR_14 = FUNC_2(&VAR_9->qmi_hdl, ((void*)0), &VAR_13,
          VAR_5,
          VAR_6,
          VAR_7, &VAR_11);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_13);
  FUNC_1(VAR_12, "failed to send msa mem ready request: %d\n", VAR_14);
  goto out;
 }

 VAR_14 = FUNC_5(&VAR_13, VAR_1 * VAR_3);
 if (VAR_14 < 0)
  goto out;

 if (VAR_10.resp.result != VAR_4) {
  FUNC_1(VAR_12, "msa ready request rejected: %d\n", VAR_10.resp.error);
  VAR_14 = -VAR_2;
 }

 FUNC_0(VAR_12, VAR_0, "qmi msa mem ready request completed\n");
 return 0;

out:
 return VAR_14;
}
