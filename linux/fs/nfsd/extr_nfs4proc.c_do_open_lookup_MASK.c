
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct nfsd4_open {int* op_bmval; scalar_t__ op_claim_type; int op_cinfo; int op_created; int * op_acl; TYPE_3__ op_fname; int op_createmode; TYPE_4__ op_label; int op_truncate; TYPE_1__ op_verf; int op_iattr; scalar_t__ op_umask; scalar_t__ op_create; } ;
struct nfsd4_compound_state {struct svc_fh current_fh; } ;
typedef scalar_t__ __be32 ;
struct TYPE_10__ {TYPE_2__* fs; } ;
struct TYPE_7__ {scalar_t__ umask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*,int ,int ,int *,struct svc_fh*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,struct svc_fh*,struct nfsd4_open*,int) ;
 int FUNC_2 (struct svc_rqst*,struct svc_fh*,int *,int*) ;
 int FUNC_3 (struct svc_fh*,int ) ;
 scalar_t__ FUNC_4 (struct nfsd4_open*) ;
 struct svc_fh* FUNC_5 (int,int ) ;
 int FUNC_6 (struct svc_fh*,TYPE_4__*,int*) ;
 int FUNC_7 (struct nfsd4_compound_state*,struct nfsd4_open*,struct svc_fh*) ;
 scalar_t__ FUNC_8 (struct svc_fh*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct svc_rqst*,struct svc_fh*,int ,int ,struct svc_fh*) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int *,struct svc_fh*) ;

__attribute__((used)) static __be32
FUNC_12(struct svc_rqst *VAR_9, struct nfsd4_compound_state *VAR_10, struct nfsd4_open *VAR_11, struct svc_fh **VAR_12)
{
 struct svc_fh *VAR_13 = &VAR_10->current_fh;
 int VAR_14;
 __be32 VAR_15;

 *VAR_12 = FUNC_5(sizeof(struct svc_fh), VAR_2);
 if (!*VAR_12)
  return VAR_8;
 FUNC_3(*VAR_12, VAR_3);
 VAR_11->op_truncate = 0;

 if (VAR_11->op_create) {
  VAR_7->fs->umask = VAR_11->op_umask;
  VAR_15 = FUNC_0(VAR_9, VAR_13, VAR_11->op_fname.data,
     VAR_11->op_fname.len, &VAR_11->op_iattr,
     *VAR_12, VAR_11->op_createmode,
     (u32 *)VAR_11->op_verf.data,
     &VAR_11->op_truncate, &VAR_11->op_created);
  VAR_7->fs->umask = 0;

  if (!VAR_15 && VAR_11->op_label.len)
   FUNC_6(*VAR_12, &VAR_11->op_label, VAR_11->op_bmval);






  if (FUNC_9(VAR_11->op_createmode) && VAR_15 == 0)
   VAR_11->op_bmval[1] |= (VAR_0 |
      VAR_1);
 } else






  VAR_15 = FUNC_10(VAR_9, VAR_13,
         VAR_11->op_fname.data, VAR_11->op_fname.len, *VAR_12);
 if (VAR_15)
  goto out;
 VAR_15 = FUNC_8(*VAR_12);
 if (VAR_15)
  goto out;

 if (FUNC_4(VAR_11) && VAR_11->op_acl != ((void*)0))
  FUNC_2(VAR_9, *VAR_12, VAR_11->op_acl, VAR_11->op_bmval);

 FUNC_7(VAR_10, VAR_11, *VAR_12);
 VAR_14 = VAR_5;
 if (VAR_11->op_created ||
   VAR_11->op_claim_type == VAR_4)
  VAR_14 |= VAR_6;
 VAR_15 = FUNC_1(VAR_9, *VAR_12, VAR_11, VAR_14);
 FUNC_11(&VAR_11->op_cinfo, VAR_13);
out:
 return VAR_15;
}
