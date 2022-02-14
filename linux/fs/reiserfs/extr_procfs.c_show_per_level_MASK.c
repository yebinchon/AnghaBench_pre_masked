
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
struct reiserfs_sb_info {int dummy; } ;


 int VAR_0 ;
 struct reiserfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_16, void *VAR_17)
{
 struct super_block *VAR_18 = VAR_16->private;
 struct reiserfs_sb_info *VAR_19 = FUNC_0(VAR_18);
 int VAR_20;

 FUNC_2(VAR_16, "level\t"
     "     balances"
     " [sbk:  reads"
     "   fs_changed"
     "   restarted]"
     "   free space"
     "        items"
     "   can_remove"
     "         lnum"
     "         rnum"
     "       lbytes"
     "       rbytes"
     "     get_neig"
     " get_neig_res" "  need_l_neig" "  need_r_neig" "\n");

 for (VAR_20 = 0; VAR_20 < VAR_0; ++VAR_20) {
  FUNC_2(VAR_16, "%i\t"
      " %12lu"
      " %12lu"
      " %12lu"
      " %12lu"
      " %12lu"
      " %12lu"
      " %12lu"
      " %12li"
      " %12li"
      " %12li"
      " %12li"
      " %12lu"
      " %12lu"
      " %12lu"
      " %12lu"
      "\n",
      VAR_20,
      FUNC_1(VAR_1),
      FUNC_1(VAR_14),
      FUNC_1(VAR_13),
      FUNC_1(VAR_15),
      FUNC_1(VAR_3),
      FUNC_1(VAR_6),
      FUNC_1(VAR_2),
      FUNC_1(VAR_8),
      FUNC_1(VAR_12),
      FUNC_1(VAR_7),
      FUNC_1(VAR_11),
      FUNC_1(VAR_4),
      FUNC_1(VAR_5),
      FUNC_1(VAR_9), FUNC_1(VAR_10)
      );
 }
 return 0;
}
