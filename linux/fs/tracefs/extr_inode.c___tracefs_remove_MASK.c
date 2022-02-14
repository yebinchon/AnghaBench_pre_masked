
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_5__ {int i_mode; } ;



 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (TYPE_1__*,struct dentry*) ;
 int FUNC_4 (TYPE_1__*,struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (TYPE_1__*,struct dentry*) ;
 int FUNC_7 (TYPE_1__*,struct dentry*) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_1, struct dentry *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_5(VAR_1)) {
  if (VAR_1->d_inode) {
   FUNC_1(VAR_1);
   switch (VAR_1->d_inode->i_mode & VAR_0) {
   case 128:
    VAR_3 = FUNC_6(VAR_2->d_inode, VAR_1);
    if (!VAR_3)
     FUNC_3(VAR_2->d_inode, VAR_1);
    break;
   default:
    FUNC_7(VAR_2->d_inode, VAR_1);
    FUNC_4(VAR_2->d_inode, VAR_1);
    break;
   }
   if (!VAR_3)
    FUNC_0(VAR_1);
   FUNC_2(VAR_1);
  }
 }
 return VAR_3;
}
