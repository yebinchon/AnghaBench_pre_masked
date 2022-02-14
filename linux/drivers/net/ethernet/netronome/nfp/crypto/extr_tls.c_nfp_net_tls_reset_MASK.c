
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfp_net {int dummy; } ;
struct nfp_crypto_req_reset {scalar_t__ ep_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct nfp_net*,int,int ) ;
 int FUNC_1 (struct nfp_net*,struct sk_buff*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct nfp_net *VAR_3)
{
 struct nfp_crypto_req_reset *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = (void *)VAR_5->data;
 VAR_4->ep_id = 0;

 return FUNC_1(VAR_3, VAR_5, "reset",
           VAR_2);
}
