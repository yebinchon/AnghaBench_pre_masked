
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {int private_data; TYPE_1__ f_path; } ;
struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct configfs_dirent*) ;
 int FUNC_3 (struct configfs_dirent*,int *,int ,int *) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 struct dentry * VAR_3 = VAR_2->f_path.dentry;
 struct configfs_dirent * VAR_4 = VAR_3->d_fsdata;
 int VAR_5;

 FUNC_5(FUNC_4(VAR_3));




 VAR_5 = -VAR_0;
 if (FUNC_2(VAR_4)) {
  VAR_2->private_data = FUNC_3(VAR_4, ((void*)0), 0, ((void*)0));
  if (FUNC_0(VAR_2->private_data))
   VAR_5 = FUNC_1(VAR_2->private_data);
  else
   VAR_5 = 0;
 }
 FUNC_6(FUNC_4(VAR_3));

 return VAR_5;
}
