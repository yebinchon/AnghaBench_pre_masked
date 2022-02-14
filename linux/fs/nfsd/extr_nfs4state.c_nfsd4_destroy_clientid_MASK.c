
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_destroy_clientid {int clientid; } ;
union nfsd4_op_u {struct nfsd4_destroy_clientid destroy_clientid; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int client_lock; } ;
struct nfsd4_compound_state {int dummy; } ;
struct nfs4_client {int dummy; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct nfs4_client*) ;
 int FUNC_3 (struct nfs4_client*) ;
 struct nfs4_client* FUNC_4 (int *,int,struct nfsd_net*) ;
 struct nfs4_client* FUNC_5 (int *,int,struct nfsd_net*) ;
 scalar_t__ FUNC_6 (struct nfs4_client*) ;
 struct nfsd_net* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct nfs4_client*,struct svc_rqst*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct nfs4_client*) ;

__be32
FUNC_12(struct svc_rqst *VAR_4,
  struct nfsd4_compound_state *VAR_5,
  union nfsd4_op_u *VAR_6)
{
 struct nfsd4_destroy_clientid *VAR_7 = &VAR_6->destroy_clientid;
 struct nfs4_client *VAR_8, *VAR_9;
 struct nfs4_client *VAR_10 = ((void*)0);
 __be32 VAR_11 = 0;
 struct nfsd_net *VAR_12 = FUNC_7(FUNC_0(VAR_4), VAR_0);

 FUNC_9(&VAR_12->client_lock);
 VAR_9 = FUNC_5(&VAR_7->clientid, 1, VAR_12);
 VAR_8 = FUNC_4(&VAR_7->clientid, 1, VAR_12);
 FUNC_1(VAR_8 && VAR_9);

 if (VAR_8) {
  if (FUNC_2(VAR_8)) {
   VAR_11 = VAR_1;
   goto out;
  }
  VAR_11 = FUNC_6(VAR_8);
  if (VAR_11)
   goto out;
  VAR_10 = VAR_8;
 } else if (VAR_9)
  VAR_10 = VAR_9;
 else {
  VAR_11 = VAR_2;
  goto out;
 }
 if (!FUNC_8(VAR_10, VAR_4)) {
  VAR_10 = ((void*)0);
  VAR_11 = VAR_3;
  goto out;
 }
 FUNC_11(VAR_10);
out:
 FUNC_10(&VAR_12->client_lock);
 if (VAR_10)
  FUNC_3(VAR_10);
 return VAR_11;
}
