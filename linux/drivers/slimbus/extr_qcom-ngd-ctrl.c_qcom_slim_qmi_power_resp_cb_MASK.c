
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_qrtr {int dummy; } ;
struct TYPE_2__ {scalar_t__ result; } ;
struct slimbus_power_resp_msg_v01 {TYPE_1__ resp; } ;
struct qmi_txn {int completion; } ;
struct qmi_handle {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct qmi_handle *VAR_1,
     struct sockaddr_qrtr *VAR_2,
     struct qmi_txn *VAR_3, const void *VAR_4)
{
 struct slimbus_power_resp_msg_v01 *VAR_5;

 VAR_5 = (struct slimbus_power_resp_msg_v01 *)VAR_4;
 if (VAR_5->resp.result != VAR_0)
  FUNC_1("QMI power request failed 0x%x\n",
    VAR_5->resp.result);

 FUNC_0(&VAR_3->completion);
}
