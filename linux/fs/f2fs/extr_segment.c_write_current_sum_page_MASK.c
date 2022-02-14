
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_summary_block {int footer; int * entries; int journal; } ;
struct f2fs_sb_info {int dummy; } ;
struct curseg_info {int curseg_mutex; int journal_rwsem; int * journal; struct f2fs_summary_block* sum_blk; } ;
typedef int block_t ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct page* FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct page*,int) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct f2fs_summary_block*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct f2fs_sb_info *VAR_4,
      int VAR_5, block_t VAR_6)
{
 struct curseg_info *VAR_7 = FUNC_0(VAR_4, VAR_5);
 struct page *VAR_8 = FUNC_2(VAR_4, VAR_6);
 struct f2fs_summary_block *VAR_9 = VAR_7->sum_blk;
 struct f2fs_summary_block *VAR_10;

 VAR_10 = (struct f2fs_summary_block *)FUNC_8(VAR_8);
 FUNC_5(VAR_10, 0, VAR_0);

 FUNC_6(&VAR_7->curseg_mutex);

 FUNC_1(&VAR_7->journal_rwsem);
 FUNC_4(&VAR_10->journal, VAR_7->journal, VAR_3);
 FUNC_10(&VAR_7->journal_rwsem);

 FUNC_4(VAR_10->entries, VAR_9->entries, VAR_1);
 FUNC_4(&VAR_10->footer, &VAR_9->footer, VAR_2);

 FUNC_7(&VAR_7->curseg_mutex);

 FUNC_9(VAR_8);
 FUNC_3(VAR_8, 1);
}
