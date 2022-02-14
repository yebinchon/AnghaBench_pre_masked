
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int userid ;
struct qeth_card {int dummy; } ;
struct diag26c_vnic_resp {int resp_buf_len; scalar_t__ resp_version; scalar_t__ version; scalar_t__ protocol; int devno; int sys_name; int req_format; } ;
struct diag26c_vnic_req {int resp_buf_len; scalar_t__ resp_version; scalar_t__ version; scalar_t__ protocol; int devno; int sys_name; int req_format; } ;
struct ccw_dev_id {int devno; } ;
typedef enum qeth_discipline_id { ____Placeholder_qeth_discipline_id } qeth_discipline_id ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (struct qeth_card*,int,char*,int) ;
 int FUNC_4 (int ,int,struct diag26c_vnic_resp*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int ,struct ccw_dev_id*) ;
 int FUNC_6 (char*,char*,int,int*) ;
 int FUNC_7 (struct diag26c_vnic_resp*,struct diag26c_vnic_resp*,int ) ;
 int FUNC_8 (struct diag26c_vnic_resp*) ;
 struct diag26c_vnic_resp* FUNC_9 (int,int) ;
 int FUNC_10 (int *,char*,int) ;

__attribute__((used)) static enum qeth_discipline_id FUNC_11(struct qeth_card *VAR_13)
{
 enum qeth_discipline_id VAR_14 = VAR_10;
 struct diag26c_vnic_resp *VAR_15 = ((void*)0);
 struct diag26c_vnic_req *VAR_16 = ((void*)0);
 struct ccw_dev_id VAR_17;
 char VAR_18[80];
 int VAR_19 = 0;

 FUNC_2(VAR_13, 2, "vmlayer");

 FUNC_6("QUERY USERID", VAR_18, sizeof(VAR_18), &VAR_19);
 if (VAR_19)
  goto out;

 VAR_16 = FUNC_9(sizeof(*VAR_16), VAR_7 | VAR_6);
 VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_7 | VAR_6);
 if (!VAR_16 || !VAR_15) {
  VAR_19 = -VAR_5;
  goto out;
 }

 FUNC_5(FUNC_1(VAR_13), &VAR_17);
 VAR_16->resp_buf_len = sizeof(*VAR_15);
 VAR_16->resp_version = VAR_2;
 VAR_16->req_format = VAR_3;
 FUNC_0(VAR_18, 8);
 FUNC_10(&VAR_16->sys_name, VAR_18, 8);
 VAR_16->devno = VAR_17.devno;

 FUNC_4(VAR_0, 2, VAR_16, sizeof(*VAR_16));
 VAR_19 = FUNC_7(VAR_16, VAR_15, VAR_1);
 FUNC_4(VAR_0, 2, VAR_16, sizeof(*VAR_16));
 if (VAR_19)
  goto out;
 FUNC_4(VAR_0, 2, VAR_15, sizeof(*VAR_15));

 if (VAR_16->resp_buf_len < sizeof(*VAR_15) ||
     VAR_15->version != VAR_16->resp_version) {
  VAR_19 = -VAR_4;
  goto out;
 }

 if (VAR_15->protocol == VAR_11)
  VAR_14 = VAR_8;
 else if (VAR_15->protocol == VAR_12)
  VAR_14 = VAR_9;

out:
 FUNC_8(VAR_15);
 FUNC_8(VAR_16);
 if (VAR_19)
  FUNC_3(VAR_13, 2, "err%x", VAR_19);
 return VAR_14;
}
