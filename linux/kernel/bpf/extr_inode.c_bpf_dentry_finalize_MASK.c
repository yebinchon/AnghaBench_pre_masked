
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mtime; int i_ctime; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static void FUNC_3(struct dentry *VAR_0, struct inode *VAR_1,
    struct inode *VAR_2)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0);

 VAR_2->i_mtime = FUNC_0(VAR_2);
 VAR_2->i_ctime = VAR_2->i_mtime;
}
