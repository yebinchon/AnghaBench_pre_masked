
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int inode_page_locked; int ofs_in_node; int cur_level; int max_level; struct page* node_page; struct page* inode_page; TYPE_1__* inode; int data_blkaddr; void* nid; } ;
typedef scalar_t__ pgoff_t ;
typedef void* nid_t ;
struct TYPE_5__ {void* i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct f2fs_sb_info* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_3 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (TYPE_1__*,struct page*,int) ;
 int FUNC_4 (struct f2fs_sb_info*,void**) ;
 int FUNC_5 (struct f2fs_sb_info*,void*) ;
 int FUNC_6 (struct f2fs_sb_info*,void*) ;
 struct page* FUNC_7 (struct f2fs_sb_info*,void*) ;
 struct page* FUNC_8 (struct page*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 struct page* FUNC_10 (struct dnode_of_data*,unsigned int) ;
 int FUNC_11 (struct page*,int) ;
 void* FUNC_12 (struct page*,int,int) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,int*,unsigned int*) ;
 int FUNC_14 (struct page*,int,void*,int) ;
 int FUNC_15 (struct page*) ;

int FUNC_16(struct dnode_of_data *VAR_4, pgoff_t VAR_5, int VAR_6)
{
 struct f2fs_sb_info *VAR_7 = FUNC_0(VAR_4->inode);
 struct page *VAR_8[4];
 struct page *VAR_9 = ((void*)0);
 int VAR_10[4];
 unsigned int VAR_11[4];
 nid_t VAR_12[4];
 int VAR_13, VAR_14 = 0;
 int VAR_15 = 0;

 VAR_13 = FUNC_13(VAR_4->inode, VAR_5, VAR_10, VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12[0] = VAR_4->inode->i_ino;
 VAR_8[0] = VAR_4->inode_page;

 if (!VAR_8[0]) {
  VAR_8[0] = FUNC_7(VAR_7, VAR_12[0]);
  if (FUNC_1(VAR_8[0]))
   return FUNC_2(VAR_8[0]);
 }


 if (FUNC_9(VAR_4->inode) && VAR_5) {
  VAR_15 = -VAR_1;
  FUNC_11(VAR_8[0], 1);
  goto release_out;
 }

 VAR_9 = VAR_8[0];
 if (VAR_13 != 0)
  VAR_12[1] = FUNC_12(VAR_9, VAR_10[0], 1);
 VAR_4->inode_page = VAR_8[0];
 VAR_4->inode_page_locked = 1;


 for (VAR_14 = 1; VAR_14 <= VAR_13; VAR_14++) {
  bool VAR_16 = 0;

  if (!VAR_12[VAR_14] && VAR_6 == VAR_0) {

   if (!FUNC_4(VAR_7, &(VAR_12[VAR_14]))) {
    VAR_15 = -VAR_2;
    goto release_pages;
   }

   VAR_4->nid = VAR_12[VAR_14];
   VAR_8[VAR_14] = FUNC_10(VAR_4, VAR_11[VAR_14]);
   if (FUNC_1(VAR_8[VAR_14])) {
    FUNC_6(VAR_7, VAR_12[VAR_14]);
    VAR_15 = FUNC_2(VAR_8[VAR_14]);
    goto release_pages;
   }

   FUNC_14(VAR_9, VAR_10[VAR_14 - 1], VAR_12[VAR_14], VAR_14 == 1);
   FUNC_5(VAR_7, VAR_12[VAR_14]);
   VAR_16 = 1;
  } else if (VAR_6 == VAR_3 && VAR_14 == VAR_13 && VAR_13 > 1) {
   VAR_8[VAR_14] = FUNC_8(VAR_9, VAR_10[VAR_14 - 1]);
   if (FUNC_1(VAR_8[VAR_14])) {
    VAR_15 = FUNC_2(VAR_8[VAR_14]);
    goto release_pages;
   }
   VAR_16 = 1;
  }
  if (VAR_14 == 1) {
   VAR_4->inode_page_locked = 0;
   FUNC_15(VAR_9);
  } else {
   FUNC_11(VAR_9, 1);
  }

  if (!VAR_16) {
   VAR_8[VAR_14] = FUNC_7(VAR_7, VAR_12[VAR_14]);
   if (FUNC_1(VAR_8[VAR_14])) {
    VAR_15 = FUNC_2(VAR_8[VAR_14]);
    FUNC_11(VAR_8[0], 0);
    goto release_out;
   }
  }
  if (VAR_14 < VAR_13) {
   VAR_9 = VAR_8[VAR_14];
   VAR_12[VAR_14 + 1] = FUNC_12(VAR_9, VAR_10[VAR_14], 0);
  }
 }
 VAR_4->nid = VAR_12[VAR_13];
 VAR_4->ofs_in_node = VAR_10[VAR_13];
 VAR_4->node_page = VAR_8[VAR_13];
 VAR_4->data_blkaddr = FUNC_3(VAR_4->inode,
    VAR_4->node_page, VAR_4->ofs_in_node);
 return 0;

release_pages:
 FUNC_11(VAR_9, 1);
 if (VAR_14 > 1)
  FUNC_11(VAR_8[0], 0);
release_out:
 VAR_4->inode_page = ((void*)0);
 VAR_4->node_page = ((void*)0);
 if (VAR_15 == -VAR_1) {
  VAR_4->cur_level = VAR_14;
  VAR_4->max_level = VAR_13;
  VAR_4->ofs_in_node = VAR_10[VAR_13];
 }
 return VAR_15;
}
