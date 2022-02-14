
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef scalar_t__ time_t ;
struct svc_rqst {int dummy; } ;
struct svc_fh {struct dentry* fh_dentry; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct inode {TYPE_1__ i_ctime; int i_mode; } ;
struct iattr {int ia_valid; int ia_size; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct svc_fh*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct svc_fh*) ;
 int FUNC_4 (struct svc_fh*) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,struct svc_fh*,int ,int) ;
 int FUNC_6 (struct svc_fh*) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct svc_fh*,struct iattr*) ;
 int FUNC_8 (struct inode*,struct iattr*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct dentry*,struct iattr*,int *) ;
 int FUNC_11 (struct inode*) ;

__be32
FUNC_12(struct svc_rqst *VAR_12, struct svc_fh *VAR_13, struct iattr *VAR_14,
      int VAR_15, time_t VAR_16)
{
 struct dentry *VAR_17;
 struct inode *VAR_18;
 int VAR_19 = VAR_8;
 umode_t VAR_20 = 0;
 __be32 VAR_21;
 int VAR_22;
 bool VAR_23;
 bool VAR_24 = (VAR_14->ia_valid & VAR_6);

 if (VAR_14->ia_valid & VAR_6) {
  VAR_19 |= VAR_9|VAR_7;
  VAR_20 = VAR_10;
 }
 if (VAR_14->ia_valid & (VAR_0 | VAR_4)) {
  VAR_19 |= VAR_7;
  if (!(VAR_14->ia_valid & (VAR_1 | VAR_5)))
   VAR_19 |= VAR_9;
 }


 VAR_23 = !VAR_13->fh_dentry;


 VAR_21 = FUNC_5(VAR_12, VAR_13, VAR_20, VAR_19);
 if (VAR_21)
  return VAR_21;
 if (VAR_23) {
  VAR_22 = FUNC_6(VAR_13);
  if (VAR_22)
   goto out;
 }

 VAR_17 = VAR_13->fh_dentry;
 VAR_18 = FUNC_2(VAR_17);


 if (FUNC_0(VAR_18->i_mode))
  VAR_14->ia_valid &= ~VAR_3;

 if (!VAR_14->ia_valid)
  return 0;

 FUNC_8(VAR_18, VAR_14);

 if (VAR_15 && VAR_16 != VAR_18->i_ctime.tv_sec)
  return VAR_11;
 if (VAR_24) {
  VAR_21 = FUNC_7(VAR_12, VAR_13, VAR_14);
  if (VAR_21)
   return VAR_21;
 }

 FUNC_3(VAR_13);
 if (VAR_24) {







  struct iattr VAR_25 = {
   .ia_valid = VAR_6 | VAR_2 | VAR_4,
   .ia_size = VAR_14->ia_size,
  };

  VAR_22 = FUNC_10(VAR_17, &VAR_25, ((void*)0));
  if (VAR_22)
   goto out_unlock;
  VAR_14->ia_valid &= ~VAR_6;






  if ((VAR_14->ia_valid & ~VAR_4) == 0)
   goto out_unlock;
 }

 VAR_14->ia_valid |= VAR_2;
 VAR_22 = FUNC_10(VAR_17, VAR_14, ((void*)0));

out_unlock:
 FUNC_4(VAR_13);
 if (VAR_24)
  FUNC_11(VAR_18);
out:
 if (!VAR_22)
  VAR_22 = FUNC_1(VAR_13);
 return FUNC_9(VAR_22);
}
