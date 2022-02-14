
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 char* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static char *FUNC_3(struct inode *VAR_0)
{
 struct dentry *VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_1);

 return VAR_2;
}
