
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; scalar_t__ len; } ;
struct nfsd4_open {int op_claim_type; scalar_t__ op_xdr_error; scalar_t__ op_created; TYPE_4__* op_openowner; int op_clientid; scalar_t__ op_create; TYPE_1__ op_fname; } ;
union nfsd4_op_u {struct nfsd4_open open; } ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_handle; } ;
struct nfsd_net {int somebody_reclaimed; } ;
struct nfsd4_compound_state {struct svc_fh current_fh; TYPE_5__* session; } ;
struct nfs4_replay {int rp_openfh; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_10__ {TYPE_2__* se_client; } ;
struct TYPE_8__ {struct nfs4_replay so_replay; } ;
struct TYPE_9__ {int oo_flags; TYPE_3__ oo_owner; } ;
struct TYPE_7__ {int cl_flags; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,struct nfsd4_compound_state*,struct nfsd4_open*) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,struct nfsd4_compound_state*,struct nfsd4_open*,struct svc_fh**) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct svc_fh*,struct svc_fh*) ;
 int FUNC_9 (struct svc_fh*) ;
 scalar_t__ FUNC_10 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_11 (struct svc_fh*) ;
 struct nfsd_net* FUNC_12 (struct net*,int ) ;
 scalar_t__ FUNC_13 (int *,struct nfsd4_compound_state*,struct nfsd_net*) ;
 int FUNC_14 (struct nfsd4_compound_state*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct svc_rqst*,struct nfsd4_compound_state*,struct nfsd4_open*) ;
 int FUNC_16 (struct nfsd4_compound_state*,struct nfsd4_open*) ;
 scalar_t__ FUNC_17 (struct nfsd4_compound_state*) ;
 scalar_t__ FUNC_18 (struct nfsd4_compound_state*,struct nfsd4_open*,struct nfsd_net*) ;
 scalar_t__ FUNC_19 (struct svc_rqst*,struct svc_fh*,struct nfsd4_open*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_20 (struct net*) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static __be32
FUNC_22(struct svc_rqst *VAR_9, struct nfsd4_compound_state *VAR_10,
    union nfsd4_op_u *VAR_11)
{
 struct nfsd4_open *VAR_12 = &VAR_11->open;
 __be32 VAR_13;
 struct svc_fh *VAR_14 = ((void*)0);
 struct net *VAR_15 = FUNC_0(VAR_9);
 struct nfsd_net *VAR_16 = FUNC_12(VAR_15, VAR_3);
 bool VAR_17 = 0;

 FUNC_6("NFSD: nfsd4_open filename %.*s op_openowner %p\n",
  (int)VAR_12->op_fname.len, VAR_12->op_fname.data,
  VAR_12->op_openowner);


 if (VAR_12->op_create && VAR_12->op_claim_type != 129)
  return VAR_5;

 VAR_12->op_created = 0;




 if (FUNC_17(VAR_10) &&
     !FUNC_21(VAR_1,
        &VAR_10->session->se_client->cl_flags) &&
     VAR_12->op_claim_type != 128)
  return VAR_4;

 if (FUNC_17(VAR_10))
  FUNC_3(&VAR_12->op_clientid, VAR_10->session);


 VAR_13 = FUNC_18(VAR_10, VAR_12, VAR_16);
 if (VAR_13 == VAR_8) {
  struct nfs4_replay *VAR_18 = &VAR_12->op_openowner->oo_owner.so_replay;
  FUNC_9(&VAR_10->current_fh);
  FUNC_7(&VAR_10->current_fh.fh_handle,
    &VAR_18->rp_openfh);
  VAR_13 = FUNC_10(VAR_9, &VAR_10->current_fh, 0, VAR_2);
  if (VAR_13)
   FUNC_6("nfsd4_open: replay failed"
    " restoring previous filehandle\n");
  else
   VAR_13 = VAR_8;
 }
 if (VAR_13)
  goto out;
 if (VAR_12->op_xdr_error) {
  VAR_13 = VAR_12->op_xdr_error;
  goto out;
 }

 VAR_13 = FUNC_15(VAR_9, VAR_10, VAR_12);
 if (VAR_13)
  goto out;



 VAR_13 = VAR_4;
 if (FUNC_20(VAR_15) && VAR_12->op_claim_type != 128)
  goto out;
 VAR_13 = VAR_6;
 if (!FUNC_20(VAR_15) && VAR_12->op_claim_type == 128)
  goto out;

 switch (VAR_12->op_claim_type) {
  case 134:
  case 129:
   VAR_13 = FUNC_5(VAR_9, VAR_10, VAR_12, &VAR_14);
   if (VAR_13)
    goto out;
   break;
  case 128:
   VAR_13 = FUNC_13(&VAR_12->op_clientid,
        VAR_10, VAR_16);
   if (VAR_13)
    goto out;
   VAR_12->op_openowner->oo_flags |= VAR_0;
   VAR_17 = 1;

  case 130:
  case 132:
   VAR_13 = FUNC_4(VAR_9, VAR_10, VAR_12);
   if (VAR_13)
    goto out;
   VAR_14 = &VAR_10->current_fh;
   break;
  case 131:
              case 133:
   FUNC_6("NFSD: unsupported OPEN claim type %d\n",
    VAR_12->op_claim_type);
   VAR_13 = VAR_7;
   goto out;
  default:
   FUNC_6("NFSD: Invalid OPEN claim type %d\n",
    VAR_12->op_claim_type);
   VAR_13 = VAR_5;
   goto out;
 }





 VAR_13 = FUNC_19(VAR_9, VAR_14, VAR_12);
 FUNC_1(VAR_13 && VAR_12->op_created,
      "nfsd4_process_open2 failed to open newly-created file! status=%u\n",
      FUNC_2(VAR_13));
 if (VAR_17 && !VAR_13)
  VAR_16->somebody_reclaimed = 1;
out:
 if (VAR_14 && VAR_14 != &VAR_10->current_fh) {
  FUNC_8(&VAR_10->current_fh, VAR_14);
  FUNC_9(VAR_14);
  FUNC_11(VAR_14);
 }
 FUNC_16(VAR_10, VAR_12);
 FUNC_14(VAR_10, VAR_13);
 return VAR_13;
}
