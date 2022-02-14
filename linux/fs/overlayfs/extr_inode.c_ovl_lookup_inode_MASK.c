
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct inode* FUNC_0 (int ) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (struct super_block*,unsigned long,int ,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int FUNC_4 (struct inode*,struct dentry*,struct dentry*,int) ;

struct inode *FUNC_5(struct super_block *VAR_2, struct dentry *VAR_3,
          bool VAR_4)
{
 struct inode *VAR_5, *VAR_6 = FUNC_1(VAR_3);

 VAR_5 = FUNC_2(VAR_2, (unsigned long) VAR_6, VAR_1, VAR_6);
 if (!VAR_5)
  return ((void*)0);

 if (!FUNC_4(VAR_5, VAR_4 ? ((void*)0) : VAR_3,
         VAR_4 ? VAR_3 : ((void*)0), 0)) {
  FUNC_3(VAR_5);
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
