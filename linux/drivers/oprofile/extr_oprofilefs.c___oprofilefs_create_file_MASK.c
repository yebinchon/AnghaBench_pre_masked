
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {void* i_private; struct file_operations const* i_fop; } ;
struct file_operations {int dummy; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct inode* FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct dentry *VAR_2, char const *VAR_3,
 const struct file_operations *VAR_4, int VAR_5, void *VAR_6)
{
 struct dentry *VAR_7;
 struct inode *VAR_8;

 if (!VAR_2)
  return -VAR_0;

 FUNC_4(FUNC_2(VAR_2));
 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_5(FUNC_2(VAR_2));
  return -VAR_0;
 }
 VAR_8 = FUNC_6(VAR_2->d_sb, VAR_1 | VAR_5);
 if (!VAR_8) {
  FUNC_3(VAR_7);
  FUNC_5(FUNC_2(VAR_2));
  return -VAR_0;
 }
 VAR_8->i_fop = VAR_4;
 VAR_8->i_private = VAR_6;
 FUNC_0(VAR_7, VAR_8);
 FUNC_5(FUNC_2(VAR_2));
 return 0;
}
