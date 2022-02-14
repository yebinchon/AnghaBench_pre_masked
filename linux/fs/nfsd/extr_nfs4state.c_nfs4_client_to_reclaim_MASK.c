
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_netobj {int len; int data; } ;
struct nfsd_net {int reclaim_str_hashtbl_size; int * reclaim_str_hashtbl; } ;
struct TYPE_4__ {int len; int data; } ;
struct TYPE_3__ {int len; int data; } ;
struct nfs4_client_reclaim {int * cr_clp; TYPE_2__ cr_princhash; TYPE_1__ cr_name; int cr_strhash; } ;


 int FUNC_0 (int *) ;
 struct nfs4_client_reclaim* FUNC_1 () ;
 unsigned int FUNC_2 (struct xdr_netobj) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,int *) ;

struct nfs4_client_reclaim *
FUNC_5(struct xdr_netobj VAR_0, struct xdr_netobj VAR_1,
  struct nfsd_net *VAR_2)
{
 unsigned int VAR_3;
 struct nfs4_client_reclaim *VAR_4;

 FUNC_3("NFSD nfs4_client_to_reclaim NAME: %.*s\n", VAR_0.len, VAR_0.data);
 VAR_4 = FUNC_1();
 if (VAR_4) {
  VAR_3 = FUNC_2(VAR_0);
  FUNC_0(&VAR_4->cr_strhash);
  FUNC_4(&VAR_4->cr_strhash, &VAR_2->reclaim_str_hashtbl[VAR_3]);
  VAR_4->cr_name.data = VAR_0.data;
  VAR_4->cr_name.len = VAR_0.len;
  VAR_4->cr_princhash.data = VAR_1.data;
  VAR_4->cr_princhash.len = VAR_1.len;
  VAR_4->cr_clp = ((void*)0);
  VAR_2->reclaim_str_hashtbl_size++;
 }
 return VAR_4;
}
