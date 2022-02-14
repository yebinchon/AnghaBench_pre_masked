
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fc_bsg_request {int msgcode; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; } ;
struct bsg_job {struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (struct bsg_job*) ;

int
FUNC_2(struct bsg_job *VAR_2)
{
 struct fc_bsg_request *VAR_3 = VAR_2->request;
 struct fc_bsg_reply *VAR_4 = VAR_2->reply;
 uint32_t VAR_5 = VAR_0;

 switch (VAR_3->msgcode) {
 case 130:

  VAR_5 = FUNC_1(VAR_2);
  break;
 case 131:
 case 128:
 case 132:
 case 129:

  VAR_5 = FUNC_0(VAR_2);
  break;
 default:
  VAR_4->result = VAR_5 = -VAR_1;
  VAR_4->reply_payload_rcv_len = 0;
  break;
 }

 return VAR_5;
}
