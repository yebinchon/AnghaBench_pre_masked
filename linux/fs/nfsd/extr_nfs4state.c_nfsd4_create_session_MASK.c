
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct nfsd4_create_session {int flags; int fore_channel; scalar_t__ seqid; TYPE_1__ sessionid; int clientid; int back_channel; int cb_sec; } ;
union nfsd4_op_u {struct nfsd4_create_session create_session; } ;
struct svc_rqst {int rq_cred; } ;
struct sockaddr {int dummy; } ;
struct nfsd_net {int client_lock; } ;
struct TYPE_4__ {int data; } ;
struct nfsd4_session {TYPE_2__ se_sessionid; } ;
struct nfsd4_conn {int dummy; } ;
struct nfsd4_compound_state {int dummy; } ;
struct nfsd4_clid_slot {scalar_t__ sl_seqid; } ;
struct nfs4_client {int cl_name; struct nfsd4_clid_slot cl_cs_slot; int cl_addr; int cl_cred; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfsd4_session*) ;
 struct nfsd4_conn* FUNC_3 (struct svc_rqst*,struct nfsd4_create_session*) ;
 struct nfsd4_session* FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,struct nfsd_net*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (struct nfs4_client*) ;
 struct nfs4_client* FUNC_9 (int *,int,struct nfsd_net*) ;
 struct nfs4_client* FUNC_10 (int *,struct nfsd_net*) ;
 struct nfs4_client* FUNC_11 (int *,int,struct nfsd_net*) ;
 int FUNC_12 (struct nfsd4_conn*) ;
 int FUNC_13 (struct svc_rqst*,struct nfsd4_session*,struct nfs4_client*,struct nfsd4_create_session*) ;
 scalar_t__ FUNC_14 (struct nfs4_client*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (struct nfs4_client*) ;
 struct nfsd_net* FUNC_17 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_18 (struct nfsd4_create_session*,struct nfsd4_clid_slot*,scalar_t__) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (struct nfsd4_session*) ;
 int FUNC_21 (struct svc_rqst*,struct nfsd4_conn*,struct nfsd4_session*) ;
 int FUNC_22 (struct nfs4_client*,struct svc_rqst*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct nfsd4_session*) ;
 scalar_t__ FUNC_25 (struct nfsd4_create_session*,struct nfsd4_clid_slot*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_26 (struct sockaddr*,struct sockaddr*) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 struct sockaddr* FUNC_30 (struct svc_rqst*) ;

__be32
FUNC_31(struct svc_rqst *VAR_13,
  struct nfsd4_compound_state *VAR_14, union nfsd4_op_u *VAR_15)
{
 struct nfsd4_create_session *VAR_16 = &VAR_15->create_session;
 struct sockaddr *VAR_17 = FUNC_30(VAR_13);
 struct nfs4_client *VAR_18, *VAR_19;
 struct nfs4_client *VAR_20 = ((void*)0);
 struct nfsd4_session *VAR_21;
 struct nfsd4_conn *VAR_22;
 struct nfsd4_clid_slot *VAR_23 = ((void*)0);
 __be32 VAR_24 = 0;
 struct nfsd_net *VAR_25 = FUNC_17(FUNC_0(VAR_13), VAR_5);

 if (VAR_16->flags & ~VAR_1)
  return VAR_7;
 VAR_24 = FUNC_19(&VAR_16->cb_sec);
 if (VAR_24)
  return VAR_24;
 VAR_24 = FUNC_6(&VAR_16->fore_channel, VAR_25);
 if (VAR_24)
  return VAR_24;
 VAR_24 = FUNC_5(&VAR_16->back_channel);
 if (VAR_24)
  goto out_release_drc_mem;
 VAR_24 = VAR_8;
 VAR_21 = FUNC_4(&VAR_16->fore_channel, &VAR_16->back_channel);
 if (!VAR_21)
  goto out_release_drc_mem;
 VAR_22 = FUNC_3(VAR_13, VAR_16);
 if (!VAR_22)
  goto out_free_session;

 FUNC_28(&VAR_25->client_lock);
 VAR_19 = FUNC_11(&VAR_16->clientid, 1, VAR_25);
 VAR_18 = FUNC_9(&VAR_16->clientid, 1, VAR_25);
 FUNC_1(VAR_18 && VAR_19);

 if (VAR_18) {
  VAR_24 = VAR_12;
  if (!FUNC_22(VAR_18, VAR_13))
   goto out_free_conn;
  VAR_23 = &VAR_18->cl_cs_slot;
  VAR_24 = FUNC_7(VAR_16->seqid, VAR_23->sl_seqid, 0);
  if (VAR_24) {
   if (VAR_24 == VAR_9)
    VAR_24 = FUNC_25(VAR_16, VAR_23);
   goto out_free_conn;
  }
 } else if (VAR_19) {
  if (!FUNC_27(&VAR_19->cl_cred, &VAR_13->rq_cred) ||
      !FUNC_26(VAR_17, (struct sockaddr *) &VAR_19->cl_addr)) {
   VAR_24 = VAR_6;
   goto out_free_conn;
  }
  VAR_24 = VAR_12;
  if (!FUNC_22(VAR_19, VAR_13))
   goto out_free_conn;
  VAR_23 = &VAR_19->cl_cs_slot;
  VAR_24 = FUNC_7(VAR_16->seqid, VAR_23->sl_seqid, 0);
  if (VAR_24) {

   VAR_24 = VAR_10;
   goto out_free_conn;
  }
  VAR_20 = FUNC_10(&VAR_19->cl_name, VAR_25);
  if (VAR_20) {
   VAR_24 = FUNC_14(VAR_20);
   if (VAR_24) {
    VAR_20 = ((void*)0);
    goto out_free_conn;
   }
  }
  FUNC_16(VAR_19);
  VAR_18 = VAR_19;
 } else {
  VAR_24 = VAR_11;
  goto out_free_conn;
 }
 VAR_24 = VAR_4;

 VAR_16->flags &= ~VAR_2;

 VAR_16->flags &= ~VAR_3;

 FUNC_13(VAR_13, VAR_21, VAR_18, VAR_16);
 FUNC_20(VAR_21);

 FUNC_15(VAR_16->sessionid.data, VAR_21->se_sessionid.data,
        VAR_0);
 VAR_23->sl_seqid++;
 VAR_16->seqid = VAR_23->sl_seqid;


 FUNC_18(VAR_16, VAR_23, VAR_24);
 FUNC_29(&VAR_25->client_lock);

 FUNC_21(VAR_13, VAR_22, VAR_21);
 FUNC_24(VAR_21);
 if (VAR_20)
  FUNC_8(VAR_20);
 return VAR_24;
out_free_conn:
 FUNC_29(&VAR_25->client_lock);
 FUNC_12(VAR_22);
 if (VAR_20)
  FUNC_8(VAR_20);
out_free_session:
 FUNC_2(VAR_21);
out_release_drc_mem:
 FUNC_23(&VAR_16->fore_channel);
 return VAR_24;
}
