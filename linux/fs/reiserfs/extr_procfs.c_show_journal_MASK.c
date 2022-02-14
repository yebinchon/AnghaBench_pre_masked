
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
struct journal_params {int dummy; } ;
struct TYPE_4__ {struct journal_params s_journal; } ;
struct reiserfs_super_block {TYPE_1__ s_v1; } ;
struct reiserfs_sb_info {TYPE_2__* s_journal; struct reiserfs_super_block* s_rs; } ;
struct TYPE_6__ {int j_max_commit_age; int j_dev_bd; } ;
struct TYPE_5__ {int j_wcount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct reiserfs_sb_info* FUNC_2 (struct super_block*) ;
 TYPE_3__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_6 (int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_7 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_38, void *VAR_39)
{
 struct super_block *VAR_40 = VAR_38->private;
 struct reiserfs_sb_info *VAR_41 = FUNC_2(VAR_40);
 struct reiserfs_super_block *VAR_42 = VAR_41->s_rs;
 struct journal_params *VAR_43 = &VAR_42->s_v1.s_journal;

 FUNC_7(VAR_38,
     "jp_journal_1st_block: \t%i\n"
     "jp_journal_dev: \t%pg[%x]\n"
     "jp_journal_size: \t%i\n"
     "jp_journal_trans_max: \t%i\n"
     "jp_journal_magic: \t%i\n"
     "jp_journal_max_batch: \t%i\n"
     "jp_journal_max_commit_age: \t%i\n"
     "jp_journal_max_trans_age: \t%i\n"

     "j_1st_reserved_block: \t%i\n"
     "j_state: \t%li\n"
     "j_trans_id: \t%u\n"
     "j_mount_id: \t%lu\n"
     "j_start: \t%lu\n"
     "j_len: \t%lu\n"
     "j_len_alloc: \t%lu\n"
     "j_wcount: \t%i\n"
     "j_bcount: \t%lu\n"
     "j_first_unflushed_offset: \t%lu\n"
     "j_last_flush_trans_id: \t%u\n"
     "j_trans_start_time: \t%lli\n"
     "j_list_bitmap_index: \t%i\n"
     "j_must_wait: \t%i\n"
     "j_next_full_flush: \t%i\n"
     "j_next_async_flush: \t%i\n"
     "j_cnode_used: \t%i\n" "j_cnode_free: \t%i\n" "\n"

     "in_journal: \t%12lu\n"
     "in_journal_bitmap: \t%12lu\n"
     "in_journal_reusable: \t%12lu\n"
     "lock_journal: \t%12lu\n"
     "lock_journal_wait: \t%12lu\n"
     "journal_begin: \t%12lu\n"
     "journal_relock_writers: \t%12lu\n"
     "journal_relock_wcount: \t%12lu\n"
     "mark_dirty: \t%12lu\n"
     "mark_dirty_already: \t%12lu\n"
     "mark_dirty_notjournal: \t%12lu\n"
     "restore_prepared: \t%12lu\n"
     "prepare: \t%12lu\n"
     "prepare_retry: \t%12lu\n",
     FUNC_0(VAR_23),
     FUNC_3(VAR_40)->j_dev_bd,
     FUNC_0(VAR_24),
     FUNC_0(VAR_28),
     FUNC_0(VAR_29),
     FUNC_0(VAR_25),
     FUNC_0(VAR_26),
     FUNC_3(VAR_40)->j_max_commit_age,
     FUNC_0(VAR_27),
     FUNC_1(VAR_3),
     FUNC_1(VAR_17),
     FUNC_1(VAR_18),
     FUNC_1(VAR_12),
     FUNC_1(VAR_16),
     FUNC_1(VAR_9),
     FUNC_1(VAR_10),
     FUNC_5(&VAR_41->s_journal->j_wcount),
     FUNC_1(VAR_4),
     FUNC_1(VAR_7),
     FUNC_1(VAR_8),
     FUNC_6(FUNC_1(VAR_19)),
     FUNC_1(VAR_11),
     FUNC_1(VAR_13),
     FUNC_1(VAR_15),
     FUNC_1(VAR_14),
     FUNC_1(VAR_6),
     FUNC_1(VAR_5),
     FUNC_4(VAR_0),
     FUNC_4(VAR_1),
     FUNC_4(VAR_2),
     FUNC_4(VAR_30),
     FUNC_4(VAR_31),
     FUNC_4(VAR_20),
     FUNC_4(VAR_22),
     FUNC_4(VAR_21),
     FUNC_4(VAR_32),
     FUNC_4(VAR_33),
     FUNC_4(VAR_34),
     FUNC_4(VAR_37), FUNC_4(VAR_35), FUNC_4(VAR_36)
     );
 return 0;
}
