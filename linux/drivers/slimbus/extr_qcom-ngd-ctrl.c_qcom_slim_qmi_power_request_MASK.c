
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slimbus_power_req_msg_v01 {scalar_t__ resp_type_valid; int pm_req; } ;
struct qcom_slim_ngd_ctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qcom_slim_ngd_ctrl*,struct slimbus_power_req_msg_v01*) ;

__attribute__((used)) static int FUNC_1(struct qcom_slim_ngd_ctrl *VAR_2,
           bool VAR_3)
{
 struct slimbus_power_req_msg_v01 VAR_4;

 if (VAR_3)
  VAR_4.pm_req = VAR_0;
 else
  VAR_4.pm_req = VAR_1;

 VAR_4.resp_type_valid = 0;

 return FUNC_0(VAR_2, &VAR_4);
}
