
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {scalar_t__ max_file_blocks; } ;
struct dnode_of_data {int node_page; scalar_t__ ofs_in_node; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (int ,struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct f2fs_sb_info* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;
 int FUNC_7 (struct dnode_of_data*,scalar_t__,int ) ;
 struct page* FUNC_8 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct dnode_of_data*) ;
 int FUNC_12 (struct page*,int) ;
 int FUNC_13 (struct dnode_of_data*,int) ;
 int FUNC_14 (struct inode*,struct page*,int ) ;
 int FUNC_15 (struct inode*,scalar_t__) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct dnode_of_data*,struct inode*,struct page*,int *,int ) ;
 int FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct inode*,int) ;
 int FUNC_20 (struct inode*,int ,int) ;

int FUNC_21(struct inode *VAR_2, u64 VAR_3, bool VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_2(VAR_2);
 struct dnode_of_data VAR_6;
 pgoff_t VAR_7;
 int VAR_8 = 0, VAR_9 = 0;
 struct page *VAR_10;
 bool VAR_11 = 0;

 FUNC_18(VAR_2, VAR_3);

 VAR_7 = (pgoff_t)FUNC_1(VAR_3);

 if (VAR_7 >= VAR_5->max_file_blocks)
  goto free_partial;

 if (VAR_4)
  FUNC_10(VAR_5);

 VAR_10 = FUNC_8(VAR_5, VAR_2->i_ino);
 if (FUNC_3(VAR_10)) {
  VAR_9 = FUNC_5(VAR_10);
  goto out;
 }

 if (FUNC_9(VAR_2)) {
  FUNC_14(VAR_2, VAR_10, VAR_3);
  FUNC_12(VAR_10, 1);
  VAR_11 = 1;
  goto out;
 }

 FUNC_17(&VAR_6, VAR_2, VAR_10, ((void*)0), 0);
 VAR_9 = FUNC_7(&VAR_6, VAR_7, VAR_1);
 if (VAR_9) {
  if (VAR_9 == -VAR_0)
   goto free_next;
  goto out;
 }

 VAR_8 = FUNC_0(VAR_6.node_page, VAR_2);

 VAR_8 -= VAR_6.ofs_in_node;
 FUNC_6(VAR_5, VAR_8 < 0);

 if (VAR_6.ofs_in_node || FUNC_4(VAR_6.node_page)) {
  FUNC_13(&VAR_6, VAR_8);
  VAR_7 += VAR_8;
 }

 FUNC_11(&VAR_6);
free_next:
 VAR_9 = FUNC_15(VAR_2, VAR_7);
out:
 if (VAR_4)
  FUNC_16(VAR_5);
free_partial:

 if (!VAR_9)
  VAR_9 = FUNC_20(VAR_2, VAR_3, VAR_11);

 FUNC_19(VAR_2, VAR_9);
 return VAR_9;
}
