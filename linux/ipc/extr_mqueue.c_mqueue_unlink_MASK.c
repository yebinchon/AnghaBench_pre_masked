
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; int i_atime; int i_mtime; int i_ctime; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_2);

 VAR_1->i_ctime = VAR_1->i_mtime = VAR_1->i_atime = FUNC_0(VAR_1);
 VAR_1->i_size -= VAR_0;
 FUNC_3(VAR_3);
 FUNC_2(VAR_2);
 return 0;
}
