
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct dentry {int d_inode; struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int s_frag; } ;
struct TYPE_2__ {int ca_mode; } ;
struct configfs_bin_attribute {TYPE_1__ cb_attr; } ;
struct config_item {struct dentry* ci_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct configfs_dirent*,int *,void*,int,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct config_item *VAR_4,
  const struct configfs_bin_attribute *VAR_5)
{
 struct dentry *VAR_6 = VAR_4->ci_dentry;
 struct configfs_dirent *VAR_7 = VAR_6->d_fsdata;
 umode_t VAR_8 = (VAR_5->cb_attr.ca_mode & VAR_2) | VAR_3;
 int VAR_9 = 0;

 FUNC_1(VAR_6->d_inode, VAR_1);
 VAR_9 = FUNC_0(VAR_7, ((void*)0), (void *) VAR_5, VAR_8,
         VAR_0, VAR_7->s_frag);
 FUNC_2(VAR_6->d_inode);

 return VAR_9;
}
