
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int sb; } ;
struct f2fs_dir_entry {int dummy; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct f2fs_dir_entry*,struct page*,struct inode*,struct inode*) ;
 struct f2fs_dir_entry* FUNC_12 (struct inode*,int *,struct page**) ;
 int FUNC_13 (struct f2fs_sb_info*) ;
 int FUNC_14 (struct page*,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct inode*,struct dentry*) ;
 int FUNC_18 (struct inode*,int) ;
 scalar_t__ FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_2, struct dentry *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_0(VAR_2);
 struct inode *VAR_5 = FUNC_5(VAR_3);
 struct f2fs_dir_entry *VAR_6;
 struct page *VAR_7;
 int VAR_8 = -VAR_1;

 FUNC_17(VAR_2, VAR_3);

 if (FUNC_19(FUNC_10(VAR_4)))
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_2);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_7(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_12(VAR_2, &VAR_3->d_name, &VAR_7);
 if (!VAR_6) {
  if (FUNC_3(VAR_7))
   VAR_8 = FUNC_4(VAR_7);
  goto fail;
 }

 FUNC_9(VAR_4, 1);

 FUNC_13(VAR_4);
 VAR_8 = FUNC_8(VAR_4);
 if (VAR_8) {
  FUNC_16(VAR_4);
  FUNC_14(VAR_7, 0);
  goto fail;
 }
 FUNC_11(VAR_6, VAR_7, VAR_2, VAR_5);
 FUNC_16(VAR_4);

 if (FUNC_2(VAR_2))
  FUNC_15(VAR_4->sb, 1);
fail:
 FUNC_18(VAR_5, VAR_8);
 return VAR_8;
}
