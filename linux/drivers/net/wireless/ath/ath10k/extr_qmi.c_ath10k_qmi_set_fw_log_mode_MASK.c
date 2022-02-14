
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ result; int error; } ;
struct wlfw_ini_resp_msg_v01 {TYPE_1__ resp; } ;
struct wlfw_ini_req_msg_v01 {int enablefwlog_valid; int enablefwlog; } ;
struct qmi_txn {int dummy; } ;
struct ath10k_snoc {struct ath10k_qmi* qmi; } ;
struct ath10k_qmi {int qmi_hdl; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 struct ath10k_snoc* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (int *,int *,struct qmi_txn*,int ,int ,int ,struct wlfw_ini_req_msg_v01*) ;
 int FUNC_4 (struct qmi_txn*) ;
 int FUNC_5 (int *,struct qmi_txn*,int ,struct wlfw_ini_resp_msg_v01*) ;
 int FUNC_6 (struct qmi_txn*,int) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_7(struct ath10k *VAR_9, u8 VAR_10)
{
 struct ath10k_snoc *VAR_11 = FUNC_2(VAR_9);
 struct wlfw_ini_resp_msg_v01 VAR_12 = {};
 struct ath10k_qmi *VAR_13 = VAR_11->qmi;
 struct wlfw_ini_req_msg_v01 VAR_14 = {};
 struct qmi_txn VAR_15;
 int VAR_16;

 VAR_14.enablefwlog_valid = 1;
 VAR_14.enablefwlog = VAR_10;

 VAR_16 = FUNC_5(&VAR_13->qmi_hdl, &VAR_15, VAR_8,
      &VAR_12);
 if (VAR_16 < 0)
  goto out;

 VAR_16 = FUNC_3(&VAR_13->qmi_hdl, ((void*)0), &VAR_15,
          VAR_5,
          VAR_6,
          VAR_7, &VAR_14);
 if (VAR_16 < 0) {
  FUNC_4(&VAR_15);
  FUNC_1(VAR_9, "fail to send fw log reqest: %d\n", VAR_16);
  goto out;
 }

 VAR_16 = FUNC_6(&VAR_15, VAR_1 * VAR_3);
 if (VAR_16 < 0)
  goto out;

 if (VAR_12.resp.result != VAR_4) {
  FUNC_1(VAR_9, "fw log request rejectedr: %d\n",
      VAR_12.resp.error);
  VAR_16 = -VAR_2;
  goto out;
 }
 FUNC_0(VAR_9, VAR_0, "qmi fw log request completed, mode: %d\n",
     VAR_10);
 return 0;

out:
 return VAR_16;
}
