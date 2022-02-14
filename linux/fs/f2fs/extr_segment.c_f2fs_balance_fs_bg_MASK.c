
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int stat_info; int sb; int flush_lock; } ;
struct blk_plug {int dummy; } ;


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
 int FUNC_0 (struct blk_plug*) ;
 int FUNC_1 (struct blk_plug*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int,int) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct f2fs_sb_info*,int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (struct f2fs_sb_info*,int ) ;
 int FUNC_11 (struct f2fs_sb_info*,int ) ;
 int FUNC_12 (struct f2fs_sb_info*,int ) ;
 int FUNC_13 (struct f2fs_sb_info*,int ) ;
 int FUNC_14 (struct f2fs_sb_info*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_19 (int ) ;

void FUNC_20(struct f2fs_sb_info *VAR_12)
{
 if (FUNC_19(FUNC_14(VAR_12, VAR_11)))
  return;


 if (!FUNC_5(VAR_12, VAR_2))
  FUNC_7(VAR_12, VAR_3);


 if (!FUNC_5(VAR_12, VAR_8))
  FUNC_11(VAR_12, VAR_9);

 if (!FUNC_5(VAR_12, VAR_5))
  FUNC_12(VAR_12, VAR_7);
 else
  FUNC_6(VAR_12, 0, 0);

 if (!FUNC_13(VAR_12, VAR_10) &&
  (!FUNC_2(VAR_12) && !FUNC_3(VAR_12)))
  return;


 if (!FUNC_5(VAR_12, VAR_8) ||
   !FUNC_5(VAR_12, VAR_6) ||
   FUNC_4(VAR_12) ||
   FUNC_2(VAR_12) ||
   FUNC_3(VAR_12) ||
   FUNC_10(VAR_12, VAR_0)) {
  if (FUNC_18(VAR_12, VAR_1)) {
   struct blk_plug VAR_13;

   FUNC_15(&VAR_12->flush_lock);

   FUNC_1(&VAR_13);
   FUNC_8(VAR_12, VAR_4);
   FUNC_0(&VAR_13);

   FUNC_16(&VAR_12->flush_lock);
  }
  FUNC_9(VAR_12->sb, 1);
  FUNC_17(VAR_12->stat_info);
 }
}
