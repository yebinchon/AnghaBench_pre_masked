
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* dev; } ;
struct diag26c_mac_resp {int resp_buf_len; scalar_t__ resp_version; scalar_t__ version; int* mac; int devno; int op_code; } ;
struct diag26c_mac_req {int resp_buf_len; scalar_t__ resp_version; scalar_t__ version; int* mac; int devno; int op_code; } ;
struct ccw_dev_id {int devno; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct qeth_card*,int,int*,int) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (int ,int,struct diag26c_mac_resp*,int) ;
 int FUNC_4 (int ,struct ccw_dev_id*) ;
 int FUNC_5 (struct diag26c_mac_resp*,struct diag26c_mac_resp*,int ) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (struct diag26c_mac_resp*) ;
 struct diag26c_mac_resp* FUNC_9 (int,int) ;

int FUNC_10(struct qeth_card *VAR_10)
{
 struct diag26c_mac_resp *VAR_11;
 struct diag26c_mac_req *VAR_12;
 struct ccw_dev_id VAR_13;
 int VAR_14;

 FUNC_2(VAR_10, 2, "vmreqmac");

 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_9 | VAR_8);
 VAR_11 = FUNC_9(sizeof(*VAR_11), VAR_9 | VAR_8);
 if (!VAR_12 || !VAR_11) {
  VAR_14 = -VAR_6;
  goto out;
 }

 FUNC_4(FUNC_0(VAR_10), &VAR_13);
 VAR_12->resp_buf_len = sizeof(*VAR_11);
 VAR_12->resp_version = VAR_3;
 VAR_12->op_code = VAR_1;
 VAR_12->devno = VAR_13.devno;

 FUNC_3(VAR_0, 2, VAR_12, sizeof(*VAR_12));
 VAR_14 = FUNC_5(VAR_12, VAR_11, VAR_2);
 FUNC_3(VAR_0, 2, VAR_12, sizeof(*VAR_12));
 if (VAR_14)
  goto out;
 FUNC_3(VAR_0, 2, VAR_11, sizeof(*VAR_11));

 if (VAR_12->resp_buf_len < sizeof(*VAR_11) ||
     VAR_11->version != VAR_12->resp_version) {
  VAR_14 = -VAR_5;
  FUNC_2(VAR_10, 2, "badresp");
  FUNC_1(VAR_10, 2, &VAR_12->resp_buf_len,
         sizeof(VAR_12->resp_buf_len));
 } else if (!FUNC_7(VAR_11->mac)) {
  VAR_14 = -VAR_4;
  FUNC_2(VAR_10, 2, "badmac");
  FUNC_1(VAR_10, 2, VAR_11->mac, VAR_7);
 } else {
  FUNC_6(VAR_10->dev->dev_addr, VAR_11->mac);
 }

out:
 FUNC_8(VAR_11);
 FUNC_8(VAR_12);
 return VAR_14;
}
