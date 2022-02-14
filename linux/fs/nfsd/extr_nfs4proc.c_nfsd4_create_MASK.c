
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_6__ {int ia_valid; } ;
struct nfsd4_create {int cr_type; int cr_cinfo; int cr_bmval; int * cr_acl; TYPE_3__ cr_label; TYPE_2__ cr_iattr; int cr_namelen; int cr_name; int cr_specdata2; int cr_specdata1; int cr_data; scalar_t__ cr_umask; } ;
union nfsd4_op_u {struct nfsd4_create create; } ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int dev_t ;
typedef scalar_t__ __be32 ;
struct TYPE_8__ {TYPE_1__* fs; } ;
struct TYPE_5__ {scalar_t__ umask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct nfsd4_compound_state*,int ,int ) ;
 TYPE_4__* VAR_8 ;
 int FUNC_4 (struct svc_rqst*,struct svc_fh*,int *,int ) ;
 int FUNC_5 (int *,struct svc_fh*) ;
 int FUNC_6 (struct svc_fh*,int ) ;
 int FUNC_7 (struct svc_fh*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct svc_rqst*,int *,int ,int ) ;
 int FUNC_10 (struct svc_fh*,TYPE_3__*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (struct svc_rqst*,int *,int ,int ,TYPE_2__*,int ,int ,struct svc_fh*) ;
 scalar_t__ FUNC_12 (struct svc_rqst*,int *,int ,int ,int ,struct svc_fh*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static __be32
FUNC_14(struct svc_rqst *VAR_12, struct nfsd4_compound_state *VAR_13,
      union nfsd4_op_u *VAR_14)
{
 struct nfsd4_create *VAR_15 = &VAR_14->create;
 struct svc_fh VAR_16;
 __be32 VAR_17;
 dev_t VAR_18;

 FUNC_6(&VAR_16, VAR_1);

 VAR_17 = FUNC_9(VAR_12, &VAR_13->current_fh, VAR_5, VAR_2);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_12, VAR_13, VAR_15->cr_bmval,
        VAR_9);
 if (VAR_17)
  return VAR_17;

 VAR_8->fs->umask = VAR_15->cr_umask;
 switch (VAR_15->cr_type) {
 case 129:
  VAR_17 = FUNC_12(VAR_12, &VAR_13->current_fh,
          VAR_15->cr_name, VAR_15->cr_namelen,
          VAR_15->cr_data, &VAR_16);
  break;

 case 133:
  VAR_17 = VAR_11;
  VAR_18 = FUNC_2(VAR_15->cr_specdata1, VAR_15->cr_specdata2);
  if (FUNC_0(VAR_18) != VAR_15->cr_specdata1 ||
      FUNC_1(VAR_18) != VAR_15->cr_specdata2)
   goto out_umask;
  VAR_17 = FUNC_11(VAR_12, &VAR_13->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr, VAR_3, VAR_18, &VAR_16);
  break;

 case 132:
  VAR_17 = VAR_11;
  VAR_18 = FUNC_2(VAR_15->cr_specdata1, VAR_15->cr_specdata2);
  if (FUNC_0(VAR_18) != VAR_15->cr_specdata1 ||
      FUNC_1(VAR_18) != VAR_15->cr_specdata2)
   goto out_umask;
  VAR_17 = FUNC_11(VAR_12, &VAR_13->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr,VAR_4, VAR_18, &VAR_16);
  break;

 case 128:
  VAR_17 = FUNC_11(VAR_12, &VAR_13->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr, VAR_7, 0, &VAR_16);
  break;

 case 130:
  VAR_17 = FUNC_11(VAR_12, &VAR_13->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr, VAR_6, 0, &VAR_16);
  break;

 case 131:
  VAR_15->cr_iattr.ia_valid &= ~VAR_0;
  VAR_17 = FUNC_11(VAR_12, &VAR_13->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr, VAR_5, 0, &VAR_16);
  break;

 default:
  VAR_17 = VAR_10;
 }

 if (VAR_17)
  goto out;

 if (VAR_15->cr_label.len)
  FUNC_10(&VAR_16, &VAR_15->cr_label, VAR_15->cr_bmval);

 if (VAR_15->cr_acl != ((void*)0))
  FUNC_4(VAR_12, &VAR_16, VAR_15->cr_acl,
    VAR_15->cr_bmval);

 FUNC_8(&VAR_13->current_fh);
 FUNC_13(&VAR_15->cr_cinfo, &VAR_13->current_fh);
 FUNC_5(&VAR_13->current_fh, &VAR_16);
out:
 FUNC_7(&VAR_16);
out_umask:
 VAR_8->fs->umask = 0;
 return VAR_17;
}
