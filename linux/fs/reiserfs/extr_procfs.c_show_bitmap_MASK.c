
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
struct reiserfs_sb_info {int dummy; } ;


 struct reiserfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_8, void *VAR_9)
{
 struct super_block *VAR_10 = VAR_8->private;
 struct reiserfs_sb_info *VAR_11 = FUNC_0(VAR_10);

 FUNC_3(VAR_8, "free_block: %lu\n"
     "  scan_bitmap:"
     "          wait"
     "          bmap"
     "         retry"
     "        stolen"
     "  journal_hint"
     "journal_nohint"
     "\n"
     " %14lu"
     " %14lu"
     " %14lu"
     " %14lu"
     " %14lu"
     " %14lu"
     " %14lu"
     "\n",
     FUNC_1(VAR_2),
     FUNC_2(VAR_1),
     FUNC_2(VAR_7),
     FUNC_2(VAR_0),
     FUNC_2(VAR_5),
     FUNC_2(VAR_6),
     FUNC_2(VAR_3), FUNC_2(VAR_4));

 return 0;
}
