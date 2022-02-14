
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,struct dentry*,struct dentry*,int) ;
 int FUNC_1 (struct dentry*,struct inode*,struct dentry*,int *) ;

__attribute__((used)) static inline int FUNC_2(struct dentry *VAR_0, struct inode *VAR_1,
         struct dentry *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0));

 FUNC_0("link(%pd2, %pd2) = %i\n", VAR_0, VAR_2, VAR_3);
 return VAR_3;
}
