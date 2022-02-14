
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {scalar_t__ ns_cno; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_root {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,struct nilfs_root*,int ) ;
 scalar_t__ FUNC_4 (struct the_nilfs*) ;
 struct nilfs_root* FUNC_5 (struct the_nilfs*,scalar_t__) ;
 int FUNC_6 (struct nilfs_root*) ;
 int FUNC_7 (struct dentry*) ;

int FUNC_8(struct super_block *VAR_1, __u64 VAR_2)
{
 struct the_nilfs *VAR_3 = VAR_1->s_fs_info;
 struct nilfs_root *VAR_4;
 struct inode *VAR_5;
 struct dentry *VAR_6;
 int VAR_7;

 if (VAR_2 > VAR_3->ns_cno)
  return 0;

 if (VAR_2 >= FUNC_4(VAR_3))
  return 1;

 VAR_7 = 0;
 VAR_4 = FUNC_5(VAR_3, VAR_2);
 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_0);
  if (VAR_5) {
   VAR_6 = FUNC_0(VAR_5);
   if (VAR_6) {
    VAR_7 = FUNC_7(VAR_6);
    FUNC_1(VAR_6);
   }
   FUNC_2(VAR_5);
  }
  FUNC_6(VAR_4);
 }
 return VAR_7;
}
