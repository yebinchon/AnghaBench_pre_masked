
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_ccm {int wq; } ;
struct nfp_app {int dummy; } ;
typedef enum nfp_ccm_type { ____Placeholder_nfp_ccm_type } nfp_ccm_type ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct nfp_app*,char*,...) ;
 int FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (struct nfp_ccm*,struct nfp_app*,int) ;
 struct sk_buff* FUNC_4 (struct nfp_ccm*,struct nfp_app*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct nfp_ccm *VAR_2, struct nfp_app *VAR_3,
     enum nfp_ccm_type VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 50; VAR_7++) {
  FUNC_5(4);
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 VAR_8 = FUNC_6(VAR_2->wq,
            VAR_6 = FUNC_3(VAR_2, VAR_3,
           VAR_5),
            FUNC_2(5000));



 if (!VAR_6)
  VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5);
 if (VAR_8 < 0) {
  FUNC_1(VAR_3, "%s waiting for response to 0x%02x: %d\n",
    VAR_8 == VAR_0 ? "interrupted" : "error",
    VAR_4, VAR_8);
  return FUNC_0(VAR_8);
 }
 if (!VAR_6) {
  FUNC_1(VAR_3, "timeout waiting for response to 0x%02x\n", VAR_4);
  return FUNC_0(-VAR_1);
 }

 return VAR_6;
}
