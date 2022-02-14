
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static inline int FUNC_5(struct dentry *VAR_0, struct inode *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0, VAR_1);

 if (!VAR_2) {
  FUNC_0(VAR_0, VAR_1);
  return 0;
 }
 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 return VAR_2;
}
