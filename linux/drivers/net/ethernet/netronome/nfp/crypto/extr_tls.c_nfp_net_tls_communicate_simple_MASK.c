
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfp_net {int dp; } ;
struct nfp_crypto_reply_simple {int error; } ;
typedef enum nfp_ccm_type { ____Placeholder_nfp_ccm_type } nfp_ccm_type ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_net*,struct sk_buff*,int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,char*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(struct nfp_net *VAR_1, struct sk_buff *VAR_2,
          const char *VAR_3, enum nfp_ccm_type VAR_4)
{
 struct nfp_crypto_reply_simple *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4,
      sizeof(*VAR_5), sizeof(*VAR_5),
      VAR_4 == VAR_0);
 if (VAR_6) {
  FUNC_3(&VAR_1->dp, "failed to %s TLS: %d\n", VAR_3, VAR_6);
  return VAR_6;
 }

 VAR_5 = (void *)VAR_2->data;
 VAR_6 = -FUNC_1(VAR_5->error);
 if (VAR_6)
  FUNC_3(&VAR_1->dp, "failed to %s TLS, fw replied: %d\n",
      VAR_3, VAR_6);
 FUNC_2(VAR_2);

 return VAR_6;
}
