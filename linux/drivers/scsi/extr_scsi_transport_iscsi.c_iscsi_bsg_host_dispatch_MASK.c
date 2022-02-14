
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct iscsi_internal {TYPE_4__* iscsi_transport; } ;
struct TYPE_5__ {long vendor_id; } ;
struct TYPE_6__ {TYPE_1__ h_vendor; } ;
struct iscsi_bsg_request {int msgcode; TYPE_2__ rqst_data; } ;
struct iscsi_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct iscsi_bsg_host_vendor {int dummy; } ;
struct bsg_job {int request_len; int reply_len; struct iscsi_bsg_reply* reply; struct iscsi_bsg_request* request; } ;
struct Scsi_Host {TYPE_3__* hostt; int transportt; } ;
struct TYPE_8__ {int (* bsg_request ) (struct bsg_job*) ;} ;
struct TYPE_7__ {long vendor_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (struct bsg_job*,int,int ) ;
 struct Scsi_Host* FUNC_2 (struct bsg_job*) ;
 int FUNC_3 (struct bsg_job*) ;
 struct iscsi_internal* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bsg_job *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_2(VAR_3);
 struct iscsi_bsg_request *VAR_5 = VAR_3->request;
 struct iscsi_bsg_reply *VAR_6 = VAR_3->reply;
 struct iscsi_internal *VAR_7 = FUNC_4(VAR_4->transportt);
 int VAR_8 = sizeof(uint32_t);
 int VAR_9;


 if (VAR_3->request_len < sizeof(uint32_t)) {
  VAR_9 = -VAR_1;
  goto fail_host_msg;
 }


 switch (VAR_5->msgcode) {
 case 128:
  VAR_8 += sizeof(struct iscsi_bsg_host_vendor);
  if ((VAR_4->hostt->vendor_id == 0L) ||
      (VAR_5->rqst_data.h_vendor.vendor_id !=
   VAR_4->hostt->vendor_id)) {
   VAR_9 = -VAR_2;
   goto fail_host_msg;
  }
  break;
 default:
  VAR_9 = -VAR_0;
  goto fail_host_msg;
 }


 if (VAR_3->request_len < VAR_8) {
  VAR_9 = -VAR_1;
  goto fail_host_msg;
 }

 VAR_9 = VAR_7->iscsi_transport->bsg_request(VAR_3);
 if (!VAR_9)
  return 0;

fail_host_msg:

 FUNC_0(VAR_3->reply_len < sizeof(uint32_t));
 VAR_6->reply_payload_rcv_len = 0;
 VAR_6->result = VAR_9;
 VAR_3->reply_len = sizeof(uint32_t);
 FUNC_1(VAR_3, VAR_9, 0);
 return 0;
}
