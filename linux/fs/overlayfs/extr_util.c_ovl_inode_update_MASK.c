
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {struct inode* i_private; int i_ino; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* __upperdentry; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,unsigned long) ;
 struct inode* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 () ;

void FUNC_6(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(FUNC_0(VAR_0)->__upperdentry);




 FUNC_5();
 FUNC_0(VAR_0)->__upperdentry = VAR_1;
 if (FUNC_4(VAR_0)) {
  if (!VAR_0->i_ino)
   VAR_0->i_ino = VAR_2->i_ino;
  VAR_0->i_private = VAR_2;
  FUNC_2(VAR_0, (unsigned long) VAR_2);
 }
}
