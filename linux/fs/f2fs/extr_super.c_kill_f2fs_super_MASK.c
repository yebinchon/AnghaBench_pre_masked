
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; scalar_t__ s_root; } ;
struct f2fs_sb_info {int dummy; } ;
struct cp_control {int reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,struct cp_control*) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_6)
{
 if (VAR_6->s_root) {
  struct f2fs_sb_info *VAR_7 = FUNC_0(VAR_6);

  FUNC_8(VAR_7, VAR_2);
  FUNC_3(VAR_7);
  FUNC_2(VAR_7);

  if (FUNC_5(VAR_7, VAR_3) ||
    !FUNC_6(VAR_7, VAR_1)) {
   struct cp_control VAR_8 = {
    .reason = VAR_0,
   };
   FUNC_4(VAR_7, &VAR_8);
  }

  if (FUNC_5(VAR_7, VAR_4) && FUNC_1(VAR_6))
   VAR_6->s_flags &= ~VAR_5;
 }
 FUNC_7(VAR_6);
}
