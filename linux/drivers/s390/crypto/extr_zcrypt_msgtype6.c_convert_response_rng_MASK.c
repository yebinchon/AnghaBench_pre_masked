
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zcrypt_queue {TYPE_2__* queue; int online; } ;
struct TYPE_6__ {int type; int reply_code; } ;
struct TYPE_4__ {int cprb_ver_id; } ;
struct type86x_reply {TYPE_3__ hdr; TYPE_1__ cprbx; } ;
struct ap_message {struct type86x_reply* message; } ;
struct TYPE_5__ {int qid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_2 (int ,char*,int ,int ,int) ;
 int FUNC_3 (struct zcrypt_queue*,struct ap_message*,char*) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct zcrypt_queue *VAR_3,
     struct ap_message *VAR_4,
     char *VAR_5)
{
 struct type86x_reply *VAR_6 = VAR_4->message;

 switch (VAR_6->hdr.type) {
 case 130:
 case 128:
  return -VAR_2;
 case 129:
  if (VAR_6->hdr.reply_code)
   return -VAR_2;
  if (VAR_6->cprbx.cprb_ver_id == 0x02)
   return FUNC_3(VAR_3, VAR_4, VAR_5);

 default:
  VAR_3->online = 0;
  FUNC_4("Cryptographic device %02x.%04x failed and was set offline\n",
         FUNC_0(VAR_3->queue->qid),
         FUNC_1(VAR_3->queue->qid));
  FUNC_2(VAR_0,
      "device=%02x.%04x rtype=0x%02x => online=0 rc=EAGAIN\n",
      FUNC_0(VAR_3->queue->qid),
      FUNC_1(VAR_3->queue->qid),
      (int) VAR_6->hdr.type);
  return -VAR_1;
 }
}
