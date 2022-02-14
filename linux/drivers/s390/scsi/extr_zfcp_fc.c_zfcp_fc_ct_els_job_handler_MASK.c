
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_fsf_ct_els {scalar_t__ status; } ;
struct TYPE_6__ {int status; } ;
struct TYPE_5__ {TYPE_3__ ctels_reply; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; TYPE_2__ reply_data; } ;
struct TYPE_4__ {int payload_len; } ;
struct bsg_job {TYPE_1__ reply_payload; struct fc_bsg_reply* reply; struct zfcp_fsf_ct_els* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bsg_job*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
 struct bsg_job *VAR_3 = VAR_2;
 struct zfcp_fsf_ct_els *VAR_4 = VAR_3->dd_data;
 struct fc_bsg_reply *VAR_5 = VAR_3->reply;

 VAR_5->reply_payload_rcv_len = VAR_3->reply_payload.payload_len;
 VAR_5->reply_data.ctels_reply.status = VAR_1;
 VAR_5->result = VAR_4->status ? -VAR_0 : 0;
 FUNC_0(VAR_3, VAR_5->result, VAR_5->reply_payload_rcv_len);
}
