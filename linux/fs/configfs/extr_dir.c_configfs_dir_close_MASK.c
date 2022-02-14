
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {struct configfs_dirent* private_data; TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
struct configfs_dirent {int s_sibling; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct configfs_dirent*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 struct dentry * VAR_3 = VAR_2->f_path.dentry;
 struct configfs_dirent * VAR_4 = VAR_2->private_data;

 FUNC_1(FUNC_0(VAR_3));
 FUNC_5(&VAR_0);
 FUNC_3(&VAR_4->s_sibling);
 FUNC_6(&VAR_0);
 FUNC_2(FUNC_0(VAR_3));

 FUNC_4(VAR_4);

 return 0;
}
