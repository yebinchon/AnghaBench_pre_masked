
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {int reclaim_str_hashtbl_size; } ;
struct TYPE_4__ {struct nfs4_client_reclaim* data; } ;
struct TYPE_3__ {struct nfs4_client_reclaim* data; } ;
struct nfs4_client_reclaim {TYPE_2__ cr_princhash; TYPE_1__ cr_name; int cr_strhash; } ;


 int FUNC_0 (struct nfs4_client_reclaim*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nfs4_client_reclaim *VAR_0, struct nfsd_net *VAR_1)
{
 FUNC_1(&VAR_0->cr_strhash);
 FUNC_0(VAR_0->cr_name.data);
 FUNC_0(VAR_0->cr_princhash.data);
 FUNC_0(VAR_0);
 VAR_1->reclaim_str_hashtbl_size--;
}
