
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ result; int error; } ;
struct wlfw_cal_report_resp_msg_v01 {TYPE_2__ resp; } ;
struct wlfw_cal_report_req_msg_v01 {int meta_data_len; int * meta_data; } ;
struct qmi_txn {int dummy; } ;
struct ath10k_qmi {int qmi_hdl; TYPE_1__* cal_data; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;
struct TYPE_3__ {int cal_id; scalar_t__ data; scalar_t__ total_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int *,int *,struct qmi_txn*,int ,int ,int ,struct wlfw_cal_report_req_msg_v01*) ;
 int FUNC_3 (struct qmi_txn*) ;
 int FUNC_4 (int *,struct qmi_txn*,int ,struct wlfw_cal_report_resp_msg_v01*) ;
 int FUNC_5 (struct qmi_txn*,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct ath10k_qmi *VAR_10)
{
 struct wlfw_cal_report_resp_msg_v01 VAR_11 = {};
 struct wlfw_cal_report_req_msg_v01 VAR_12 = {};
 struct ath10k *VAR_13 = VAR_10->ar;
 struct qmi_txn VAR_14;
 int VAR_15, VAR_16 = 0;
 int VAR_17;

 VAR_17 = FUNC_4(&VAR_10->qmi_hdl, &VAR_14, VAR_9,
      &VAR_11);
 if (VAR_17 < 0)
  goto out;

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  if (VAR_10->cal_data[VAR_15].total_size &&
      VAR_10->cal_data[VAR_15].data) {
   VAR_12.meta_data[VAR_16] = VAR_10->cal_data[VAR_15].cal_id;
   VAR_16++;
  }
 }
 VAR_12.meta_data_len = VAR_16;

 VAR_17 = FUNC_2(&VAR_10->qmi_hdl, ((void*)0), &VAR_14,
          VAR_5,
          VAR_7,
          VAR_8, &VAR_12);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_14);
  FUNC_1(VAR_13, "failed to send calibration request: %d\n", VAR_17);
  goto out;
 }

 VAR_17 = FUNC_5(&VAR_14, VAR_1 * VAR_3);
 if (VAR_17 < 0)
  goto out;

 if (VAR_11.resp.result != VAR_4) {
  FUNC_1(VAR_13, "calibration request rejected: %d\n", VAR_11.resp.error);
  VAR_17 = -VAR_2;
  goto out;
 }

 FUNC_0(VAR_13, VAR_0, "qmi cal report request completed\n");
 return 0;

out:
 return VAR_17;
}
