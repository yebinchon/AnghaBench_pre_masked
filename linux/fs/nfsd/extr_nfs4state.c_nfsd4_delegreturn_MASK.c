
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_delegreturn {int dr_stateid; } ;
union nfsd4_op_u {struct nfsd4_delegreturn delegreturn; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
struct nfs4_stid {int dummy; } ;
struct nfs4_delegation {int dl_stid; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rqst*) ;
 int VAR_1 ;
 struct nfs4_delegation* FUNC_1 (struct nfs4_stid*) ;
 int FUNC_2 (struct nfs4_delegation*) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,int *,int ,int ) ;
 struct nfsd_net* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfsd4_compound_state*) ;
 scalar_t__ FUNC_7 (struct nfsd4_compound_state*,int *,int ,struct nfs4_stid**,struct nfsd_net*) ;
 scalar_t__ FUNC_8 (int *,int *,int ) ;
 int VAR_2 ;

__be32
FUNC_9(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4,
    union nfsd4_op_u *VAR_5)
{
 struct nfsd4_delegreturn *VAR_6 = &VAR_5->delegreturn;
 struct nfs4_delegation *VAR_7;
 stateid_t *VAR_8 = &VAR_6->dr_stateid;
 struct nfs4_stid *VAR_9;
 __be32 VAR_10;
 struct nfsd_net *VAR_11 = FUNC_4(FUNC_0(VAR_3), VAR_2);

 if ((VAR_10 = FUNC_3(VAR_3, &VAR_4->current_fh, VAR_1, 0)))
  return VAR_10;

 VAR_10 = FUNC_7(VAR_4, VAR_8, VAR_0, &VAR_9, VAR_11);
 if (VAR_10)
  goto out;
 VAR_7 = FUNC_1(VAR_9);
 VAR_10 = FUNC_8(VAR_8, &VAR_7->dl_stid, FUNC_6(VAR_4));
 if (VAR_10)
  goto put_stateid;

 FUNC_2(VAR_7);
put_stateid:
 FUNC_5(&VAR_7->dl_stid);
out:
 return VAR_10;
}
