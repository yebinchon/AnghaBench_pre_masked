
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*,struct dentry*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1, struct dentry *VAR_2,
     struct inode **VAR_3, const char *VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6) {
  if (VAR_6 == -VAR_0)
   FUNC_2("overlayfs: conflicting %s path\n", VAR_4);
  return VAR_6;
 }

 *VAR_3 = VAR_5;
 return 0;
}
