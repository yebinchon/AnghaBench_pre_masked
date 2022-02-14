
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {void* i_private; struct file_operations const* i_fop; } ;
struct file_operations {int dummy; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (int ,int) ;

__attribute__((used)) static struct dentry *FUNC_4(struct dentry *VAR_1,
   const char *VAR_2,
   const struct file_operations *VAR_3,
   void *VAR_4,
   int VAR_5)
{
 struct dentry *VAR_6;
 struct inode *VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_1->d_sb, VAR_0 | VAR_5);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 VAR_7->i_fop = VAR_3;
 VAR_7->i_private = VAR_4;

 FUNC_0(VAR_6, VAR_7);
 return VAR_6;
}
