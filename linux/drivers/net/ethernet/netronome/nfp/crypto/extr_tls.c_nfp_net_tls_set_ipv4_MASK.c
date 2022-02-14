
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct nfp_net {int dummy; } ;
struct nfp_crypto_req_add_back {int dummy; } ;
struct TYPE_2__ {int key_len; } ;
struct nfp_crypto_req_add_v4 {struct nfp_crypto_req_add_back back; int dst_ip; int src_ip; TYPE_1__ front; } ;
struct inet_sock {int inet_saddr; int inet_daddr; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct nfp_net*,TYPE_1__*) ;

__attribute__((used)) static struct nfp_crypto_req_add_back *
FUNC_2(struct nfp_net *VAR_1, struct nfp_crypto_req_add_v4 *VAR_2,
       struct sock *VAR_3, int VAR_4)
{
 struct inet_sock *VAR_5 = FUNC_0(VAR_3);

 VAR_2->front.key_len += sizeof(__be32) * 2;

 if (VAR_4 == VAR_0) {
  FUNC_1(VAR_1, &VAR_2->front);
 } else {
  VAR_2->src_ip = VAR_5->inet_daddr;
  VAR_2->dst_ip = VAR_5->inet_saddr;
 }

 return &VAR_2->back;
}
