
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct fc_internal {TYPE_3__* f; } ;
struct fc_bsg_rport_els {int dummy; } ;
struct fc_bsg_rport_ct {int dummy; } ;
struct fc_bsg_request {int msgcode; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_5__ {int payload_len; } ;
struct TYPE_4__ {int payload_len; } ;
struct bsg_job {int request_len; int reply_len; TYPE_2__ reply_payload; TYPE_1__ request_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_6__ {int (* bsg_request ) (struct bsg_job*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (struct bsg_job*,int,scalar_t__) ;
 int FUNC_2 (struct bsg_job*) ;
 struct fc_internal* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_3, struct bsg_job *VAR_4)
{
 struct fc_internal *VAR_5 = FUNC_3(VAR_3->transportt);
 struct fc_bsg_request *VAR_6 = VAR_4->request;
 struct fc_bsg_reply *VAR_7 = VAR_4->reply;
 int VAR_8 = sizeof(uint32_t);
 int VAR_9;


 if (VAR_4->request_len < VAR_8) {
  VAR_9 = -VAR_2;
  goto fail_rport_msg;
 }


 switch (VAR_6->msgcode) {
 case 128:
  VAR_8 += sizeof(struct fc_bsg_rport_els);
  goto check_bidi;

 case 129:
  VAR_8 += sizeof(struct fc_bsg_rport_ct);
check_bidi:

  if ((!VAR_4->request_payload.payload_len) ||
      (!VAR_4->reply_payload.payload_len)) {
   VAR_9 = -VAR_1;
   goto fail_rport_msg;
  }
  break;
 default:
  VAR_9 = -VAR_0;
  goto fail_rport_msg;
 }

 VAR_9 = VAR_5->f->bsg_request(VAR_4);
 if (!VAR_9)
  return 0;

fail_rport_msg:

 FUNC_0(VAR_4->reply_len < sizeof(uint32_t));
 VAR_7->reply_payload_rcv_len = 0;
 VAR_7->result = VAR_9;
 VAR_4->reply_len = sizeof(uint32_t);
 FUNC_1(VAR_4, VAR_7->result,
         VAR_7->reply_payload_rcv_len);
 return 0;
}
