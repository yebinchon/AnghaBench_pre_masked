
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int nid_t ;


 struct dentry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, nid_t *VAR_1)
{
 struct dentry *VAR_2;

 VAR_0 = FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(VAR_0);
 if (!VAR_2)
  return 0;

 *VAR_1 = FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 return 1;
}
