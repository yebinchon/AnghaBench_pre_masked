
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_net {int dummy; } ;
struct nfp_crypto_reply_simple {int dummy; } ;
typedef int gfp_t ;


 struct sk_buff* FUNC_0 (struct nfp_net*,size_t,int,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_1(struct nfp_net *VAR_0, size_t VAR_1, gfp_t VAR_2)
{
 return FUNC_0(VAR_0, VAR_1,
          sizeof(struct nfp_crypto_reply_simple),
          VAR_2);
}
