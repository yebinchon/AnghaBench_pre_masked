
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct svc_rqst {int dummy; } ;
struct svc_fh {struct svc_export* fh_export; struct dentry* fh_dentry; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct svc_export {TYPE_1__ ex_path; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int fh_stale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct svc_fh*) ;
 scalar_t__ FUNC_1 (struct svc_export*,struct svc_rqst*) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct dentry*,struct svc_export*) ;
 int FUNC_3 (char*,struct dentry*,...) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,struct dentry*,int ) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,struct svc_export*,struct dentry*,int) ;
 scalar_t__ FUNC_6 (struct svc_rqst*,struct svc_fh*) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct svc_export*) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (scalar_t__) ;

__be32
FUNC_9(struct svc_rqst *VAR_5, struct svc_fh *VAR_6, umode_t VAR_7, int VAR_8)
{
 struct svc_export *VAR_9;
 struct dentry *VAR_10;
 __be32 VAR_11;

 FUNC_3("nfsd: fh_verify(%s)\n", FUNC_0(VAR_6));

 if (!VAR_6->fh_dentry) {
  VAR_11 = FUNC_6(VAR_5, VAR_6);
  if (VAR_11)
   goto out;
 }
 VAR_10 = VAR_6->fh_dentry;
 VAR_9 = VAR_6->fh_export;
 VAR_11 = FUNC_2(VAR_5, VAR_10, VAR_9);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_7(VAR_5, VAR_9);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_4(VAR_5, VAR_10, VAR_7);
 if (VAR_11)
  goto out;






 if (VAR_8 & VAR_2 || VAR_8 & VAR_0)
  goto skip_pseudoflavor_check;





 if (VAR_8 & VAR_1
   && VAR_9->ex_path.dentry == VAR_10)
  goto skip_pseudoflavor_check;

 VAR_11 = FUNC_1(VAR_9, VAR_5);
 if (VAR_11)
  goto out;

skip_pseudoflavor_check:

 VAR_11 = FUNC_5(VAR_5, VAR_9, VAR_10, VAR_8);

 if (VAR_11) {
  FUNC_3("fh_verify: %pd2 permission failure, "
   "acc=%x, error=%d\n",
   VAR_10,
   VAR_8, FUNC_8(VAR_11));
 }
out:
 if (VAR_11 == VAR_4)
  VAR_3.fh_stale++;
 return VAR_11;
}
