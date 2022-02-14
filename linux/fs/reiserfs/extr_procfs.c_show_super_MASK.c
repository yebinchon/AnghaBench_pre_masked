
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
struct reiserfs_sb_info {int s_generation_counter; } ;


 struct reiserfs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 scalar_t__ FUNC_9 (struct super_block*) ;
 scalar_t__ FUNC_10 (struct super_block*) ;
 scalar_t__ FUNC_11 (struct super_block*) ;
 scalar_t__ FUNC_12 (struct super_block*) ;
 scalar_t__ FUNC_13 (struct super_block*) ;
 scalar_t__ FUNC_14 (struct super_block*) ;
 scalar_t__ FUNC_15 (struct super_block*) ;
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
 int FUNC_16 (struct seq_file*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct seq_file *VAR_25, void *VAR_26)
{
 struct super_block *VAR_27 = VAR_25->private;
 struct reiserfs_sb_info *VAR_28 = FUNC_0(VAR_27);

 FUNC_16(VAR_25, "state: \t%s\n"
     "mount options: \t%s%s%s%s%s%s%s%s%s%s%s\n"
     "gen. counter: \t%i\n"
     "s_disk_reads: \t%i\n"
     "s_disk_writes: \t%i\n"
     "s_fix_nodes: \t%i\n"
     "s_do_balance: \t%i\n"
     "s_unneeded_left_neighbor: \t%i\n"
     "s_good_search_by_key_reada: \t%i\n"
     "s_bmaps: \t%i\n"
     "s_bmaps_without_search: \t%i\n"
     "s_direct2indirect: \t%i\n"
     "s_indirect2direct: \t%i\n"
     "\n"
     "max_hash_collisions: \t%i\n"
     "breads: \t%lu\n"
     "bread_misses: \t%lu\n"
     "search_by_key: \t%lu\n"
     "search_by_key_fs_changed: \t%lu\n"
     "search_by_key_restarted: \t%lu\n"
     "insert_item_restarted: \t%lu\n"
     "paste_into_item_restarted: \t%lu\n"
     "cut_from_item_restarted: \t%lu\n"
     "delete_solid_item_restarted: \t%lu\n"
     "delete_item_restarted: \t%lu\n"
     "leaked_oid: \t%lu\n"
     "leaves_removable: \t%lu\n",
     FUNC_1(VAR_20) == VAR_0 ?
     "REISERFS_VALID_FS" : "REISERFS_ERROR_FS",
     FUNC_11(VAR_27) ? "FORCE_R5 " : "",
     FUNC_12(VAR_27) ? "FORCE_RUPASOV " : "",
     FUNC_13(VAR_27) ? "FORCE_TEA " : "",
     FUNC_7(VAR_27) ? "DETECT_HASH " : "",
     FUNC_9(VAR_27) ? "NO_BORDER " : "BORDER ",
     FUNC_10(VAR_27) ?
     "NO_UNHASHED_RELOCATION " : "",
     FUNC_8(VAR_27) ? "UNHASHED_RELOCATION " : "",
     FUNC_14(VAR_27) ? "TEST4 " : "",
     FUNC_5(VAR_27) ? "TAILS " : FUNC_6(VAR_27) ?
     "SMALL_TAILS " : "NO_TAILS ",
     FUNC_15(VAR_27) ? "REPLAY_ONLY " : "",
     FUNC_4(VAR_27) ? "CONV " : "",
     FUNC_3(&VAR_28->s_generation_counter),
     FUNC_1(VAR_14), FUNC_1(VAR_15), FUNC_1(VAR_17),
     FUNC_1(VAR_16), FUNC_1(VAR_21),
     FUNC_1(VAR_18), FUNC_1(VAR_11),
     FUNC_1(VAR_12), FUNC_1(VAR_13),
     FUNC_1(VAR_19), FUNC_2(VAR_9), FUNC_2(VAR_2),
     FUNC_2(VAR_1), FUNC_2(VAR_22),
     FUNC_2(VAR_23), FUNC_2(VAR_24),
     FUNC_2(VAR_6), FUNC_2(VAR_10),
     FUNC_2(VAR_3),
     FUNC_2(VAR_5), FUNC_2(VAR_4),
     FUNC_2(VAR_7), FUNC_2(VAR_8));

 return 0;
}
