
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; int i_mapping; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int node_changed; } ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct dnode_of_data*,struct page*) ;
 struct page* FUNC_5 (struct f2fs_sb_info*,int ) ;
 struct page* FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct dnode_of_data*) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct dnode_of_data*,struct inode*,struct page*,struct page*,int ) ;

int FUNC_13(struct inode *VAR_1)
{
 struct f2fs_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct dnode_of_data VAR_3;
 struct page *VAR_4, *VAR_5;
 int VAR_6 = 0;

 if (!FUNC_7(VAR_1))
  return 0;

 VAR_5 = FUNC_6(VAR_1->i_mapping, 0, 0);
 if (!VAR_5)
  return -VAR_0;

 FUNC_8(VAR_2);

 VAR_4 = FUNC_5(VAR_2, VAR_1->i_ino);
 if (FUNC_1(VAR_4)) {
  VAR_6 = FUNC_2(VAR_4);
  goto out;
 }

 FUNC_12(&VAR_3, VAR_1, VAR_4, VAR_4, 0);

 if (FUNC_7(VAR_1))
  VAR_6 = FUNC_4(&VAR_3, VAR_5);

 FUNC_9(&VAR_3);
out:
 FUNC_11(VAR_2);

 FUNC_10(VAR_5, 1);

 FUNC_3(VAR_2, VAR_3.node_changed);

 return VAR_6;
}
