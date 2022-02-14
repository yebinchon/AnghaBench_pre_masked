
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int dummy; } ;
struct nfsd_net {int dummy; } ;
struct nfs4_client_reclaim {scalar_t__ cr_clp; } ;


 struct nfs4_client_reclaim* FUNC_0 (struct xdr_netobj,struct nfsd_net*) ;

bool
FUNC_1(struct xdr_netobj VAR_0, struct nfsd_net *VAR_1)
{
 struct nfs4_client_reclaim *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return (VAR_2 && VAR_2->cr_clp);
}
