
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct affs_sb_info {int work_queued; int work_lock; int sb_work; } ;


 struct affs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

void FUNC_6(struct super_block *VAR_2)
{
 struct affs_sb_info *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;

 if (FUNC_3(VAR_2))
        return;

 FUNC_4(&VAR_3->work_lock);
 if (!VAR_3->work_queued) {
        VAR_4 = FUNC_1(VAR_0 * 10);
        FUNC_2(VAR_1, &VAR_3->sb_work, VAR_4);
        VAR_3->work_queued = 1;
 }
 FUNC_5(&VAR_3->work_lock);
}
