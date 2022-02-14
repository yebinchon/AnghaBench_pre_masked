
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_dir_entry {int dummy; } ;
struct page {int dummy; } ;
struct inode {void* i_ctime; int i_mode; } ;
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
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct dentry*,struct inode*) ;
 int FUNC_10 (struct inode*,struct ufs_dir_entry*,struct page*) ;
 struct ufs_dir_entry* FUNC_11 (struct inode*,struct page**) ;
 int FUNC_12 (struct inode*) ;
 struct ufs_dir_entry* FUNC_13 (struct inode*,int *,struct page**) ;
 int FUNC_14 (struct inode*,struct ufs_dir_entry*,struct page*,struct inode*,int) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_5, struct dentry *VAR_6,
        struct inode *VAR_7, struct dentry *VAR_8,
        unsigned int VAR_9)
{
 struct inode *VAR_10 = FUNC_2(VAR_6);
 struct inode *VAR_11 = FUNC_2(VAR_8);
 struct page *VAR_12 = ((void*)0);
 struct ufs_dir_entry * VAR_13 = ((void*)0);
 struct page *VAR_14;
 struct ufs_dir_entry *VAR_15;
 int VAR_16 = -VAR_2;

 if (VAR_9 & ~VAR_4)
  return -VAR_0;

 VAR_15 = FUNC_13(VAR_5, &VAR_6->d_name, &VAR_14);
 if (!VAR_15)
  goto out;

 if (FUNC_0(VAR_10->i_mode)) {
  VAR_16 = -VAR_1;
  VAR_13 = FUNC_11(VAR_10, &VAR_12);
  if (!VAR_13)
   goto out_old;
 }

 if (VAR_11) {
  struct page *VAR_17;
  struct ufs_dir_entry *VAR_18;

  VAR_16 = -VAR_3;
  if (VAR_13 && !FUNC_12(VAR_11))
   goto out_dir;

  VAR_16 = -VAR_2;
  VAR_18 = FUNC_13(VAR_7, &VAR_8->d_name, &VAR_17);
  if (!VAR_18)
   goto out_dir;
  FUNC_14(VAR_7, VAR_18, VAR_17, VAR_10, 1);
  VAR_11->i_ctime = FUNC_1(VAR_11);
  if (VAR_13)
   FUNC_3(VAR_11);
  FUNC_4(VAR_11);
 } else {
  VAR_16 = FUNC_9(VAR_8, VAR_10);
  if (VAR_16)
   goto out_dir;
  if (VAR_13)
   FUNC_5(VAR_7);
 }





 VAR_10->i_ctime = FUNC_1(VAR_10);

 FUNC_10(VAR_5, VAR_15, VAR_14);
 FUNC_7(VAR_10);

 if (VAR_13) {
  if (VAR_5 != VAR_7)
   FUNC_14(VAR_10, VAR_13, VAR_12, VAR_7, 0);
  else {
   FUNC_6(VAR_12);
   FUNC_8(VAR_12);
  }
  FUNC_4(VAR_5);
 }
 return 0;


out_dir:
 if (VAR_13) {
  FUNC_6(VAR_12);
  FUNC_8(VAR_12);
 }
out_old:
 FUNC_6(VAR_14);
 FUNC_8(VAR_14);
out:
 return VAR_16;
}
