
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_8__ {scalar_t__* vendor_cmd; } ;
struct TYPE_9__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; } ;
struct bsg_job {struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct bsg_job*,int ,int ) ;
 struct Scsi_Host* FUNC_2 (struct bsg_job*) ;
 int FUNC_3 (int ,TYPE_3__*,int,char*) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_3__*,int,char*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_7(struct bsg_job *VAR_6)
{
 struct fc_bsg_request *VAR_7 = VAR_6->request;
 struct Scsi_Host *VAR_8 = FUNC_2(VAR_6);
 struct fc_bsg_reply *VAR_9 = VAR_6->reply;
 scsi_qla_host_t *VAR_10 = FUNC_6(VAR_8);
 struct qla_hw_data *VAR_11 = VAR_10->hw;
 int VAR_12 = 0;
 uint32_t VAR_13;

 if (!FUNC_0(VAR_11)) {
  FUNC_3(VAR_4, VAR_10, 0x702f, "Not 84xx, exiting.\n");
  return -VAR_3;
 }

 VAR_13 = VAR_7->rqst_data.h_vendor.vendor_cmd[1];

 VAR_12 = FUNC_5(VAR_10, VAR_13 == VAR_0);

 if (VAR_12) {
  FUNC_4(VAR_5, VAR_10, 0x7030,
      "Vendor request 84xx reset failed.\n");
  VAR_12 = (VAR_1 << 16);

 } else {
  FUNC_3(VAR_4, VAR_10, 0x7031,
      "Vendor request 84xx reset completed.\n");
  VAR_9->result = VAR_2;
  FUNC_1(VAR_6, VAR_9->result,
          VAR_9->reply_payload_rcv_len);
 }

 return VAR_12;
}
