
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_sb_list; int i_lock; scalar_t__ i_state; } ;


 int FUNC_0 (int *) ;
 struct inode* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct inode *FUNC_4(struct super_block *VAR_0)
{
 struct inode *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_2(&VAR_1->i_lock);
  VAR_1->i_state = 0;
  FUNC_3(&VAR_1->i_lock);
  FUNC_0(&VAR_1->i_sb_list);
 }
 return VAR_1;
}
