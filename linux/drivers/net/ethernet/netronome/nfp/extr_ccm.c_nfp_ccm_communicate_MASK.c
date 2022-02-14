
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct nfp_ccm_hdr {int type; int tag; int ver; } ;
struct nfp_ccm {struct nfp_app* app; } ;
struct nfp_app {int ctrl; } ;
typedef enum nfp_ccm_type { ____Placeholder_nfp_ccm_type } nfp_ccm_type ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_4 (struct nfp_app*,char*,int,unsigned int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nfp_ccm*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct nfp_ccm*,struct nfp_app*,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

struct sk_buff *
FUNC_12(struct nfp_ccm *VAR_2, struct sk_buff *VAR_3,
      enum nfp_ccm_type VAR_4, unsigned int VAR_5)
{
 struct nfp_app *VAR_6 = VAR_2->app;
 struct nfp_ccm_hdr *VAR_7;
 int VAR_8, VAR_9;

 FUNC_10(VAR_6->ctrl);
 VAR_9 = FUNC_7(VAR_2);
 if (VAR_9 < 0) {
  FUNC_11(VAR_6->ctrl);
  FUNC_6(VAR_3);
  return FUNC_0(VAR_9);
 }

 VAR_7 = (void *)VAR_3->data;
 VAR_7->ver = VAR_1;
 VAR_7->type = VAR_4;
 VAR_7->tag = FUNC_5(VAR_9);

 FUNC_3(VAR_6, VAR_3);

 FUNC_11(VAR_6->ctrl);

 VAR_3 = FUNC_9(VAR_2, VAR_6, VAR_4, VAR_9);
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_8 = FUNC_8(VAR_3);
 if (VAR_8 != FUNC_2(VAR_4)) {
  FUNC_4(VAR_6, "cmsg drop - wrong type 0x%02x != 0x%02lx!\n",
    VAR_8, FUNC_2(VAR_4));
  goto err_free;
 }

 if (VAR_5 && VAR_3->len != VAR_5) {
  FUNC_4(VAR_6, "cmsg drop - type 0x%02x wrong size %d != %d!\n",
    VAR_4, VAR_3->len, VAR_5);
  goto err_free;
 }

 return VAR_3;
err_free:
 FUNC_6(VAR_3);
 return FUNC_0(-VAR_0);
}
