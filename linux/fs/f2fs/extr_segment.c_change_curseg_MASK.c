
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_summary_block {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dirty_seglist_info {int seglist_lock; } ;
struct curseg_info {unsigned int next_segno; int sum_blk; int alloc_type; int segno; } ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_0 ;
 struct dirty_seglist_info* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct f2fs_sb_info*,struct curseg_info*,int ) ;
 int FUNC_5 (struct f2fs_sb_info*,unsigned int,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 struct page* FUNC_8 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (int ,struct f2fs_summary_block*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (struct f2fs_sb_info*,int,int) ;
 int FUNC_15 (struct f2fs_sb_info*,int ,int ) ;

__attribute__((used)) static void FUNC_16(struct f2fs_sb_info *VAR_4, int VAR_5)
{
 struct dirty_seglist_info *VAR_6 = FUNC_1(VAR_4);
 struct curseg_info *VAR_7 = FUNC_0(VAR_4, VAR_5);
 unsigned int VAR_8 = VAR_7->next_segno;
 struct f2fs_summary_block *VAR_9;
 struct page *VAR_10;

 FUNC_15(VAR_4, VAR_7->sum_blk,
    FUNC_2(VAR_4, VAR_7->segno));
 FUNC_6(VAR_4, VAR_8);

 FUNC_11(&VAR_6->seglist_lock);
 FUNC_5(VAR_4, VAR_8, VAR_1);
 FUNC_5(VAR_4, VAR_8, VAR_0);
 FUNC_12(&VAR_6->seglist_lock);

 FUNC_14(VAR_4, VAR_5, 1);
 VAR_7->alloc_type = VAR_2;
 FUNC_4(VAR_4, VAR_7, 0);

 VAR_10 = FUNC_8(VAR_4, VAR_8);
 FUNC_7(VAR_4, FUNC_3(VAR_10));
 VAR_9 = (struct f2fs_summary_block *)FUNC_13(VAR_10);
 FUNC_10(VAR_7->sum_blk, VAR_9, VAR_3);
 FUNC_9(VAR_10, 1);
}
