
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct fc_internal {TYPE_6__* f; } ;
struct TYPE_9__ {long vendor_id; } ;
struct TYPE_10__ {TYPE_3__ h_vendor; } ;
struct fc_bsg_request {int msgcode; TYPE_4__ rqst_data; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct fc_bsg_host_vendor {int dummy; } ;
struct fc_bsg_host_els {int dummy; } ;
struct fc_bsg_host_del_rport {int dummy; } ;
struct fc_bsg_host_ct {int dummy; } ;
struct fc_bsg_host_add_rport {int dummy; } ;
struct TYPE_8__ {int payload_len; } ;
struct TYPE_7__ {int payload_len; } ;
struct bsg_job {int request_len; int reply_len; TYPE_2__ reply_payload; TYPE_1__ request_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {TYPE_5__* hostt; int transportt; } ;
struct TYPE_12__ {int (* bsg_request ) (struct bsg_job*) ;} ;
struct TYPE_11__ {long vendor_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_1 (struct bsg_job*,int,scalar_t__) ;
 int FUNC_2 (struct bsg_job*) ;
 struct fc_internal* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_4, struct bsg_job *VAR_5)
{
 struct fc_internal *VAR_6 = FUNC_3(VAR_4->transportt);
 struct fc_bsg_request *VAR_7 = VAR_5->request;
 struct fc_bsg_reply *VAR_8 = VAR_5->reply;
 int VAR_9 = sizeof(uint32_t);
 int VAR_10;


 if (VAR_5->request_len < VAR_9) {
  VAR_10 = -VAR_2;
  goto fail_host_msg;
 }


 switch (VAR_7->msgcode) {
 case 132:
  VAR_9 += sizeof(struct fc_bsg_host_add_rport);
  break;

 case 130:
  VAR_9 += sizeof(struct fc_bsg_host_del_rport);
  break;

 case 129:
  VAR_9 += sizeof(struct fc_bsg_host_els);

  if ((!VAR_5->request_payload.payload_len) ||
      (!VAR_5->reply_payload.payload_len)) {
   VAR_10 = -VAR_1;
   goto fail_host_msg;
  }
  break;

 case 131:
  VAR_9 += sizeof(struct fc_bsg_host_ct);

  if ((!VAR_5->request_payload.payload_len) ||
      (!VAR_5->reply_payload.payload_len)) {
   VAR_10 = -VAR_1;
   goto fail_host_msg;
  }
  break;

 case 128:
  VAR_9 += sizeof(struct fc_bsg_host_vendor);
  if ((VAR_4->hostt->vendor_id == 0L) ||
      (VAR_7->rqst_data.h_vendor.vendor_id !=
   VAR_4->hostt->vendor_id)) {
   VAR_10 = -VAR_3;
   goto fail_host_msg;
  }
  break;

 default:
  VAR_10 = -VAR_0;
  goto fail_host_msg;
 }

 VAR_10 = VAR_6->f->bsg_request(VAR_5);
 if (!VAR_10)
  return 0;

fail_host_msg:

 FUNC_0(VAR_5->reply_len < sizeof(uint32_t));
 VAR_8->reply_payload_rcv_len = 0;
 VAR_8->result = VAR_10;
 VAR_5->reply_len = sizeof(uint32_t);
 FUNC_1(VAR_5, VAR_8->result,
         VAR_8->reply_payload_rcv_len);
 return 0;
}
