
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_offload_status {int stateid; } ;
union nfsd4_op_u {struct nfsd4_offload_status offload_status; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_copy {int dummy; } ;
struct nfsd4_compound_state {struct nfs4_client* clp; } ;
struct nfs4_client {int dummy; } ;
typedef int __be32 ;


 struct nfsd4_copy* FUNC_0 (struct nfs4_client*,int *) ;
 int FUNC_1 (struct nfsd4_copy*) ;
 int VAR_0 ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_1,
       struct nfsd4_compound_state *VAR_2,
       union nfsd4_op_u *VAR_3)
{
 struct nfsd4_offload_status *VAR_4 = &VAR_3->offload_status;
 __be32 VAR_5 = 0;
 struct nfsd4_copy *VAR_6;
 struct nfs4_client *VAR_7 = VAR_2->clp;

 VAR_6 = FUNC_0(VAR_7, &VAR_4->stateid);
 if (VAR_6)
  FUNC_1(VAR_6);
 else
  VAR_5 = VAR_0;

 return VAR_5;
}
