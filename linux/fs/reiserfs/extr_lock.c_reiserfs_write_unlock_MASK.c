
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_sb_info {int lock_depth; int lock; int * lock_owner; } ;


 int FUNC_0 (int) ;
 struct reiserfs_sb_info* FUNC_1 (struct super_block*) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct super_block *VAR_1)
{
 struct reiserfs_sb_info *VAR_2 = FUNC_1(VAR_1);






 FUNC_0(VAR_2->lock_owner != VAR_0);

 if (--VAR_2->lock_depth == -1) {
  VAR_2->lock_owner = ((void*)0);
  FUNC_2(&VAR_2->lock);
 }
}
