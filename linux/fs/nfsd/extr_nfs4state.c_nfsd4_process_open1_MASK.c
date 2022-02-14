
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {int dummy; } ;
struct nfsd4_open {int op_odstate; int op_stp; struct nfs4_openowner* op_openowner; int op_seqid; int op_owner; int * op_file; int op_clientid; } ;
struct TYPE_4__ {TYPE_1__* fh_export; } ;
struct nfsd4_compound_state {TYPE_2__ current_fh; struct nfs4_client* clp; } ;
struct nfs4_openowner {int oo_flags; int oo_owner; } ;
struct nfs4_client {int dummy; } ;
typedef int clientid_t ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int ex_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct nfsd_net*) ;
 int FUNC_1 (struct nfs4_client*) ;
 struct nfs4_openowner* FUNC_2 (unsigned int,struct nfsd4_open*,struct nfsd4_compound_state*) ;
 struct nfs4_openowner* FUNC_3 (unsigned int,struct nfsd4_open*,struct nfs4_client*) ;
 scalar_t__ FUNC_4 (int *,struct nfsd4_compound_state*,struct nfsd_net*) ;
 int FUNC_5 (struct nfs4_client*) ;
 scalar_t__ VAR_2 ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (struct nfsd4_compound_state*,int *,int ) ;
 scalar_t__ FUNC_8 (struct nfsd4_compound_state*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_9 (int *) ;
 int FUNC_10 (struct nfs4_openowner*) ;

__be32
FUNC_11(struct nfsd4_compound_state *VAR_5,
      struct nfsd4_open *VAR_6, struct nfsd_net *VAR_7)
{
 clientid_t *VAR_8 = &VAR_6->op_clientid;
 struct nfs4_client *VAR_9 = ((void*)0);
 unsigned int VAR_10;
 struct nfs4_openowner *VAR_11 = ((void*)0);
 __be32 VAR_12;

 if (FUNC_0(&VAR_6->op_clientid, VAR_7))
  return VAR_4;




 VAR_6->op_file = FUNC_6();
 if (VAR_6->op_file == ((void*)0))
  return VAR_3;

 VAR_12 = FUNC_4(VAR_8, VAR_5, VAR_7);
 if (VAR_12)
  return VAR_12;
 VAR_9 = VAR_5->clp;

 VAR_10 = FUNC_9(&VAR_6->op_owner);
 VAR_11 = FUNC_3(VAR_10, VAR_6, VAR_9);
 VAR_6->op_openowner = VAR_11;
 if (!VAR_11) {
  goto new_owner;
 }
 if (!(VAR_11->oo_flags & VAR_0)) {

  FUNC_10(VAR_11);
  VAR_6->op_openowner = ((void*)0);
  goto new_owner;
 }
 VAR_12 = FUNC_7(VAR_5, &VAR_11->oo_owner, VAR_6->op_seqid);
 if (VAR_12)
  return VAR_12;
 goto alloc_stateid;
new_owner:
 VAR_11 = FUNC_2(VAR_10, VAR_6, VAR_5);
 if (VAR_11 == ((void*)0))
  return VAR_3;
 VAR_6->op_openowner = VAR_11;
alloc_stateid:
 VAR_6->op_stp = FUNC_5(VAR_9);
 if (!VAR_6->op_stp)
  return VAR_3;

 if (FUNC_8(VAR_5) &&
     (VAR_5->current_fh.fh_export->ex_flags & VAR_1)) {
  VAR_6->op_odstate = FUNC_1(VAR_9);
  if (!VAR_6->op_odstate)
   return VAR_3;
 }

 return VAR_2;
}
