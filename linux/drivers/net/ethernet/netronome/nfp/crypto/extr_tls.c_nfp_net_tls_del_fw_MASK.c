
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfp_net {int dummy; } ;
struct nfp_crypto_req_del {int handle; scalar_t__ ep_id; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 struct sk_buff* FUNC_1 (struct nfp_net*,int,int ) ;
 int FUNC_2 (struct nfp_net*,struct sk_buff*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct nfp_net *VAR_2, __be32 *VAR_3)
{
 struct nfp_crypto_req_del *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_1(VAR_2, sizeof(*VAR_4), VAR_0);
 if (!VAR_5)
  return;

 VAR_4 = (void *)VAR_5->data;
 VAR_4->ep_id = 0;
 FUNC_0(VAR_4->handle, VAR_3, sizeof(VAR_4->handle));

 FUNC_2(VAR_2, VAR_5, "delete",
           VAR_1);
}
