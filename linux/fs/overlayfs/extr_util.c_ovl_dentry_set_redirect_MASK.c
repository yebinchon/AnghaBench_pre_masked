
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_inode {char const* redirect; } ;
struct dentry {int dummy; } ;


 struct ovl_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char const*) ;

void FUNC_3(struct dentry *VAR_0, const char *VAR_1)
{
 struct ovl_inode *VAR_2 = FUNC_0(FUNC_1(VAR_0));

 FUNC_2(VAR_2->redirect);
 VAR_2->redirect = VAR_1;
}
