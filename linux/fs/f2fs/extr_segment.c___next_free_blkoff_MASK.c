
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seg_entry {scalar_t__ cur_valid_map; scalar_t__ ckpt_valid_map; } ;
struct f2fs_sb_info {int blocks_per_seg; } ;
struct curseg_info {int next_blkoff; int segno; } ;
typedef int block_t ;
struct TYPE_2__ {unsigned long* tmp_map; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long*,int ,int ) ;
 struct seg_entry* FUNC_2 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static void FUNC_3(struct f2fs_sb_info *VAR_1,
   struct curseg_info *VAR_2, block_t VAR_3)
{
 struct seg_entry *VAR_4 = FUNC_2(VAR_1, VAR_2->segno);
 int VAR_5 = VAR_0 / sizeof(unsigned long);
 unsigned long *VAR_6 = FUNC_0(VAR_1)->tmp_map;
 unsigned long *VAR_7 = (unsigned long *)VAR_4->ckpt_valid_map;
 unsigned long *VAR_8 = (unsigned long *)VAR_4->cur_valid_map;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_6[VAR_9] = VAR_7[VAR_9] | VAR_8[VAR_9];

 VAR_10 = FUNC_1(VAR_6, VAR_1->blocks_per_seg, VAR_3);

 VAR_2->next_blkoff = VAR_10;
}
