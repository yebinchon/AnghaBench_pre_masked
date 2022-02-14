
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_setclientid_confirm {int sc_clientid; int sc_confirm; } ;
union nfsd4_op_u {struct nfsd4_setclientid_confirm setclientid_confirm; } ;
struct svc_rqst {int rq_cred; } ;
struct nfsd_net {int client_lock; } ;
struct nfsd4_compound_state {int dummy; } ;
struct nfs4_client {int cl_cred; int cl_name; int cl_cb_conn; int cl_confirm; } ;
typedef int nfs4_verifier ;
typedef int clientid_t ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int *,struct nfsd_net*) ;
 int FUNC_1 (struct svc_rqst*) ;
 scalar_t__ FUNC_2 (struct nfs4_client*) ;
 int FUNC_3 (struct nfs4_client*) ;
 struct nfs4_client* FUNC_4 (int *,int,struct nfsd_net*) ;
 struct nfs4_client* FUNC_5 (int *,struct nfsd_net*) ;
 struct nfs4_client* FUNC_6 (int *,int,struct nfsd_net*) ;
 int FUNC_7 (struct nfs4_client*) ;
 scalar_t__ FUNC_8 (struct nfs4_client*) ;
 int FUNC_9 (struct nfs4_client*) ;
 struct nfsd_net* FUNC_10 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_11 (struct nfs4_client*,int *) ;
 int FUNC_12 (struct nfs4_client*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (struct nfs4_client*) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct nfs4_client*) ;

__be32
FUNC_19(struct svc_rqst *VAR_4,
   struct nfsd4_compound_state *VAR_5,
   union nfsd4_op_u *VAR_6)
{
 struct nfsd4_setclientid_confirm *VAR_7 =
   &VAR_6->setclientid_confirm;
 struct nfs4_client *VAR_8, *VAR_9;
 struct nfs4_client *VAR_10 = ((void*)0);
 nfs4_verifier VAR_11 = VAR_7->sc_confirm;
 clientid_t * VAR_12 = &VAR_7->sc_clientid;
 __be32 VAR_13;
 struct nfsd_net *VAR_14 = FUNC_10(FUNC_1(VAR_4), VAR_1);

 if (FUNC_0(VAR_12, VAR_14))
  return VAR_3;

 FUNC_16(&VAR_14->client_lock);
 VAR_8 = FUNC_4(VAR_12, 0, VAR_14);
 VAR_9 = FUNC_6(VAR_12, 0, VAR_14);







 VAR_13 = VAR_2;
 if (VAR_9 && !FUNC_14(&VAR_9->cl_cred, &VAR_4->rq_cred))
  goto out;
 if (VAR_8 && !FUNC_14(&VAR_8->cl_cred, &VAR_4->rq_cred))
  goto out;

 if (!VAR_9 || !FUNC_15(&VAR_11, &VAR_9->cl_confirm)) {
  if (VAR_8 && FUNC_15(&VAR_11, &VAR_8->cl_confirm)) {

   VAR_13 = VAR_0;
  } else
   VAR_13 = VAR_3;
  goto out;
 }
 VAR_13 = VAR_0;
 if (VAR_8) {
  VAR_10 = VAR_9;
  FUNC_18(VAR_10);
  FUNC_11(VAR_8, &VAR_9->cl_cb_conn);
 } else {
  VAR_10 = FUNC_5(&VAR_9->cl_name, VAR_14);
  if (VAR_10) {
   VAR_13 = VAR_2;
   if (FUNC_2(VAR_10)
     && !FUNC_14(&VAR_9->cl_cred,
       &VAR_10->cl_cred))
    goto out;
   VAR_13 = FUNC_8(VAR_10);
   if (VAR_13) {
    VAR_10 = ((void*)0);
    goto out;
   }
  }
  FUNC_9(VAR_9);
  VAR_8 = VAR_9;
 }
 FUNC_7(VAR_8);
 FUNC_17(&VAR_14->client_lock);
 FUNC_12(VAR_8);
 FUNC_16(&VAR_14->client_lock);
 FUNC_13(VAR_8);
out:
 FUNC_17(&VAR_14->client_lock);
 if (VAR_10)
  FUNC_3(VAR_10);
 return VAR_13;
}
