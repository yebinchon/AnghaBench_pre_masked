
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nilfs_transaction_info {int dummy; } ;
struct nilfs_dir_entry {int dummy; } ;
struct inode {int i_sb; void* i_ctime; int i_mode; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct nilfs_dir_entry*,struct page*) ;
 struct nilfs_dir_entry* FUNC_8 (struct inode*,struct page**) ;
 int FUNC_9 (struct inode*) ;
 struct nilfs_dir_entry* FUNC_10 (struct inode*,int *,struct page**) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,struct nilfs_dir_entry*,struct page*,struct inode*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct nilfs_transaction_info*,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct page*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_5, struct dentry *VAR_6,
   struct inode *VAR_7, struct dentry *VAR_8,
   unsigned int VAR_9)
{
 struct inode *VAR_10 = FUNC_2(VAR_6);
 struct inode *VAR_11 = FUNC_2(VAR_8);
 struct page *VAR_12 = ((void*)0);
 struct nilfs_dir_entry *VAR_13 = ((void*)0);
 struct page *VAR_14;
 struct nilfs_dir_entry *VAR_15;
 struct nilfs_transaction_info VAR_16;
 int VAR_17;

 if (VAR_9 & ~VAR_4)
  return -VAR_0;

 VAR_17 = FUNC_14(VAR_5->i_sb, &VAR_16, 1);
 if (FUNC_17(VAR_17))
  return VAR_17;

 VAR_17 = -VAR_2;
 VAR_15 = FUNC_10(VAR_5, &VAR_6->d_name, &VAR_14);
 if (!VAR_15)
  goto out;

 if (FUNC_0(VAR_10->i_mode)) {
  VAR_17 = -VAR_1;
  VAR_13 = FUNC_8(VAR_10, &VAR_12);
  if (!VAR_13)
   goto out_old;
 }

 if (VAR_11) {
  struct page *VAR_18;
  struct nilfs_dir_entry *VAR_19;

  VAR_17 = -VAR_3;
  if (VAR_13 && !FUNC_9(VAR_11))
   goto out_dir;

  VAR_17 = -VAR_2;
  VAR_19 = FUNC_10(VAR_7, &VAR_8->d_name, &VAR_18);
  if (!VAR_19)
   goto out_dir;
  FUNC_12(VAR_7, VAR_19, VAR_18, VAR_10);
  FUNC_11(VAR_7);
  VAR_11->i_ctime = FUNC_1(VAR_11);
  if (VAR_13)
   FUNC_3(VAR_11);
  FUNC_3(VAR_11);
  FUNC_11(VAR_11);
 } else {
  VAR_17 = FUNC_6(VAR_8, VAR_10);
  if (VAR_17)
   goto out_dir;
  if (VAR_13) {
   FUNC_4(VAR_7);
   FUNC_11(VAR_7);
  }
 }





 VAR_10->i_ctime = FUNC_1(VAR_10);

 FUNC_7(VAR_15, VAR_14);

 if (VAR_13) {
  FUNC_12(VAR_10, VAR_13, VAR_12, VAR_7);
  FUNC_3(VAR_5);
 }
 FUNC_11(VAR_5);
 FUNC_11(VAR_10);

 VAR_17 = FUNC_15(VAR_5->i_sb);
 return VAR_17;

out_dir:
 if (VAR_13) {
  FUNC_5(VAR_12);
  FUNC_16(VAR_12);
 }
out_old:
 FUNC_5(VAR_14);
 FUNC_16(VAR_14);
out:
 FUNC_13(VAR_5->i_sb);
 return VAR_17;
}
