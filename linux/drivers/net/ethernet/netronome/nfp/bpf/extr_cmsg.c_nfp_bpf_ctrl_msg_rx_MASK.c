
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct nfp_app_bpf {int ccm; } ;
struct nfp_app {struct nfp_app_bpf* priv; } ;
struct cmsg_reply_map_simple {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfp_app_bpf*,char*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nfp_app_bpf*,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct nfp_app *VAR_1, struct sk_buff *VAR_2)
{
 struct nfp_app_bpf *VAR_3 = VAR_1->priv;

 if (FUNC_6(VAR_2->len < sizeof(struct cmsg_reply_map_simple))) {
  FUNC_0(VAR_3, "cmsg drop - too short %d!\n", VAR_2->len);
  FUNC_2(VAR_2);
  return;
 }

 if (FUNC_4(VAR_2) == VAR_0) {
  if (!FUNC_3(VAR_3, VAR_2->data, VAR_2->len))
   FUNC_1(VAR_2);
  else
   FUNC_2(VAR_2);
 }

 FUNC_5(&VAR_3->ccm, VAR_2);
}
