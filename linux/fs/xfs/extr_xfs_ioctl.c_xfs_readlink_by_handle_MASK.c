
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ohandle; int ohandlen; } ;
typedef TYPE_1__ xfs_fsop_handlereq_t ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,int ,int ) ;
 struct dentry* FUNC_7 (struct file*,TYPE_1__*) ;

int
FUNC_8(
 struct file *VAR_4,
 xfs_fsop_handlereq_t *VAR_5)
{
 struct dentry *VAR_6;
 __u32 VAR_7;
 int VAR_8;

 if (!FUNC_2(VAR_0))
  return -VAR_3;

 VAR_6 = FUNC_7(VAR_4, VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);


 if (!FUNC_4(VAR_6)) {
  VAR_8 = -VAR_2;
  goto out_dput;
 }

 if (FUNC_3(&VAR_7, VAR_5->ohandlen, sizeof(__u32))) {
  VAR_8 = -VAR_1;
  goto out_dput;
 }

 VAR_8 = FUNC_6(VAR_6, VAR_5->ohandle, VAR_7);

 out_dput:
 FUNC_5(VAR_6);
 return VAR_8;
}
