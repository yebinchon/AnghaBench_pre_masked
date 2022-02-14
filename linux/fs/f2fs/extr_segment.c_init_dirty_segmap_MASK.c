
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_segmap_info {int dummy; } ;
struct f2fs_sb_info {unsigned short blocks_per_seg; } ;
struct dirty_seglist_info {int seglist_lock; } ;


 int VAR_0 ;
 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 struct free_segmap_info* FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*,unsigned int,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int) ;
 unsigned int FUNC_5 (struct free_segmap_info*,unsigned int,unsigned int) ;
 unsigned short FUNC_6 (struct f2fs_sb_info*,unsigned int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct f2fs_sb_info *VAR_1)
{
 struct dirty_seglist_info *VAR_2 = FUNC_0(VAR_1);
 struct free_segmap_info *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = 0, VAR_5 = 0;
 unsigned short VAR_6;

 while (1) {

  VAR_4 = FUNC_5(VAR_3, FUNC_2(VAR_1), VAR_5);
  if (VAR_4 >= FUNC_2(VAR_1))
   break;
  VAR_5 = VAR_4 + 1;
  VAR_6 = FUNC_6(VAR_1, VAR_4, 0);
  if (VAR_6 == VAR_1->blocks_per_seg || !VAR_6)
   continue;
  if (VAR_6 > VAR_1->blocks_per_seg) {
   FUNC_4(VAR_1, 1);
   continue;
  }
  FUNC_7(&VAR_2->seglist_lock);
  FUNC_3(VAR_1, VAR_4, VAR_0);
  FUNC_8(&VAR_2->seglist_lock);
 }
}
