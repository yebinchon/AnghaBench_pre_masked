
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd4_open {TYPE_1__* op_openowner; int op_share_access; int op_delegate_stateid; } ;
struct TYPE_4__ {scalar_t__ sc_type; } ;
struct nfs4_delegation {TYPE_2__ dl_stid; } ;
struct nfs4_client {scalar_t__ cl_minorversion; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int oo_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nfs4_delegation* FUNC_0 (struct nfs4_client*,int *) ;
 scalar_t__ FUNC_1 (struct nfs4_delegation*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct nfsd4_open*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static __be32
FUNC_5(struct nfs4_client *VAR_5, struct nfsd4_open *VAR_6,
  struct nfs4_delegation **VAR_7)
{
 int VAR_8;
 __be32 VAR_9 = VAR_3;
 struct nfs4_delegation *VAR_10;

 VAR_10 = FUNC_0(VAR_5, &VAR_6->op_delegate_stateid);
 if (VAR_10 == ((void*)0))
  goto out;
 if (VAR_10->dl_stid.sc_type == VAR_1) {
  FUNC_2(&VAR_10->dl_stid);
  if (VAR_5->cl_minorversion)
   VAR_9 = VAR_4;
  goto out;
 }
 VAR_8 = FUNC_4(VAR_6->op_share_access);
 VAR_9 = FUNC_1(VAR_10, VAR_8);
 if (VAR_9) {
  FUNC_2(&VAR_10->dl_stid);
  goto out;
 }
 *VAR_7 = VAR_10;
out:
 if (!FUNC_3(VAR_6))
  return VAR_2;
 if (VAR_9)
  return VAR_9;
 VAR_6->op_openowner->oo_flags |= VAR_0;
 return VAR_2;
}
