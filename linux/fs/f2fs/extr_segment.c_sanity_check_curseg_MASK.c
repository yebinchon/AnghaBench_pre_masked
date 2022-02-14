
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {int cur_valid_map; } ;
struct f2fs_sb_info {unsigned int blocks_per_seg; } ;
struct curseg_info {unsigned int next_blkoff; scalar_t__ alloc_type; int segno; } ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct f2fs_sb_info*,char*,int,int ,scalar_t__,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int,int ) ;
 struct seg_entry* FUNC_3 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct f2fs_sb_info *VAR_3)
{
 int VAR_4;





 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct curseg_info *VAR_5 = FUNC_0(VAR_3, VAR_4);
  struct seg_entry *VAR_6 = FUNC_3(VAR_3, VAR_5->segno);
  unsigned int VAR_7 = VAR_5->next_blkoff;

  if (FUNC_2(VAR_7, VAR_6->cur_valid_map))
   goto out;

  if (VAR_5->alloc_type == VAR_2)
   continue;

  for (VAR_7 += 1; VAR_7 < VAR_3->blocks_per_seg; VAR_7++) {
   if (!FUNC_2(VAR_7, VAR_6->cur_valid_map))
    continue;
out:
   FUNC_1(VAR_3,
     "Current segment's next free block offset is inconsistent with bitmap, logtype:%u, segno:%u, type:%u, next_blkoff:%u, blkofs:%u",
     VAR_4, VAR_5->segno, VAR_5->alloc_type,
     VAR_5->next_blkoff, VAR_7);
   return -VAR_0;
  }
 }
 return 0;
}
