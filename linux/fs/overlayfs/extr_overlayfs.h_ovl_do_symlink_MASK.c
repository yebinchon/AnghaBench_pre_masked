
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,char const*,struct dentry*,int) ;
 int FUNC_1 (struct inode*,struct dentry*,char const*) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0, struct dentry *VAR_1,
     const char *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 FUNC_0("symlink(\"%s\", %pd2) = %i\n", VAR_2, VAR_1, VAR_3);
 return VAR_3;
}
