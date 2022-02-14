
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seg_entry {int cur_valid_map; } ;
struct page {scalar_t__ i_ino; } ;
struct inode {scalar_t__ i_ino; } ;
struct f2fs_summary_block {struct f2fs_summary* entries; } ;
struct f2fs_summary {int ofs_in_node; int nid; } ;
struct f2fs_sb_info {int sb; } ;
struct dnode_of_data {scalar_t__ nid; scalar_t__ data_blkaddr; int inode_page; scalar_t__ inode_page_locked; struct page* inode; scalar_t__ ofs_in_node; int node_page; } ;
struct curseg_info {unsigned int segno; TYPE_1__* sum_blk; } ;
typedef scalar_t__ nid_t ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {struct f2fs_summary* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 unsigned short FUNC_1 (struct f2fs_sb_info*,scalar_t__) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_2 ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*,int ,scalar_t__) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct dnode_of_data*,scalar_t__,int ) ;
 struct page* FUNC_8 (struct f2fs_sb_info*,scalar_t__) ;
 struct page* FUNC_9 (struct f2fs_sb_info*,unsigned int) ;
 struct page* FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (struct dnode_of_data*) ;
 int FUNC_12 (struct page*,int) ;
 scalar_t__ FUNC_13 (unsigned int,struct page*) ;
 int FUNC_14 (unsigned short,int ) ;
 int FUNC_15 (struct dnode_of_data*,int) ;
 struct seg_entry* FUNC_16 (struct f2fs_sb_info*,unsigned int) ;
 scalar_t__ FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 unsigned int FUNC_22 (struct page*) ;
 scalar_t__ FUNC_23 (struct page*) ;
 int FUNC_24 (struct dnode_of_data*,struct page*,int *,int *,int ) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct f2fs_sb_info *VAR_3,
   block_t VAR_4, struct dnode_of_data *VAR_5)
{
 struct seg_entry *VAR_6;
 unsigned int VAR_7 = FUNC_2(VAR_3, VAR_4);
 unsigned short VAR_8 = FUNC_1(VAR_3, VAR_4);
 struct f2fs_summary_block *VAR_9;
 struct f2fs_summary VAR_10;
 struct page *VAR_11, *VAR_12;
 struct dnode_of_data VAR_13 = *VAR_5;
 nid_t VAR_14, VAR_15;
 struct inode *VAR_16;
 unsigned int VAR_17;
 block_t VAR_18;
 int VAR_19;

 VAR_6 = FUNC_16(VAR_3, VAR_7);
 if (!FUNC_14(VAR_8, VAR_6->cur_valid_map))
  return 0;


 for (VAR_19 = VAR_1; VAR_19 <= VAR_0; VAR_19++) {
  struct curseg_info *VAR_20 = FUNC_0(VAR_3, VAR_19);
  if (VAR_20->segno == VAR_7) {
   VAR_10 = VAR_20->sum_blk->entries[VAR_8];
   goto got_it;
  }
 }

 VAR_11 = FUNC_9(VAR_3, VAR_7);
 if (FUNC_3(VAR_11))
  return FUNC_4(VAR_11);
 VAR_9 = (struct f2fs_summary_block *)FUNC_23(VAR_11);
 VAR_10 = VAR_9->entries[VAR_8];
 FUNC_12(VAR_11, 1);
got_it:

 VAR_15 = FUNC_20(VAR_10.nid);
 if (VAR_5->inode->i_ino == VAR_15) {
  VAR_13.nid = VAR_15;
  if (!VAR_5->inode_page_locked)
   FUNC_21(VAR_5->inode_page);
  VAR_13.node_page = VAR_5->inode_page;
  VAR_13.ofs_in_node = FUNC_19(VAR_10.ofs_in_node);
  goto truncate_out;
 } else if (VAR_5->nid == VAR_15) {
  VAR_13.ofs_in_node = FUNC_19(VAR_10.ofs_in_node);
  goto truncate_out;
 }


 VAR_12 = FUNC_8(VAR_3, VAR_15);
 if (FUNC_3(VAR_12))
  return FUNC_4(VAR_12);

 VAR_17 = FUNC_22(VAR_12);
 VAR_14 = FUNC_17(VAR_12);
 FUNC_12(VAR_12, 1);

 if (VAR_14 != VAR_5->inode->i_ino) {
  int VAR_21;


  VAR_16 = FUNC_10(VAR_3->sb, VAR_14);
  if (FUNC_3(VAR_16))
   return FUNC_4(VAR_16);

  VAR_21 = FUNC_6(VAR_16);
  if (VAR_21) {
   FUNC_18(VAR_16);
   return VAR_21;
  }
 } else {
  VAR_16 = VAR_5->inode;
 }

 VAR_18 = FUNC_13(VAR_17, VAR_16) +
    FUNC_19(VAR_10.ofs_in_node);





 if (VAR_14 == VAR_5->inode->i_ino && VAR_5->inode_page_locked)
  FUNC_25(VAR_5->inode_page);

 FUNC_24(&VAR_13, VAR_16, ((void*)0), ((void*)0), 0);
 if (FUNC_7(&VAR_13, VAR_18, VAR_2))
  goto out;

 if (VAR_13.data_blkaddr == VAR_4)
  FUNC_15(&VAR_13, 1);

 FUNC_11(&VAR_13);
out:
 if (VAR_14 != VAR_5->inode->i_ino)
  FUNC_18(VAR_16);
 else if (VAR_5->inode_page_locked)
  FUNC_21(VAR_5->inode_page);
 return 0;

truncate_out:
 if (FUNC_5(VAR_13.inode, VAR_13.node_page,
     VAR_13.ofs_in_node) == VAR_4)
  FUNC_15(&VAR_13, 1);
 if (VAR_5->inode->i_ino == VAR_15 && !VAR_5->inode_page_locked)
  FUNC_25(VAR_5->inode_page);
 return 0;
}
