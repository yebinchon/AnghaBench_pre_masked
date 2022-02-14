
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; } ;
struct ap_queue {int qid; } ;
struct ap_qirq_ctrl {int ir; int isc; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ap_queue_status FUNC_2 (int ,struct ap_qirq_ctrl,void*) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ap_queue *VAR_3, void *VAR_4)
{
 struct ap_queue_status VAR_5;
 struct ap_qirq_ctrl VAR_6 = { 0 };

 VAR_6.ir = 1;
 VAR_6.isc = VAR_0;
 VAR_5 = FUNC_2(VAR_3->qid, VAR_6, VAR_4);
 switch (VAR_5.response_code) {
 case 131:
 case 130:
  return 0;
 case 129:
 case 133:
 case 134:
 case 132:
  FUNC_3("Registering adapter interrupts for AP device %02x.%04x failed\n",
         FUNC_0(VAR_3->qid),
         FUNC_1(VAR_3->qid));
  return -VAR_2;
 case 128:
 case 135:
 default:
  return -VAR_1;
 }
}
