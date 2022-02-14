
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ia_valid; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct nfsd4_setattr {TYPE_1__ sa_iattr; TYPE_2__ sa_label; int * sa_acl; int sa_bmval; int sa_stateid; } ;
union nfsd4_op_u {struct nfsd4_setattr setattr; } ;
typedef int time_t ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct nfsd4_compound_state*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,struct nfsd4_compound_state*,int *,int *,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (struct svc_rqst*,int *,int *) ;
 scalar_t__ FUNC_6 (struct svc_rqst*,int *,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (struct svc_rqst*,int *,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static __be32
FUNC_9(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
       union nfsd4_op_u *VAR_6)
{
 struct nfsd4_setattr *VAR_7 = &VAR_6->setattr;
 __be32 VAR_8 = VAR_2;
 int VAR_9;

 if (VAR_7->sa_iattr.ia_valid & VAR_0) {
  VAR_8 = FUNC_4(VAR_4, VAR_5,
    &VAR_5->current_fh, &VAR_7->sa_stateid,
    VAR_1, ((void*)0));
  if (VAR_8) {
   FUNC_1("NFSD: nfsd4_setattr: couldn't process stateid!\n");
   return VAR_8;
  }
 }
 VAR_9 = FUNC_3(&VAR_5->current_fh);
 if (VAR_9)
  return FUNC_8(VAR_9);
 VAR_8 = VAR_2;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_7->sa_bmval,
        VAR_3);
 if (VAR_8)
  goto out;

 if (VAR_7->sa_acl != ((void*)0))
  VAR_8 = FUNC_5(VAR_4, &VAR_5->current_fh,
         VAR_7->sa_acl);
 if (VAR_8)
  goto out;
 if (VAR_7->sa_label.len)
  VAR_8 = FUNC_6(VAR_4, &VAR_5->current_fh,
    &VAR_7->sa_label);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_7(VAR_4, &VAR_5->current_fh, &VAR_7->sa_iattr,
    0, (time_t)0);
out:
 FUNC_2(&VAR_5->current_fh);
 return VAR_8;
}
