
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_parent; int d_inode; int * d_fsdata; TYPE_1__* d_sb; } ;
struct TYPE_2__ {scalar_t__ s_magic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct dentry*) ;

void FUNC_6(struct dentry *VAR_1)
{
 FUNC_0(VAR_1->d_sb->s_magic != VAR_0);

 VAR_1->d_fsdata = ((void*)0);
 FUNC_4(VAR_1->d_inode);
 FUNC_5(FUNC_2(VAR_1->d_parent), VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
}
