
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct nfp_net {int ktls_conn_id_gen; } ;
struct nfp_crypto_req_add_front {scalar_t__ l3_addrs; scalar_t__ key_len; } ;
typedef int id ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct nfp_net *VAR_1,
      struct nfp_crypto_req_add_front *VAR_2)
{
 u32 VAR_3;
 u64 VAR_4;

 VAR_4 = FUNC_0(&VAR_1->ktls_conn_id_gen);
 VAR_3 = VAR_2->key_len - VAR_0;

 FUNC_1(VAR_2->l3_addrs, &VAR_4, sizeof(VAR_4));
 FUNC_2(VAR_2->l3_addrs + sizeof(VAR_4), 0, VAR_3 - sizeof(VAR_4));
}
