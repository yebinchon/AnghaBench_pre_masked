
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,struct dentry*,int ,int) ;
 int FUNC_1 (struct inode*,struct dentry*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0, struct dentry *VAR_1,
    umode_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 1);

 FUNC_0("create(%pd2, 0%o) = %i\n", VAR_1, VAR_2, VAR_3);
 return VAR_3;
}
