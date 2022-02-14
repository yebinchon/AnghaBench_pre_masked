
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fc_bsg_request {int msgcode; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; } ;
struct bsg_job {struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;


 int VAR_0 ;



 int FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct bsg_job*) ;

int
FUNC_3(struct bsg_job *VAR_1)
{
 struct fc_bsg_request *VAR_2 = VAR_1->request;
 struct fc_bsg_reply *VAR_3 = VAR_1->reply;
 uint32_t VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->msgcode;
 switch (VAR_4) {
 case 130:
  VAR_5 = FUNC_0(VAR_1);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_1);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_1);
  break;
 default:
  VAR_5 = -VAR_0;
  VAR_3->reply_payload_rcv_len = 0;

  VAR_3->result = VAR_5;
  break;
 }

 return VAR_5;
}
