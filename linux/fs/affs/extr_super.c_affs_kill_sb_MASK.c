
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct affs_sb_info {int s_bmlock; struct affs_sb_info* s_prefix; int s_root_bh; } ;


 struct affs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct affs_sb_info*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_0)
{
 struct affs_sb_info *VAR_1 = FUNC_0(VAR_0);
 FUNC_4(VAR_0);
 if (VAR_1) {
  FUNC_2(VAR_0);
  FUNC_1(VAR_1->s_root_bh);
  FUNC_3(VAR_1->s_prefix);
  FUNC_5(&VAR_1->s_bmlock);
  FUNC_3(VAR_1);
 }
}
