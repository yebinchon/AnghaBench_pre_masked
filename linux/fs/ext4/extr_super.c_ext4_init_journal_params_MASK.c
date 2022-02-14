
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {int s_max_batch_time; int s_min_batch_time; int s_commit_interval; } ;
struct TYPE_3__ {int j_state_lock; int j_flags; int j_max_batch_time; int j_min_batch_time; int j_commit_interval; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_4, journal_t *VAR_5)
{
 struct ext4_sb_info *VAR_6 = FUNC_0(VAR_4);

 VAR_5->j_commit_interval = VAR_6->s_commit_interval;
 VAR_5->j_min_batch_time = VAR_6->s_min_batch_time;
 VAR_5->j_max_batch_time = VAR_6->s_max_batch_time;

 FUNC_2(&VAR_5->j_state_lock);
 if (FUNC_1(VAR_4, VAR_0))
  VAR_5->j_flags |= VAR_3;
 else
  VAR_5->j_flags &= ~VAR_3;
 if (FUNC_1(VAR_4, VAR_1))
  VAR_5->j_flags |= VAR_2;
 else
  VAR_5->j_flags &= ~VAR_2;
 FUNC_3(&VAR_5->j_state_lock);
}
