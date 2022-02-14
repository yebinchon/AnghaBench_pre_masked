
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_summary {int dummy; } ;
struct f2fs_sb_info {unsigned short blocks_per_seg; } ;
struct f2fs_checkpoint {scalar_t__* alloc_type; int * cur_data_blkoff; int * cur_data_segno; } ;
struct curseg_info {unsigned int next_segno; scalar_t__ alloc_type; unsigned short next_blkoff; TYPE_1__* sum_blk; int journal; } ;
typedef int block_t ;
struct TYPE_2__ {struct f2fs_summary* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 struct f2fs_checkpoint* FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct page*,int) ;
 unsigned short FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_11 (struct f2fs_sb_info*) ;

__attribute__((used)) static int FUNC_12(struct f2fs_sb_info *VAR_7)
{
 struct f2fs_checkpoint *VAR_8 = FUNC_1(VAR_7);
 struct curseg_info *VAR_9;
 unsigned char *VAR_10;
 struct page *VAR_11;
 block_t VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_12 = FUNC_11(VAR_7);

 VAR_11 = FUNC_4(VAR_7, VAR_12++);
 if (FUNC_2(VAR_11))
  return FUNC_3(VAR_11);
 VAR_10 = (unsigned char *)FUNC_9(VAR_11);


 VAR_9 = FUNC_0(VAR_7, VAR_1);
 FUNC_8(VAR_9->journal, VAR_10, VAR_6);


 VAR_9 = FUNC_0(VAR_7, VAR_0);
 FUNC_8(VAR_9->journal, VAR_10 + VAR_6, VAR_6);
 VAR_15 = 2 * VAR_6;


 for (VAR_13 = VAR_1; VAR_13 <= VAR_0; VAR_13++) {
  unsigned short VAR_16;
  unsigned int VAR_17;

  VAR_9 = FUNC_0(VAR_7, VAR_13);
  VAR_17 = FUNC_7(VAR_8->cur_data_segno[VAR_13]);
  VAR_16 = FUNC_6(VAR_8->cur_data_blkoff[VAR_13]);
  VAR_9->next_segno = VAR_17;
  FUNC_10(VAR_7, VAR_13, 0);
  VAR_9->alloc_type = VAR_8->alloc_type[VAR_13];
  VAR_9->next_blkoff = VAR_16;

  if (VAR_9->alloc_type == VAR_3)
   VAR_16 = VAR_7->blocks_per_seg;

  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
   struct f2fs_summary *VAR_18;
   VAR_18 = (struct f2fs_summary *)(VAR_10 + VAR_15);
   VAR_9->sum_blk->entries[VAR_14] = *VAR_18;
   VAR_15 += VAR_4;
   if (VAR_15 + VAR_4 <= VAR_2 -
      VAR_5)
    continue;

   FUNC_5(VAR_11, 1);
   VAR_11 = ((void*)0);

   VAR_11 = FUNC_4(VAR_7, VAR_12++);
   if (FUNC_2(VAR_11))
    return FUNC_3(VAR_11);
   VAR_10 = (unsigned char *)FUNC_9(VAR_11);
   VAR_15 = 0;
  }
 }
 FUNC_5(VAR_11, 1);
 return 0;
}
