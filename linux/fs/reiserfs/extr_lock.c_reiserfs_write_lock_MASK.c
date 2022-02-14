
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_sb_info {scalar_t__ lock_owner; int lock_depth; int lock; } ;


 struct reiserfs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct super_block *VAR_1)
{
 struct reiserfs_sb_info *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->lock_owner != VAR_0) {
  FUNC_1(&VAR_2->lock);
  VAR_2->lock_owner = VAR_0;
 }


 VAR_2->lock_depth++;
}
