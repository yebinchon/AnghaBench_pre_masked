
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_slim_ngd_qmi {int svc_event_hdl; } ;
struct qcom_slim_ngd_ctrl {int dev; struct qcom_slim_ngd_qmi qmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct qcom_slim_ngd_ctrl *VAR_4)
{
 struct qcom_slim_ngd_qmi *VAR_5 = &VAR_4->qmi;
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_5->svc_event_hdl, 0,
    &VAR_3, ((void*)0));
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->dev, "qmi_handle_init failed: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_1(&VAR_5->svc_event_hdl, VAR_1,
   VAR_2, VAR_0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->dev, "qmi_add_lookup failed: %d\n", VAR_6);
  FUNC_3(&VAR_5->svc_event_hdl);
 }
 return VAR_6;
}
