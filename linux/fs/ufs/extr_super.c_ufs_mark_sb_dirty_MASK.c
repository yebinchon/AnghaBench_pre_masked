
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_sb_info {int work_queued; int work_lock; int sync_work; } ;
struct super_block {int dummy; } ;


 struct ufs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

void FUNC_5(struct super_block *VAR_2)
{
 struct ufs_sb_info *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;

 FUNC_3(&VAR_3->work_lock);
 if (!VAR_3->work_queued) {
  VAR_4 = FUNC_1(VAR_0 * 10);
  FUNC_2(VAR_1, &VAR_3->sync_work, VAR_4);
  VAR_3->work_queued = 1;
 }
 FUNC_4(&VAR_3->work_lock);
}
