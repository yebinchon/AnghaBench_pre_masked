
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfsd4_reclaim_complete {scalar_t__ rca_one_fs; } ;
union nfsd4_op_u {struct nfsd4_reclaim_complete reclaim_complete; } ;
struct svc_rqst {int dummy; } ;
struct TYPE_7__ {int fh_dentry; } ;
struct nfsd4_compound_state {TYPE_1__* session; TYPE_2__ current_fh; } ;
typedef int __be32 ;
struct TYPE_8__ {int cl_flags; } ;
struct TYPE_6__ {TYPE_3__* se_client; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *) ;

__be32
FUNC_4(struct svc_rqst *VAR_5,
  struct nfsd4_compound_state *VAR_6, union nfsd4_op_u *VAR_7)
{
 struct nfsd4_reclaim_complete *VAR_8 = &VAR_7->reclaim_complete;
 __be32 VAR_9 = 0;

 if (VAR_8->rca_one_fs) {
  if (!VAR_6->current_fh.fh_dentry)
   return VAR_3;




  return VAR_1;
 }

 VAR_9 = VAR_2;
 if (FUNC_3(VAR_0,
        &VAR_6->session->se_client->cl_flags))
  goto out;

 VAR_9 = VAR_4;
 if (FUNC_1(VAR_6->session->se_client))







  goto out;

 VAR_9 = VAR_1;
 FUNC_2(VAR_6->session->se_client);
 FUNC_0(VAR_6->session->se_client);
out:
 return VAR_9;
}
