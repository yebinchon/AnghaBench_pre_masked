
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static void
FUNC_3(struct dentry *VAR_0)
{
 struct inode *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 && FUNC_0(VAR_1->i_mode))
  FUNC_2(VAR_1);
}
