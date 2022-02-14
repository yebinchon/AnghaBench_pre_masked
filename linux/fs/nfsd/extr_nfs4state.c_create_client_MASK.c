
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_netobj {int dummy; } ;
struct svc_rqst {int rq_cred; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nfsd_net {scalar_t__ clientid_base; } ;
struct TYPE_3__ {scalar_t__ cl_id; } ;
struct TYPE_4__ {int cl_ref; } ;
struct nfs4_client {int cl_nfsd_dentry; TYPE_1__ cl_clientid; TYPE_2__ cl_nfsdfs; struct net* net; int * cl_cb_session; int cl_addr; int cl_cb_slot_busy; int cl_time; int cl_cb_null; int cl_cred; } ;
struct net {int dummy; } ;
typedef int nfs4_verifier ;


 int VAR_0 ;
 struct net* FUNC_0 (struct svc_rqst*) ;
 struct nfs4_client* FUNC_1 (struct xdr_netobj) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nfs4_client*,int *) ;
 int FUNC_5 (struct nfs4_client*) ;
 int FUNC_6 (struct nfs4_client*,struct nfsd_net*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sockaddr*,int) ;
 struct nfsd_net* FUNC_10 (struct net*,int ) ;
 int FUNC_11 (int *,struct nfs4_client*,int *,int ) ;
 int FUNC_12 (struct nfsd_net*,TYPE_2__*,scalar_t__,int ) ;
 int VAR_2 ;
 struct sockaddr* FUNC_13 (struct svc_rqst*) ;

__attribute__((used)) static struct nfs4_client *FUNC_14(struct xdr_netobj VAR_3,
  struct svc_rqst *VAR_4, nfs4_verifier *VAR_5)
{
 struct nfs4_client *VAR_6;
 struct sockaddr *VAR_7 = FUNC_13(VAR_4);
 int VAR_8;
 struct net *VAR_9 = FUNC_0(VAR_4);
 struct nfsd_net *VAR_10 = FUNC_10(VAR_9, VAR_2);

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_3(&VAR_6->cl_cred, &VAR_4->rq_cred);
 if (VAR_8) {
  FUNC_5(VAR_6);
  return ((void*)0);
 }
 FUNC_6(VAR_6, VAR_10);
 FUNC_8(&VAR_6->cl_nfsdfs.cl_ref);
 FUNC_11(&VAR_6->cl_cb_null, VAR_6, ((void*)0), VAR_0);
 VAR_6->cl_time = FUNC_7();
 FUNC_2(0, &VAR_6->cl_cb_slot_busy);
 FUNC_4(VAR_6, VAR_5);
 FUNC_9(&VAR_6->cl_addr, VAR_7, sizeof(struct sockaddr_storage));
 VAR_6->cl_cb_session = ((void*)0);
 VAR_6->net = VAR_9;
 VAR_6->cl_nfsd_dentry = FUNC_12(VAR_10, &VAR_6->cl_nfsdfs,
   VAR_6->cl_clientid.cl_id - VAR_10->clientid_base,
   VAR_1);
 if (!VAR_6->cl_nfsd_dentry) {
  FUNC_5(VAR_6);
  return ((void*)0);
 }
 return VAR_6;
}
