
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int dummy; } ;
struct nfs4_lockowner {int dummy; } ;
struct nfs4_client {int cl_lock; } ;


 struct nfs4_lockowner* FUNC_0 (struct nfs4_client*,struct xdr_netobj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct nfs4_lockowner *
FUNC_3(struct nfs4_client *VAR_0, struct xdr_netobj *VAR_1)
{
 struct nfs4_lockowner *VAR_2;

 FUNC_1(&VAR_0->cl_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->cl_lock);
 return VAR_2;
}
