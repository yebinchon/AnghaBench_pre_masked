
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nfp_crypto_req_add_front {int l4_proto; } ;
struct nfp_crypto_req_add_back {int dst_port; int src_port; } ;
struct inet_sock {int inet_sport; int inet_dport; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static void
FUNC_1(struct nfp_crypto_req_add_front *VAR_2,
     struct nfp_crypto_req_add_back *VAR_3, struct sock *VAR_4,
     int VAR_5)
{
 struct inet_sock *VAR_6 = FUNC_0(VAR_4);

 VAR_2->l4_proto = VAR_0;

 if (VAR_5 == VAR_1) {
  VAR_3->src_port = 0;
  VAR_3->dst_port = 0;
 } else {
  VAR_3->src_port = VAR_6->inet_dport;
  VAR_3->dst_port = VAR_6->inet_sport;
 }
}
