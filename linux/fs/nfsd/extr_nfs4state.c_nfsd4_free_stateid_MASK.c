
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_free_stateid {int fr_stateid; } ;
union nfsd4_op_u {struct nfsd4_free_stateid free_stateid; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {TYPE_1__* session; } ;
struct nfs4_stid {int sc_type; int sc_lock; int sc_count; int sc_stateid; } ;
struct nfs4_delegation {int dl_recall_lru; } ;
struct nfs4_client {int cl_lock; } ;
typedef int stateid_t ;
typedef int __be32 ;
struct TYPE_2__ {struct nfs4_client* se_client; } ;






 int FUNC_0 (int *,int *,int) ;
 struct nfs4_delegation* FUNC_1 (struct nfs4_stid*) ;
 struct nfs4_stid* FUNC_2 (struct nfs4_client*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfs4_stid*) ;
 int VAR_0 ;
 int FUNC_5 (int *,struct nfs4_stid*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__be32
FUNC_9(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4,
     union nfsd4_op_u *VAR_5)
{
 struct nfsd4_free_stateid *VAR_6 = &VAR_5->free_stateid;
 stateid_t *VAR_7 = &VAR_6->fr_stateid;
 struct nfs4_stid *VAR_8;
 struct nfs4_delegation *VAR_9;
 struct nfs4_client *VAR_10 = VAR_4->session->se_client;
 __be32 VAR_11 = VAR_1;

 FUNC_7(&VAR_10->cl_lock);
 VAR_8 = FUNC_2(VAR_10, VAR_7);
 if (!VAR_8)
  goto out_unlock;
 FUNC_7(&VAR_8->sc_lock);
 switch (VAR_8->sc_type) {
 case 131:
  VAR_11 = VAR_2;
  break;
 case 129:
  VAR_11 = FUNC_0(VAR_7, &VAR_8->sc_stateid, 1);
  if (VAR_11)
   break;
  VAR_11 = VAR_2;
  break;
 case 130:
  FUNC_8(&VAR_8->sc_lock);
  FUNC_6(&VAR_8->sc_count);
  FUNC_8(&VAR_10->cl_lock);
  VAR_11 = FUNC_5(VAR_7, VAR_8);
  goto out;
 case 128:
  FUNC_8(&VAR_8->sc_lock);
  VAR_9 = FUNC_1(VAR_8);
  FUNC_3(&VAR_9->dl_recall_lru);
  FUNC_8(&VAR_10->cl_lock);
  FUNC_4(VAR_8);
  VAR_11 = VAR_0;
  goto out;

 }
 FUNC_8(&VAR_8->sc_lock);
out_unlock:
 FUNC_8(&VAR_10->cl_lock);
out:
 return VAR_11;
}
