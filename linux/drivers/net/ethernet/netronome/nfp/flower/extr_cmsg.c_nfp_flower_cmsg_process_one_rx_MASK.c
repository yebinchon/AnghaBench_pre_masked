
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_flower_priv {int flower_ext_feats; } ;
struct nfp_flower_cmsg_hdr {int type; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
typedef enum nfp_flower_cmsg_type_port { ____Placeholder_nfp_flower_cmsg_type_port } nfp_flower_cmsg_type_port ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct nfp_flower_cmsg_hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_4 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_5 (struct nfp_app*,char*,int) ;
 int FUNC_6 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_7 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_8 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_9 (struct nfp_app*,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_10(struct nfp_app *VAR_2, struct sk_buff *VAR_3)
{
 struct nfp_flower_priv *VAR_4 = VAR_2->priv;
 struct nfp_flower_cmsg_hdr *VAR_5;
 enum nfp_flower_cmsg_type_port VAR_6;
 bool VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_3);

 VAR_6 = VAR_5->type;
 switch (VAR_6) {
 case 129:
  FUNC_4(VAR_2, VAR_3);
  break;
 case 131:
  if (VAR_4->flower_ext_feats & VAR_0) {
   FUNC_3(VAR_2, VAR_3);
   break;
  }
  goto err_default;
 case 130:
  FUNC_9(VAR_2, VAR_3);
  break;
 case 133:
  FUNC_8(VAR_2, VAR_3);
  break;
 case 128:
  FUNC_7(VAR_2, VAR_3);
  break;
 case 132:
  if (VAR_4->flower_ext_feats & VAR_1) {
   VAR_7 = FUNC_6(VAR_2, VAR_3);
   break;
  }

 default:
err_default:
  FUNC_5(VAR_2, "Cannot handle invalid repr control type %u\n",
         VAR_6);
  goto out;
 }

 if (!VAR_7)
  FUNC_0(VAR_3);
 return;
out:
 FUNC_1(VAR_3);
}
