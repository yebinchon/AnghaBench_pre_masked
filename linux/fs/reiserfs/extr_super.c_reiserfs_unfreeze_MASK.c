
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_sb_info {int old_work_lock; scalar_t__ work_queued; } ;


 struct reiserfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0)
{
 struct reiserfs_sb_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_2(&VAR_1->old_work_lock);

 VAR_1->work_queued = 0;
 FUNC_3(&VAR_1->old_work_lock);
 return 0;
}
