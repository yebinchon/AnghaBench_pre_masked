
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {unsigned short blocks_per_seg; } ;
struct dirty_seglist_info {int seglist_lock; } ;


 int VAR_0 ;
 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct f2fs_sb_info*,unsigned int,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,unsigned int,int ) ;
 unsigned short FUNC_4 (struct f2fs_sb_info*,unsigned int) ;
 unsigned short FUNC_5 (struct f2fs_sb_info*,unsigned int,int) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct f2fs_sb_info *VAR_4, unsigned int VAR_5)
{
 struct dirty_seglist_info *VAR_6 = FUNC_0(VAR_4);
 unsigned short VAR_7, VAR_8;

 if (VAR_5 == VAR_1 || FUNC_1(VAR_4, VAR_5))
  return;

 FUNC_7(&VAR_6->seglist_lock);

 VAR_7 = FUNC_5(VAR_4, VAR_5, 0);
 VAR_8 = FUNC_4(VAR_4, VAR_5);

 if (VAR_7 == 0 && (!FUNC_6(VAR_4, VAR_3) ||
    VAR_8 == VAR_4->blocks_per_seg)) {
  FUNC_2(VAR_4, VAR_5, VAR_2);
  FUNC_3(VAR_4, VAR_5, VAR_0);
 } else if (VAR_7 < VAR_4->blocks_per_seg) {
  FUNC_2(VAR_4, VAR_5, VAR_0);
 } else {

  FUNC_3(VAR_4, VAR_5, VAR_0);
 }

 FUNC_8(&VAR_6->seglist_lock);
}
