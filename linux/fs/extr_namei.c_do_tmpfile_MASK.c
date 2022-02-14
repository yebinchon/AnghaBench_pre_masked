
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int mnt; struct dentry* dentry; } ;
struct open_flags {int open_flag; int mode; } ;
struct nameidata {int name; } ;
struct TYPE_2__ {int mnt; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,struct dentry*,int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct file*,struct dentry*,int *) ;
 int FUNC_5 (struct path*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nameidata*,unsigned int,struct path*) ;
 int FUNC_9 (struct path*) ;
 scalar_t__ FUNC_10 (int) ;
 struct dentry* FUNC_11 (struct dentry*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct nameidata *VAR_1, unsigned VAR_2,
  const struct open_flags *VAR_3,
  struct file *VAR_4)
{
 struct dentry *VAR_5;
 struct path VAR_6;
 int VAR_7 = FUNC_8(VAR_1, VAR_2 | VAR_0, &VAR_6);
 if (FUNC_10(VAR_7))
  return VAR_7;
 VAR_7 = FUNC_7(VAR_6.mnt);
 if (FUNC_10(VAR_7))
  goto out;
 VAR_5 = FUNC_11(VAR_6.dentry, VAR_3->mode, VAR_3->open_flag);
 VAR_7 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_5))
  goto out2;
 FUNC_3(VAR_6.dentry);
 VAR_6.dentry = VAR_5;
 FUNC_2(VAR_1->name, VAR_5, 0);

 VAR_7 = FUNC_5(&VAR_6, 0, VAR_3->open_flag);
 if (VAR_7)
  goto out2;
 VAR_4->f_path.mnt = VAR_6.mnt;
 VAR_7 = FUNC_4(VAR_4, VAR_5, ((void*)0));
out2:
 FUNC_6(VAR_6.mnt);
out:
 FUNC_9(&VAR_6);
 return VAR_7;
}
