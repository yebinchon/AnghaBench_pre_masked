
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cl_id; int cl_boot; } ;
union nfsd4_op_u {TYPE_1__ renew; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int dummy; } ;
struct nfsd4_compound_state {struct nfs4_client* clp; } ;
struct nfs4_client {scalar_t__ cl_cb_state; int cl_delegations; } ;
typedef TYPE_1__ clientid_t ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct nfsd4_compound_state*,struct nfsd_net*) ;
 struct nfsd_net* FUNC_4 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__be32
FUNC_5(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
     union nfsd4_op_u *VAR_6)
{
 clientid_t *VAR_7 = &VAR_6->renew;
 struct nfs4_client *VAR_8;
 __be32 VAR_9;
 struct nfsd_net *VAR_10 = FUNC_4(FUNC_0(VAR_4), VAR_2);

 FUNC_1("process_renew(%08x/%08x): starting\n",
   VAR_7->cl_boot, VAR_7->cl_id);
 VAR_9 = FUNC_3(VAR_7, VAR_5, VAR_10);
 if (VAR_9)
  goto out;
 VAR_8 = VAR_5->clp;
 VAR_9 = VAR_3;
 if (!FUNC_2(&VAR_8->cl_delegations)
   && VAR_8->cl_cb_state != VAR_0)
  goto out;
 VAR_9 = VAR_1;
out:
 return VAR_9;
}
