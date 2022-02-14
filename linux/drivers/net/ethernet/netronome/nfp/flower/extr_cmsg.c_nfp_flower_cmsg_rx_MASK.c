
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_flower_cmsg_hdr {scalar_t__ version; scalar_t__ type; } ;
struct nfp_app {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct nfp_flower_cmsg_hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_4 (struct nfp_app*,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_6 (struct nfp_app*,struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct nfp_app*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct nfp_app *VAR_5, struct sk_buff *VAR_6)
{
 struct nfp_flower_cmsg_hdr *VAR_7;

 VAR_7 = FUNC_2(VAR_6);

 if (FUNC_8(VAR_7->version != VAR_4)) {
  FUNC_4(VAR_5, "Cannot handle repr control version %u\n",
         VAR_7->version);
  FUNC_1(VAR_6);
  return;
 }

 if (VAR_7->type == VAR_0) {

  FUNC_7(VAR_5, VAR_6);
  FUNC_0(VAR_6);
 } else if (VAR_7->type == VAR_1 &&
     FUNC_5(VAR_5, VAR_6)) {

  FUNC_0(VAR_6);
 } else if (VAR_7->type == VAR_3) {

  FUNC_0(VAR_6);
 } else if (VAR_7->type == VAR_2) {

  FUNC_3(VAR_5, VAR_6);
  FUNC_0(VAR_6);
 } else {
  FUNC_6(VAR_5, VAR_6, VAR_7->type);
 }
}
