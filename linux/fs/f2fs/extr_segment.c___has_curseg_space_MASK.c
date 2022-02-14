
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {scalar_t__ blocks_per_seg; } ;
struct curseg_info {scalar_t__ next_blkoff; } ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;

__attribute__((used)) static bool FUNC_1(struct f2fs_sb_info *VAR_0, int VAR_1)
{
 struct curseg_info *VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2->next_blkoff < VAR_0->blocks_per_seg)
  return 1;
 return 0;
}
