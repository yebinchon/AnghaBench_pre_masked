
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,struct dentry*,struct dentry*,int) ;
 int FUNC_1 (struct inode*,struct dentry*,struct inode*,struct dentry*,int *,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0, struct dentry *VAR_1,
    struct inode *VAR_2, struct dentry *VAR_3,
    unsigned int VAR_4)
{
 int VAR_5;

 FUNC_0("rename(%pd2, %pd2, 0x%x)\n", VAR_1, VAR_3, VAR_4);
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0), VAR_4);
 if (VAR_5) {
  FUNC_0("...rename(%pd2, %pd2, ...) = %i\n",
    VAR_1, VAR_3, VAR_5);
 }
 return VAR_5;
}
