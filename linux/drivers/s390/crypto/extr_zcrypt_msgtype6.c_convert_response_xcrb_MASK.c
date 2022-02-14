
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct zcrypt_queue {TYPE_3__* queue; int online; } ;
struct TYPE_8__ {int type; int reply_code; } ;
struct TYPE_6__ {int cprb_ver_id; } ;
struct TYPE_5__ {int apfs; } ;
struct type86x_reply {TYPE_4__ hdr; TYPE_2__ cprbx; TYPE_1__ fmt2; } ;
struct ica_xcRB {int status; } ;
struct ap_message {struct type86x_reply* message; } ;
struct TYPE_7__ {int qid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_2 (int ,char*,int ,int ,int) ;
 int FUNC_3 (struct zcrypt_queue*,struct ap_message*) ;
 int FUNC_4 (struct zcrypt_queue*,struct ap_message*,struct ica_xcRB*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct zcrypt_queue *VAR_2,
       struct ap_message *VAR_3,
       struct ica_xcRB *VAR_4)
{
 struct type86x_reply *VAR_5 = VAR_3->message;

 switch (VAR_5->hdr.type) {
 case 130:
 case 128:
  VAR_4->status = 0x0008044DL;
  return FUNC_3(VAR_2, VAR_3);
 case 129:
  if (VAR_5->hdr.reply_code) {
   FUNC_5(&(VAR_4->status), VAR_5->fmt2.apfs, sizeof(u32));
   return FUNC_3(VAR_2, VAR_3);
  }
  if (VAR_5->cprbx.cprb_ver_id == 0x02)
   return FUNC_4(VAR_2, VAR_3, VAR_4);

 default:
  VAR_4->status = 0x0008044DL;
  VAR_2->online = 0;
  FUNC_6("Cryptographic device %02x.%04x failed and was set offline\n",
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
