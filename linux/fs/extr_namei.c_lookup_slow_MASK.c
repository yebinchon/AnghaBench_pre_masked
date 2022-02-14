
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct dentry* FUNC_0 (struct qstr const*,struct dentry*,unsigned int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_3(const struct qstr *VAR_0,
      struct dentry *VAR_1,
      unsigned int VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 struct dentry *VAR_4;
 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_3);
 return VAR_4;
}
