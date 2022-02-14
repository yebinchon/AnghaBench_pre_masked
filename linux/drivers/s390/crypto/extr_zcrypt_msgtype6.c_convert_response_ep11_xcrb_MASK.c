
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
struct type86_ep11_reply {TYPE_3__ hdr; TYPE_1__ cprbx; } ;
struct ep11_urb {int dummy; } ;
struct ap_message {struct type86_ep11_reply* message; } ;
struct TYPE_5__ {int qid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_2 (int ,char*,int ,int ,int) ;
 int FUNC_3 (struct zcrypt_queue*,struct ap_message*) ;
 int FUNC_4 (struct zcrypt_queue*,struct ap_message*,struct ep11_urb*) ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct zcrypt_queue *VAR_2,
 struct ap_message *VAR_3, struct ep11_urb *VAR_4)
{
 struct type86_ep11_reply *VAR_5 = VAR_3->message;

 switch (VAR_5->hdr.type) {
 case 130:
 case 128:
  return FUNC_3(VAR_2, VAR_3);
 case 129:
  if (VAR_5->hdr.reply_code)
   return FUNC_3(VAR_2, VAR_3);
  if (VAR_5->cprbx.cprb_ver_id == 0x04)
   return FUNC_4(VAR_2, VAR_3, VAR_4);

 default:
  VAR_2->online = 0;
  FUNC_5("Cryptographic device %02x.%04x failed and was set offline\n",
         FUNC_0(VAR_2->queue->qid),
         FUNC_1(VAR_2->queue->qid));
  FUNC_2(VAR_0,
      "device=%02x.%04x rtype=0x%02x => online=0 rc=EAGAIN\n",
      FUNC_0(VAR_2->queue->qid),
      FUNC_1(VAR_2->queue->qid),
      (int) VAR_5->hdr.type);
  return -VAR_1;
 }
}
