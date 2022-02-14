
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jbd2_inode {int dummy; } ;
struct inode {int i_lock; int i_sb; } ;
struct ext4_inode_info {struct jbd2_inode* jinode; } ;
struct TYPE_2__ {int s_journal; } ;


 int VAR_0 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 struct jbd2_inode* FUNC_2 (int ) ;
 int FUNC_3 (struct jbd2_inode*) ;
 int FUNC_4 (struct jbd2_inode*,struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct inode *VAR_2)
{
 struct ext4_inode_info *VAR_3 = FUNC_0(VAR_2);
 struct jbd2_inode *VAR_4;

 if (VAR_3->jinode || !FUNC_1(VAR_2->i_sb)->s_journal)
  return 0;

 VAR_4 = FUNC_2(VAR_1);
 FUNC_5(&VAR_2->i_lock);
 if (!VAR_3->jinode) {
  if (!VAR_4) {
   FUNC_6(&VAR_2->i_lock);
   return -VAR_0;
  }
  VAR_3->jinode = VAR_4;
  FUNC_4(VAR_3->jinode, VAR_2);
  VAR_4 = ((void*)0);
 }
 FUNC_6(&VAR_2->i_lock);
 if (FUNC_7(VAR_4 != ((void*)0)))
  FUNC_3(VAR_4);
 return 0;
}
