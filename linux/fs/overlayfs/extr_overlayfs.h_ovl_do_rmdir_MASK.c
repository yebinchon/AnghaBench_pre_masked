
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,struct dentry*,int) ;
 int FUNC_1 (struct inode*,struct dentry*) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0, struct dentry *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);

 FUNC_0("rmdir(%pd2) = %i\n", VAR_1, VAR_2);
 return VAR_2;
}
