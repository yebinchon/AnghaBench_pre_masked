
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {TYPE_1__* sb; } ;
struct f2fs_orphan_block {int * ino; int entry_count; } ;
typedef scalar_t__ nid_t ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {unsigned int s_flags; int s_bdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (struct f2fs_sb_info*,unsigned int) ;
 struct page* FUNC_8 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_9 (struct f2fs_sb_info*,char*) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct f2fs_sb_info*,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_13 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_17 (struct f2fs_sb_info*,int ) ;

int FUNC_18(struct f2fs_sb_info *VAR_5)
{
 block_t VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10 = VAR_5->sb->s_flags;
 int VAR_11 = 0;




 if (!FUNC_13(VAR_5, VAR_0))
  return 0;

 if (FUNC_5(VAR_5->sb->s_bdev)) {
  FUNC_9(VAR_5, "write access unavailable, skipping orphan cleanup");
  return 0;
 }

 if (VAR_10 & VAR_4) {
  FUNC_9(VAR_5, "orphan cleanup on readonly fs");
  VAR_5->sb->s_flags &= ~VAR_4;
 }
 VAR_6 = FUNC_3(VAR_5) + 1 + FUNC_2(VAR_5);
 VAR_7 = FUNC_4(VAR_5) - 1 - FUNC_2(VAR_5);

 FUNC_12(VAR_5, VAR_6, VAR_7, VAR_1, 1);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  struct page *VAR_12;
  struct f2fs_orphan_block *VAR_13;

  VAR_12 = FUNC_8(VAR_5, VAR_6 + VAR_8);
  if (FUNC_0(VAR_12)) {
   VAR_11 = FUNC_1(VAR_12);
   goto out;
  }

  VAR_13 = (struct f2fs_orphan_block *)FUNC_15(VAR_12);
  for (VAR_9 = 0; VAR_9 < FUNC_14(VAR_13->entry_count); VAR_9++) {
   nid_t VAR_14 = FUNC_14(VAR_13->ino[VAR_9]);
   VAR_11 = FUNC_16(VAR_5, VAR_14);
   if (VAR_11) {
    FUNC_10(VAR_12, 1);
    goto out;
   }
  }
  FUNC_10(VAR_12, 1);
 }

 FUNC_6(VAR_5, VAR_0);
out:
 FUNC_17(VAR_5, VAR_2);






 VAR_5->sb->s_flags = VAR_10;

 return VAR_11;
}
