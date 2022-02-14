
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_5__ {int cl_id; int cl_boot; } ;
struct xdr_netobj {int dummy; } ;
struct nfsd4_setclientid {TYPE_3__ se_confirm; TYPE_1__ se_clientid; int se_verf; struct xdr_netobj se_name; } ;
union nfsd4_op_u {struct nfsd4_setclientid setclientid; } ;
struct svc_rqst {int rq_cred; } ;
struct sockaddr {int dummy; } ;
struct nfsd_net {int client_lock; } ;
struct nfsd4_compound_state {int dummy; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_6__ {int cl_id; int cl_boot; } ;
struct nfs4_client {TYPE_4__ cl_confirm; TYPE_2__ cl_clientid; scalar_t__ cl_minorversion; int cl_verifier; int cl_addr; int cl_cred; } ;
typedef int nfs4_verifier ;
typedef int addr_str ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (struct nfs4_client*) ;
 scalar_t__ FUNC_2 (struct nfs4_client*) ;
 scalar_t__ FUNC_3 (struct nfs4_client*) ;
 int FUNC_4 (struct nfs4_client*,struct nfs4_client*) ;
 struct nfs4_client* FUNC_5 (struct xdr_netobj,struct svc_rqst*,int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (struct nfs4_client*) ;
 struct nfs4_client* FUNC_8 (struct xdr_netobj*,struct nfsd_net*) ;
 struct nfs4_client* FUNC_9 (struct xdr_netobj*,struct nfsd_net*) ;
 int FUNC_10 (struct nfs4_client*) ;
 int FUNC_11 (struct nfs4_client*,struct nfsd4_setclientid*,struct svc_rqst*) ;
 int FUNC_12 (struct nfs4_client*,struct nfsd_net*) ;
 int FUNC_13 (int ,int ,int) ;
 struct nfsd_net* FUNC_14 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (struct sockaddr*,char*,int) ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct nfs4_client*) ;

__be32
FUNC_21(struct svc_rqst *VAR_5, struct nfsd4_compound_state *VAR_6,
    union nfsd4_op_u *VAR_7)
{
 struct nfsd4_setclientid *VAR_8 = &VAR_7->setclientid;
 struct xdr_netobj VAR_9 = VAR_8->se_name;
 nfs4_verifier VAR_10 = VAR_8->se_verf;
 struct nfs4_client *VAR_11, *VAR_12;
 struct nfs4_client *VAR_13 = ((void*)0);
 __be32 VAR_14;
 struct nfsd_net *VAR_15 = FUNC_14(FUNC_0(VAR_5), VAR_2);

 VAR_12 = FUNC_5(VAR_9, VAR_5, &VAR_10);
 if (VAR_12 == ((void*)0))
  return VAR_4;

 FUNC_18(&VAR_15->client_lock);
 VAR_11 = FUNC_8(&VAR_9, VAR_15);
 if (VAR_11 && FUNC_2(VAR_11)) {

  VAR_14 = VAR_3;
  if (FUNC_3(VAR_11))
   goto out;
  if (!FUNC_16(&VAR_11->cl_cred, &VAR_5->rq_cred)) {
   char VAR_16[VAR_0];
   FUNC_15((struct sockaddr *) &VAR_11->cl_addr, VAR_16,
     sizeof(VAR_16));
   FUNC_6("NFSD: setclientid: string in use by client "
    "at %s\n", VAR_16);
   goto out;
  }
 }
 VAR_13 = FUNC_9(&VAR_9, VAR_15);
 if (VAR_13)
  FUNC_20(VAR_13);
 if (VAR_11 && FUNC_17(&VAR_11->cl_verifier, &VAR_10)) {

  FUNC_4(VAR_12, VAR_11);
  FUNC_12(VAR_12, VAR_15);
 } else
  ;
 VAR_12->cl_minorversion = 0;
 FUNC_11(VAR_12, VAR_8, VAR_5);
 FUNC_1(VAR_12);
 VAR_8->se_clientid.cl_boot = VAR_12->cl_clientid.cl_boot;
 VAR_8->se_clientid.cl_id = VAR_12->cl_clientid.cl_id;
 FUNC_13(VAR_8->se_confirm.data, VAR_12->cl_confirm.data, sizeof(VAR_8->se_confirm.data));
 VAR_12 = ((void*)0);
 VAR_14 = VAR_1;
out:
 FUNC_19(&VAR_15->client_lock);
 if (VAR_12)
  FUNC_10(VAR_12);
 if (VAR_13)
  FUNC_7(VAR_13);
 return VAR_14;
}
