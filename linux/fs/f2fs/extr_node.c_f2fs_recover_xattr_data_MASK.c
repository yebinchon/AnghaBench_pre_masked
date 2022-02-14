
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct node_info {int blk_addr; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int dummy; } ;
typedef int nid_t ;
struct TYPE_2__ {int i_xattr_nid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_1 ;
 int FUNC_4 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct f2fs_sb_info*,struct inode*,int) ;
 int FUNC_6 (struct f2fs_sb_info*,int *) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct f2fs_sb_info*,int ) ;
 int FUNC_9 (struct f2fs_sb_info*,int ,struct node_info*) ;
 int FUNC_10 (struct f2fs_sb_info*,int ) ;
 struct page* FUNC_11 (struct dnode_of_data*,int ) ;
 int FUNC_12 (struct page*,int) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_16 (struct f2fs_sb_info*,struct node_info*,int ,int) ;
 int FUNC_17 (struct page*) ;

int FUNC_18(struct inode *VAR_4, struct page *VAR_5)
{
 struct f2fs_sb_info *VAR_6 = FUNC_1(VAR_4);
 nid_t VAR_7 = FUNC_0(VAR_4)->i_xattr_nid;
 nid_t VAR_8;
 struct dnode_of_data VAR_9;
 struct node_info VAR_10;
 struct page *VAR_11;
 int VAR_12;

 if (!VAR_7)
  goto recover_xnid;


 VAR_12 = FUNC_9(VAR_6, VAR_7, &VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_10(VAR_6, VAR_10.blk_addr);
 FUNC_5(VAR_6, VAR_4, 0);
 FUNC_16(VAR_6, &VAR_10, VAR_1, 0);

recover_xnid:

 if (!FUNC_6(VAR_6, &VAR_8))
  return -VAR_0;

 FUNC_15(&VAR_9, VAR_4, ((void*)0), ((void*)0), VAR_8);
 VAR_11 = FUNC_11(&VAR_9, VAR_3);
 if (FUNC_3(VAR_11)) {
  FUNC_8(VAR_6, VAR_8);
  return FUNC_4(VAR_11);
 }

 FUNC_7(VAR_6, VAR_8);
 FUNC_13(VAR_4);


 FUNC_14(FUNC_2(VAR_11), FUNC_2(VAR_5), VAR_2);

 FUNC_17(VAR_11);
 FUNC_12(VAR_11, 1);

 return 0;
}
