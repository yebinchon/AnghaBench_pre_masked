
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union hfs_cat_rec {int dummy; } hfs_cat_rec ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int name; } ;
struct inode {scalar_t__ i_size; int i_ctime; int i_mtime; int i_ino; int i_mode; struct super_block* i_sb; int i_nlink; } ;
struct hfs_find_data {int search_key; TYPE_1__* tree; } ;
struct TYPE_4__ {int cat_tree; } ;
struct TYPE_3__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct hfs_find_data*) ;
 int FUNC_5 (struct hfs_find_data*,union hfs_cat_rec*,int) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (struct super_block*,int ,int ,struct qstr const*) ;
 int FUNC_8 (union hfs_cat_rec*,int ,struct inode*) ;
 int FUNC_9 (struct super_block*,union hfs_cat_rec*,int ,int ,struct qstr const*) ;
 int FUNC_10 (int ,char*,int ,int ,int ) ;
 int FUNC_11 (struct hfs_find_data*) ;
 int FUNC_12 (int ,struct hfs_find_data*) ;
 int FUNC_13 (struct inode*) ;

int FUNC_14(u32 VAR_7, struct inode *VAR_8, const struct qstr *VAR_9, struct inode *VAR_10)
{
 struct hfs_find_data VAR_11;
 struct super_block *VAR_12;
 union hfs_cat_rec VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_10(VAR_0, "create_cat: %s,%u(%d)\n",
  VAR_9->name, VAR_7, VAR_10->i_nlink);
 if (VAR_8->i_size >= VAR_6)
  return -VAR_3;

 VAR_12 = VAR_8->i_sb;
 VAR_15 = FUNC_12(FUNC_0(VAR_12)->cat_tree, &VAR_11);
 if (VAR_15)
  return VAR_15;





 VAR_15 = FUNC_3(VAR_11.tree, 2 * VAR_11.tree->depth);
 if (VAR_15)
  goto err2;

 FUNC_7(VAR_12, VAR_11.search_key, VAR_7, ((void*)0));
 VAR_14 = FUNC_9(VAR_12, &VAR_13, FUNC_1(VAR_10->i_mode) ?
   VAR_5 : VAR_4,
   VAR_8->i_ino, VAR_9);
 VAR_15 = FUNC_4(&VAR_11);
 if (VAR_15 != -VAR_2) {
  if (!VAR_15)
   VAR_15 = -VAR_1;
  goto err2;
 }
 VAR_15 = FUNC_5(&VAR_11, &VAR_13, VAR_14);
 if (VAR_15)
  goto err2;

 FUNC_7(VAR_12, VAR_11.search_key, VAR_8->i_ino, VAR_9);
 VAR_14 = FUNC_8(&VAR_13, VAR_7, VAR_10);
 VAR_15 = FUNC_4(&VAR_11);
 if (VAR_15 != -VAR_2) {

  if (!VAR_15)
   VAR_15 = -VAR_1;
  goto err1;
 }
 VAR_15 = FUNC_5(&VAR_11, &VAR_13, VAR_14);
 if (VAR_15)
  goto err1;

 VAR_8->i_size++;
 VAR_8->i_mtime = VAR_8->i_ctime = FUNC_2(VAR_8);
 FUNC_13(VAR_8);
 FUNC_11(&VAR_11);
 return 0;

err1:
 FUNC_7(VAR_12, VAR_11.search_key, VAR_7, ((void*)0));
 if (!FUNC_4(&VAR_11))
  FUNC_6(&VAR_11);
err2:
 FUNC_11(&VAR_11);
 return VAR_15;
}
