
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* vendor_cmd; } ;
struct TYPE_4__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; } ;
struct bsg_job {struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;


 int VAR_0 ;
 int FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct bsg_job*) ;
 int FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (struct bsg_job*) ;
 int FUNC_5 (struct bsg_job*) ;
 int FUNC_6 (struct bsg_job*) ;
 int FUNC_7 (struct bsg_job*) ;
 int FUNC_8 (struct bsg_job*) ;
 int FUNC_9 (struct bsg_job*) ;
 int FUNC_10 (struct bsg_job*) ;
 int FUNC_11 (struct bsg_job*) ;
 int FUNC_12 (struct bsg_job*) ;
 int FUNC_13 (struct bsg_job*) ;
 int FUNC_14 (struct bsg_job*) ;
 int FUNC_15 (struct bsg_job*) ;

__attribute__((used)) static int
FUNC_16(struct bsg_job *VAR_1)
{
 struct fc_bsg_request *VAR_2 = VAR_1->request;
 struct fc_bsg_reply *VAR_3 = VAR_1->reply;
 int VAR_4 = VAR_2->rqst_data.h_vendor.vendor_cmd[0];
 int VAR_5;

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_7(VAR_1);
  break;
 case 140:
  VAR_5 = FUNC_6(VAR_1);
  break;
 case 129:
  VAR_5 = FUNC_9(VAR_1);
  break;
 case 144:
  VAR_5 = FUNC_0(VAR_1);
  break;
 case 143:
  VAR_5 = FUNC_14(VAR_1);
  break;
 case 142:
  VAR_5 = FUNC_1(VAR_1);
  break;
 case 137:
  VAR_5 = FUNC_15(VAR_1);
  break;
 case 139:
  VAR_5 = FUNC_2(VAR_1);
  break;
 case 136:
  VAR_5 = FUNC_8(VAR_1);
  break;
 case 135:
 case 134:
  VAR_5 = FUNC_13(VAR_1);
  break;
 case 141:
  VAR_5 = FUNC_11(VAR_1);
  break;
 case 131:
  VAR_5 = FUNC_5(VAR_1);
  break;
 case 132:
  VAR_5 = FUNC_4(VAR_1);
  break;
 case 133:
  VAR_5 = FUNC_3(VAR_1);
  break;
 case 130:
  VAR_5 = FUNC_10(VAR_1);
  break;
 case 138:
  VAR_5 = FUNC_12(VAR_1);
  break;
 default:
  VAR_5 = -VAR_0;
  VAR_3->reply_payload_rcv_len = 0;

  VAR_3->result = VAR_5;
  break;
 }

 return VAR_5;
}
