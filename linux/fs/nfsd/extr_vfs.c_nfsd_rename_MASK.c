
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_locked; TYPE_2__* fh_export; struct dentry* fh_dentry; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {scalar_t__ mnt; scalar_t__ dentry; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_6 ;
 int FUNC_2 (struct svc_fh*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct svc_fh*) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_8 (struct svc_fh*) ;
 int FUNC_9 (struct svc_fh*) ;
 int FUNC_10 (struct svc_fh*) ;
 scalar_t__ FUNC_11 (char*,int) ;
 struct dentry* FUNC_12 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_13 (char*,struct dentry*,int) ;
 int FUNC_14 (struct dentry*) ;
 scalar_t__ FUNC_15 (struct dentry*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct dentry*,struct dentry*) ;
 int FUNC_18 (struct inode*,struct dentry*,struct inode*,struct dentry*,int *,int ) ;

__be32
FUNC_19(struct svc_rqst *VAR_8, struct svc_fh *VAR_9, char *VAR_10, int VAR_11,
       struct svc_fh *VAR_12, char *VAR_13, int VAR_14)
{
 struct dentry *VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19;
 struct inode *VAR_20, *VAR_21;
 __be32 VAR_22;
 int VAR_23;
 bool VAR_24 = 0;

 VAR_22 = FUNC_7(VAR_8, VAR_9, VAR_6, VAR_5);
 if (VAR_22)
  goto out;
 VAR_22 = FUNC_7(VAR_8, VAR_12, VAR_6, VAR_4);
 if (VAR_22)
  goto out;

 VAR_15 = VAR_9->fh_dentry;
 VAR_20 = FUNC_3(VAR_15);

 VAR_16 = VAR_12->fh_dentry;
 VAR_21 = FUNC_3(VAR_16);

 VAR_22 = VAR_7;
 if (!VAR_11 || FUNC_11(VAR_10, VAR_11) || !VAR_14 || FUNC_11(VAR_13, VAR_14))
  goto out;

retry:
 VAR_23 = FUNC_8(VAR_9);
 if (VAR_23) {
  VAR_22 = FUNC_16(VAR_23);
  goto out;
 }



 VAR_19 = FUNC_12(VAR_16, VAR_15);
 VAR_9->fh_locked = VAR_12->fh_locked = 1;
 FUNC_10(VAR_9);
 FUNC_10(VAR_12);

 VAR_17 = FUNC_13(VAR_10, VAR_15, VAR_11);
 VAR_23 = FUNC_1(VAR_17);
 if (FUNC_0(VAR_17))
  goto out_nfserr;

 VAR_23 = -VAR_1;
 if (FUNC_4(VAR_17))
  goto out_dput_old;
 VAR_23 = -VAR_0;
 if (VAR_17 == VAR_19)
  goto out_dput_old;

 VAR_18 = FUNC_13(VAR_13, VAR_16, VAR_14);
 VAR_23 = FUNC_1(VAR_18);
 if (FUNC_0(VAR_18))
  goto out_dput_old;
 VAR_23 = -VAR_2;
 if (VAR_18 == VAR_19)
  goto out_dput_new;

 VAR_23 = -VAR_3;
 if (VAR_9->fh_export->ex_path.mnt != VAR_12->fh_export->ex_path.mnt)
  goto out_dput_new;
 if (VAR_9->fh_export->ex_path.dentry != VAR_12->fh_export->ex_path.dentry)
  goto out_dput_new;

 if (FUNC_15(VAR_18)) {
  VAR_24 = 1;
  goto out_dput_old;
 } else {
  VAR_23 = FUNC_18(VAR_20, VAR_17, VAR_21, VAR_18, ((void*)0), 0);
  if (!VAR_23) {
   VAR_23 = FUNC_2(VAR_12);
   if (!VAR_23)
    VAR_23 = FUNC_2(VAR_9);
  }
 }
 out_dput_new:
 FUNC_5(VAR_18);
 out_dput_old:
 FUNC_5(VAR_17);
 out_nfserr:
 VAR_22 = FUNC_16(VAR_23);





 if (!VAR_24) {
  FUNC_9(VAR_9);
  FUNC_9(VAR_12);
 }
 FUNC_17(VAR_16, VAR_15);
 VAR_9->fh_locked = VAR_12->fh_locked = 0;
 FUNC_6(VAR_9);







 if (VAR_24) {
  VAR_24 = 0;
  FUNC_14(VAR_18);
  FUNC_5(VAR_18);
  goto retry;
 }
out:
 return VAR_22;
}
