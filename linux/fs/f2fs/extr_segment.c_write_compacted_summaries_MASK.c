
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_summary {int dummy; } ;
struct f2fs_sb_info {unsigned short blocks_per_seg; TYPE_1__* ckpt; } ;
struct curseg_info {TYPE_2__* sum_blk; int journal; } ;
typedef int block_t ;
struct TYPE_4__ {struct f2fs_summary* entries; } ;
struct TYPE_3__ {scalar_t__* alloc_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned short FUNC_1 (struct f2fs_sb_info*,int) ;
 struct page* FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct page*,int) ;
 int FUNC_4 (unsigned char*,int ,scalar_t__) ;
 int FUNC_5 (unsigned char*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static void FUNC_8(struct f2fs_sb_info *VAR_7, block_t VAR_8)
{
 struct page *VAR_9;
 unsigned char *VAR_10;
 struct f2fs_summary *VAR_11;
 struct curseg_info *VAR_12;
 int VAR_13 = 0;
 int VAR_14, VAR_15;

 VAR_9 = FUNC_2(VAR_7, VAR_8++);
 VAR_10 = (unsigned char *)FUNC_6(VAR_9);
 FUNC_5(VAR_10, 0, VAR_2);


 VAR_12 = FUNC_0(VAR_7, VAR_1);
 FUNC_4(VAR_10, VAR_12->journal, VAR_6);
 VAR_13 += VAR_6;


 VAR_12 = FUNC_0(VAR_7, VAR_0);
 FUNC_4(VAR_10 + VAR_13, VAR_12->journal, VAR_6);
 VAR_13 += VAR_6;


 for (VAR_14 = VAR_1; VAR_14 <= VAR_0; VAR_14++) {
  unsigned short VAR_16;
  VAR_12 = FUNC_0(VAR_7, VAR_14);
  if (VAR_7->ckpt->alloc_type[VAR_14] == VAR_3)
   VAR_16 = VAR_7->blocks_per_seg;
  else
   VAR_16 = FUNC_1(VAR_7, VAR_14);

  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
   if (!VAR_9) {
    VAR_9 = FUNC_2(VAR_7, VAR_8++);
    VAR_10 = (unsigned char *)FUNC_6(VAR_9);
    FUNC_5(VAR_10, 0, VAR_2);
    VAR_13 = 0;
   }
   VAR_11 = (struct f2fs_summary *)(VAR_10 + VAR_13);
   *VAR_11 = VAR_12->sum_blk->entries[VAR_15];
   VAR_13 += VAR_4;

   if (VAR_13 + VAR_4 <= VAR_2 -
       VAR_5)
    continue;

   FUNC_7(VAR_9);
   FUNC_3(VAR_9, 1);
   VAR_9 = ((void*)0);
  }
 }
 if (VAR_9) {
  FUNC_7(VAR_9);
  FUNC_3(VAR_9, 1);
 }
}
