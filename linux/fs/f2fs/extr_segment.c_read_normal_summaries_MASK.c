
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_summary {scalar_t__ ofs_in_node; scalar_t__ version; } ;
struct f2fs_summary_block {struct f2fs_summary footer; struct f2fs_summary* entries; struct f2fs_summary journal; } ;
struct f2fs_sb_info {int blocks_per_seg; } ;
struct f2fs_checkpoint {int * alloc_type; int * cur_node_blkoff; int * cur_node_segno; int * cur_data_blkoff; int * cur_data_segno; } ;
struct curseg_info {unsigned int next_segno; unsigned short next_blkoff; int curseg_mutex; int alloc_type; TYPE_1__* sum_blk; int journal_rwsem; int * journal; } ;
typedef int block_t ;
struct TYPE_2__ {int footer; int * entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 struct f2fs_checkpoint* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (int *) ;
 struct page* FUNC_9 (struct f2fs_sb_info*,int ) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (struct f2fs_sb_info*,unsigned int,struct f2fs_summary_block*) ;
 unsigned short FUNC_12 (int ) ;
 unsigned int FUNC_13 (int ) ;
 int FUNC_14 (int *,struct f2fs_summary*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct page*) ;
 int FUNC_18 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_19 (struct f2fs_sb_info*,int ,int) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct f2fs_sb_info *VAR_8, int VAR_9)
{
 struct f2fs_checkpoint *VAR_10 = FUNC_1(VAR_8);
 struct f2fs_summary_block *VAR_11;
 struct curseg_info *VAR_12;
 struct page *VAR_13;
 unsigned short VAR_14;
 unsigned int VAR_15 = 0;
 block_t VAR_16 = 0;
 int VAR_17 = 0;


 if (FUNC_3(VAR_9)) {
  VAR_15 = FUNC_13(VAR_10->cur_data_segno[VAR_9]);
  VAR_14 = FUNC_12(VAR_10->cur_data_blkoff[VAR_9 -
       VAR_0]);
  if (FUNC_7(VAR_8))
   VAR_16 = FUNC_19(VAR_8, VAR_4, VAR_9);
  else
   VAR_16 = FUNC_19(VAR_8, VAR_2, VAR_9);
 } else {
  VAR_15 = FUNC_13(VAR_10->cur_node_segno[VAR_9 -
       VAR_1]);
  VAR_14 = FUNC_12(VAR_10->cur_node_blkoff[VAR_9 -
       VAR_1]);
  if (FUNC_7(VAR_8))
   VAR_16 = FUNC_19(VAR_8, VAR_3,
       VAR_9 - VAR_1);
  else
   VAR_16 = FUNC_2(VAR_8, VAR_15);
 }

 VAR_13 = FUNC_9(VAR_8, VAR_16);
 if (FUNC_4(VAR_13))
  return FUNC_6(VAR_13);
 VAR_11 = (struct f2fs_summary_block *)FUNC_17(VAR_13);

 if (FUNC_5(VAR_9)) {
  if (FUNC_7(VAR_8)) {
   struct f2fs_summary *VAR_18 = &VAR_11->entries[0];
   int VAR_19;
   for (VAR_19 = 0; VAR_19 < VAR_8->blocks_per_seg; VAR_19++, VAR_18++) {
    VAR_18->version = 0;
    VAR_18->ofs_in_node = 0;
   }
  } else {
   VAR_17 = FUNC_11(VAR_8, VAR_15, VAR_11);
   if (VAR_17)
    goto out;
  }
 }


 VAR_12 = FUNC_0(VAR_8, VAR_9);
 FUNC_15(&VAR_12->curseg_mutex);


 FUNC_8(&VAR_12->journal_rwsem);
 FUNC_14(VAR_12->journal, &VAR_11->journal, VAR_7);
 FUNC_20(&VAR_12->journal_rwsem);

 FUNC_14(VAR_12->sum_blk->entries, VAR_11->entries, VAR_5);
 FUNC_14(&VAR_12->sum_blk->footer, &VAR_11->footer, VAR_6);
 VAR_12->next_segno = VAR_15;
 FUNC_18(VAR_8, VAR_9, 0);
 VAR_12->alloc_type = VAR_10->alloc_type[VAR_9];
 VAR_12->next_blkoff = VAR_14;
 FUNC_16(&VAR_12->curseg_mutex);
out:
 FUNC_10(VAR_13, 1);
 return VAR_17;
}
