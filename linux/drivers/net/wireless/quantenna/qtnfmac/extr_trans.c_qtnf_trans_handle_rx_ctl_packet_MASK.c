
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_msg_header {int type; int len; } ;
struct qlink_event {int dummy; } ;
struct qlink_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct qtnf_bus*,struct sk_buff*) ;
 int FUNC_4 (struct qtnf_bus*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct qtnf_bus *VAR_2, struct sk_buff *VAR_3)
{
 const struct qlink_msg_header *VAR_4 = (void *)VAR_3->data;
 int VAR_5 = -1;

 if (FUNC_5(VAR_3->len < sizeof(*VAR_4))) {
  FUNC_2("packet is too small: %u\n", VAR_3->len);
  FUNC_0(VAR_3);
  return -VAR_1;
 }

 if (FUNC_5(VAR_3->len != FUNC_1(VAR_4->len))) {
  FUNC_2("cmd reply length mismatch: %u != %u\n",
   VAR_3->len, FUNC_1(VAR_4->len));
  FUNC_0(VAR_3);
  return -VAR_0;
 }

 switch (FUNC_1(VAR_4->type)) {
 case 129:
  if (FUNC_5(VAR_3->len < sizeof(struct qlink_cmd))) {
   FUNC_2("cmd reply too short: %u\n", VAR_3->len);
   FUNC_0(VAR_3);
   break;
  }

  FUNC_4(VAR_2, VAR_3);
  break;
 case 128:
  if (FUNC_5(VAR_3->len < sizeof(struct qlink_event))) {
   FUNC_2("event too short: %u\n", VAR_3->len);
   FUNC_0(VAR_3);
   break;
  }

  VAR_5 = FUNC_3(VAR_2, VAR_3);
  break;
 default:
  FUNC_2("unknown packet type: %x\n", FUNC_1(VAR_4->type));
  FUNC_0(VAR_3);
  break;
 }

 return VAR_5;
}
