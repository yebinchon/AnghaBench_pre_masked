
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct reiserfs_sb_info {int work_queued; int old_work_lock; int old_work; } ;


 struct reiserfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

void FUNC_6(struct super_block *VAR_3)
{
 struct reiserfs_sb_info *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;





 if (FUNC_3(VAR_3) || !(VAR_3->s_flags & VAR_0))
  return;

 FUNC_4(&VAR_4->old_work_lock);
 if (!VAR_4->work_queued) {
  VAR_5 = FUNC_1(VAR_1 * 10);
  FUNC_2(VAR_2, &VAR_4->old_work, VAR_5);
  VAR_4->work_queued = 1;
 }
 FUNC_5(&VAR_4->old_work_lock);
}
