
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int result; } ;
struct TYPE_4__ {int member_1; int member_0; } ;
struct slimbus_select_inst_resp_msg_v01 {TYPE_3__ resp; TYPE_1__ member_0; } ;
struct slimbus_select_inst_req_msg_v01 {int dummy; } ;
struct qmi_txn {int dummy; } ;
struct TYPE_5__ {int handle; } ;
struct qcom_slim_ngd_ctrl {int dev; TYPE_2__ qmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,struct qmi_txn*,int ,int ,int ,struct slimbus_select_inst_req_msg_v01*) ;
 int FUNC_2 (struct qmi_txn*) ;
 int FUNC_3 (int ,struct qmi_txn*,int ,struct slimbus_select_inst_resp_msg_v01*) ;
 int FUNC_4 (struct qmi_txn*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct qcom_slim_ngd_ctrl *VAR_7,
    struct slimbus_select_inst_req_msg_v01 *VAR_8)
{
 struct slimbus_select_inst_resp_msg_v01 VAR_9 = { { 0, 0 } };
 struct qmi_txn VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7->qmi.handle, &VAR_10,
    VAR_6, &VAR_9);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7->dev, "QMI TXN init fail: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_7->qmi.handle, ((void*)0), &VAR_10,
    VAR_4,
    VAR_3,
    VAR_5, VAR_8);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7->dev, "QMI send req fail %d\n", VAR_11);
  FUNC_2(&VAR_10);
  return VAR_11;
 }

 VAR_11 = FUNC_4(&VAR_10, VAR_2);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7->dev, "QMI TXN wait fail: %d\n", VAR_11);
  return VAR_11;
 }

 if (VAR_9.resp.result != VAR_1) {
  FUNC_0(VAR_7->dev, "QMI request failed 0x%x\n",
   VAR_9.resp.result);
  return -VAR_0;
 }

 return 0;
}
