
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
struct TYPE_2__ {int s_magic; } ;
struct reiserfs_super_block {TYPE_1__ s_v1; } ;
struct reiserfs_sb_info {struct reiserfs_super_block* s_rs; } ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct reiserfs_sb_info* FUNC_3 (struct super_block*) ;
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
 int FUNC_4 (struct seq_file*,char*,int,int,int,int ,int ,int ,int ,int ,int ,char*,int ,int ,int ,int,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_19, void *VAR_20)
{
 struct super_block *VAR_21 = VAR_19->private;
 struct reiserfs_sb_info *VAR_22 = FUNC_3(VAR_21);
 struct reiserfs_super_block *VAR_23 = VAR_22->s_rs;
 int VAR_24 = FUNC_1(VAR_11);
 __u32 VAR_25 = FUNC_2(VAR_8);

 FUNC_4(VAR_19, "block_count: \t%i\n"
     "free_blocks: \t%i\n"
     "root_block: \t%i\n"
     "blocksize: \t%i\n"
     "oid_maxsize: \t%i\n"
     "oid_cursize: \t%i\n"
     "umount_state: \t%i\n"
     "magic: \t%10.10s\n"
     "fs_state: \t%i\n"
     "hash: \t%s\n"
     "tree_height: \t%i\n"
     "bmap_nr: \t%i\n"
     "version: \t%i\n"
     "flags: \t%x[%s]\n"
     "reserved_for_journal: \t%i\n",
     FUNC_1(VAR_5),
     FUNC_1(VAR_9),
     FUNC_1(VAR_15),
     FUNC_0(VAR_6),
     FUNC_0(VAR_13),
     FUNC_0(VAR_12),
     FUNC_0(VAR_17),
     VAR_23->s_v1.s_magic,
     FUNC_0(VAR_10),
     VAR_24 == VAR_1 ? "tea" :
     (VAR_24 == VAR_3) ? "rupasov" :
     (VAR_24 == VAR_0) ? "r5" :
     (VAR_24 == VAR_2) ? "unset" : "unknown",
     FUNC_0(VAR_16),
     FUNC_0(VAR_7),
     FUNC_0(VAR_18), VAR_25, (VAR_25 & VAR_4)
     ? "attrs_cleared" : "", FUNC_0(VAR_14));

 return 0;
}
