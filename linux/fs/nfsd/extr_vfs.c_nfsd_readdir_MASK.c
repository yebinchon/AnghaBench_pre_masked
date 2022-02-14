
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_vers; } ;
struct svc_fh {int dummy; } ;
struct readdir_cd {int dummy; } ;
struct file {int dummy; } ;
typedef int nfsd_filldir_t ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct file*,int ,struct readdir_cd*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct svc_fh*,int ,int,struct file**) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct file*,scalar_t__,int ) ;

__be32
FUNC_5(struct svc_rqst *VAR_7, struct svc_fh *VAR_8, loff_t *VAR_9,
      struct readdir_cd *VAR_10, nfsd_filldir_t VAR_11)
{
 __be32 VAR_12;
 struct file *VAR_13;
 loff_t VAR_14 = *VAR_9;
 int VAR_15 = VAR_1;


 if (VAR_7->rq_vers > 2)
  VAR_15 |= VAR_0;

 VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_3, VAR_15, &VAR_13);
 if (VAR_12)
  goto out;

 VAR_14 = FUNC_4(VAR_13, VAR_14, VAR_2);
 if (VAR_14 < 0) {
  VAR_12 = FUNC_3((int)VAR_14);
  goto out_close;
 }

 VAR_12 = FUNC_1(VAR_13, VAR_11, VAR_10, VAR_9);

 if (VAR_12 == VAR_5 || VAR_12 == VAR_6)
  VAR_12 = VAR_4;
out_close:
 FUNC_0(VAR_13);
out:
 return VAR_12;
}
