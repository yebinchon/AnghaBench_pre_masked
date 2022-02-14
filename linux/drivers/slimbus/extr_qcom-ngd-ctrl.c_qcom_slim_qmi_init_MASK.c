
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct slimbus_select_inst_req_msg_v01 {int instance; int mode_valid; int mode; } ;
struct qmi_handle {int sock; } ;
struct TYPE_4__ {struct qmi_handle* handle; int svc_info; } ;
struct qcom_slim_ngd_ctrl {int dev; TYPE_2__ qmi; TYPE_1__* ngd; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,struct qmi_handle*) ;
 struct qmi_handle* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,struct sockaddr*,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct qcom_slim_ngd_ctrl*,struct slimbus_select_inst_req_msg_v01*) ;
 int FUNC_5 (struct qmi_handle*,int ,int *,int ) ;
 int FUNC_6 (struct qmi_handle*) ;

__attribute__((used)) static int FUNC_7(struct qcom_slim_ngd_ctrl *VAR_6,
         bool VAR_7)
{
 struct slimbus_select_inst_req_msg_v01 VAR_8;
 struct qmi_handle *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_6->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_9, VAR_4,
    ((void*)0), VAR_5);
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->dev, "QMI client init failed: %d\n", VAR_10);
  goto qmi_handle_init_failed;
 }

 VAR_10 = FUNC_3(VAR_9->sock,
    (struct sockaddr *)&VAR_6->qmi.svc_info,
    sizeof(VAR_6->qmi.svc_info), 0);
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->dev, "Remote Service connect failed: %d\n", VAR_10);
  goto qmi_connect_to_service_failed;
 }


 VAR_8.instance = (VAR_6->ngd->id >> 1);
 VAR_8.mode_valid = 1;


 if (VAR_7)
  VAR_8.mode = VAR_3;
 else
  VAR_8.mode = VAR_2;

 VAR_6->qmi.handle = VAR_9;

 VAR_10 = FUNC_4(VAR_6, &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_6->dev, "failed to select h/w instance\n");
  goto qmi_select_instance_failed;
 }

 return 0;

qmi_select_instance_failed:
 VAR_6->qmi.handle = ((void*)0);
qmi_connect_to_service_failed:
 FUNC_6(VAR_9);
qmi_handle_init_failed:
 FUNC_1(VAR_6->dev, VAR_9);
 return VAR_10;
}
