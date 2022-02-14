
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; TYPE_2__* fh_export; } ;
struct path {int dentry; int mnt; } ;
struct inode {int i_fop; int i_mode; } ;
struct file {int f_mode; } ;
typedef int __be32 ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct inode* FUNC_5 (int ) ;
 struct file* FUNC_6 (struct path*,int,int ) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*,int) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int) ;
 int VAR_9 ;
 int FUNC_11 (int) ;

__attribute__((used)) static __be32
FUNC_12(struct svc_rqst *VAR_10, struct svc_fh *VAR_11, umode_t VAR_12,
   int VAR_13, struct file **VAR_14)
{
 struct path VAR_15;
 struct inode *VAR_16;
 struct file *VAR_17;
 int VAR_18 = VAR_6|VAR_5;
 __be32 VAR_19;
 int VAR_20 = 0;

 VAR_15.mnt = VAR_11->fh_export->ex_path.mnt;
 VAR_15.dentry = VAR_11->fh_dentry;
 VAR_16 = FUNC_5(VAR_15.dentry);




 VAR_19 = VAR_9;
 if (FUNC_0(VAR_16) && (VAR_13 & VAR_4))
  goto out;





 if (FUNC_3((VAR_16)->i_mode) && FUNC_9(VAR_16))
  goto out;

 if (!VAR_16->i_fop)
  goto out;

 VAR_20 = FUNC_10(VAR_16, VAR_13);
 if (VAR_20)
  goto out_nfserr;

 if (VAR_13 & VAR_4) {
  if (VAR_13 & VAR_3)
   VAR_18 = VAR_7|VAR_5;
  else
   VAR_18 = VAR_8|VAR_5;
 }

 VAR_17 = FUNC_6(&VAR_15, VAR_18, FUNC_4());
 if (FUNC_1(VAR_17)) {
  VAR_20 = FUNC_2(VAR_17);
  goto out_nfserr;
 }

 VAR_20 = FUNC_8(VAR_17, VAR_13);
 if (VAR_20) {
  FUNC_7(VAR_17);
  goto out_nfserr;
 }

 if (VAR_13 & VAR_2)
  VAR_17->f_mode |= VAR_1;
 else
  VAR_17->f_mode |= VAR_0;

 *VAR_14 = VAR_17;
out_nfserr:
 VAR_19 = FUNC_11(VAR_20);
out:
 return VAR_19;
}
