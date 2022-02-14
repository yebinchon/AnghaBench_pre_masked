
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_flags; int i_ino; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int opencnt; struct inode* rsrc_inode; } ;
struct TYPE_3__ {int hidden_dir; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct file *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->i_sb;

 if (FUNC_1(VAR_1))
  VAR_1 = FUNC_0(VAR_1)->rsrc_inode;
 if (FUNC_3(&FUNC_0(VAR_1)->opencnt)) {
  FUNC_7(VAR_1);
  FUNC_6(VAR_1);
  if (VAR_1->i_flags & VAR_0) {
   FUNC_4(VAR_1->i_ino,
        FUNC_2(VAR_3)->hidden_dir, ((void*)0));
   FUNC_5(VAR_1);
  }
  FUNC_8(VAR_1);
 }
 return 0;
}
