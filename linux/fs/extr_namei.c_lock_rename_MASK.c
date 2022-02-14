
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_inode; TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_vfs_rename_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (struct dentry*,struct dentry*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

struct dentry *FUNC_3(struct dentry *VAR_3, struct dentry *VAR_4)
{
 struct dentry *VAR_5;

 if (VAR_3 == VAR_4) {
  FUNC_1(VAR_3->d_inode, VAR_1);
  return ((void*)0);
 }

 FUNC_2(&VAR_3->d_sb->s_vfs_rename_mutex);

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_4->d_inode, VAR_1);
  FUNC_1(VAR_3->d_inode, VAR_0);
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_3->d_inode, VAR_1);
  FUNC_1(VAR_4->d_inode, VAR_0);
  return VAR_5;
 }

 FUNC_1(VAR_3->d_inode, VAR_1);
 FUNC_1(VAR_4->d_inode, VAR_2);
 return ((void*)0);
}
