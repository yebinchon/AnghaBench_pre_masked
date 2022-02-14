
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_bind_conn_to_session {int dir; int sessionid; } ;
union nfsd4_op_u {struct nfsd4_bind_conn_to_session bind_conn_to_session; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int client_lock; } ;
struct nfsd4_session {int se_client; } ;
struct nfsd4_conn {int dummy; } ;
struct nfsd4_compound_state {int dummy; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;


 struct net* FUNC_0 (struct svc_rqst*) ;
 struct nfsd4_conn* FUNC_1 (struct svc_rqst*,int ) ;
 struct nfsd4_session* FUNC_2 (int *,struct net*,scalar_t__*) ;
 struct nfsd_net* FUNC_3 (struct net*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct svc_rqst*,struct nfsd4_conn*,struct nfsd4_session*) ;
 int FUNC_5 (struct svc_rqst*) ;
 int FUNC_6 (int ,struct svc_rqst*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct nfsd4_session*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__be32 FUNC_11(struct svc_rqst *VAR_5,
       struct nfsd4_compound_state *VAR_6,
       union nfsd4_op_u *VAR_7)
{
 struct nfsd4_bind_conn_to_session *VAR_8 = &VAR_7->bind_conn_to_session;
 __be32 VAR_9;
 struct nfsd4_conn *VAR_10;
 struct nfsd4_session *VAR_11;
 struct net *VAR_12 = FUNC_0(VAR_5);
 struct nfsd_net *VAR_13 = FUNC_3(VAR_12, VAR_1);

 if (!FUNC_5(VAR_5))
  return VAR_3;
 FUNC_9(&VAR_13->client_lock);
 VAR_11 = FUNC_2(&VAR_8->sessionid, VAR_12, &VAR_9);
 FUNC_10(&VAR_13->client_lock);
 if (!VAR_11)
  goto out_no_session;
 VAR_9 = VAR_4;
 if (!FUNC_6(VAR_11->se_client, VAR_5))
  goto out;
 VAR_9 = FUNC_7(&VAR_8->dir);
 if (VAR_9)
  goto out;
 VAR_10 = FUNC_1(VAR_5, VAR_8->dir);
 VAR_9 = VAR_2;
 if (!VAR_10)
  goto out;
 FUNC_4(VAR_5, VAR_10, VAR_11);
 VAR_9 = VAR_0;
out:
 FUNC_8(VAR_11);
out_no_session:
 return VAR_9;
}
