
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int name; } ;
struct inode {int i_ino; void* i_ctime; void* i_mtime; int i_size; struct super_block* i_sb; } ;
struct hfs_find_data {int entrylength; int bnode; int search_key; int entryoffset; TYPE_5__* tree; } ;
struct TYPE_7__ {int type; } ;
typedef TYPE_1__ hfsplus_cat_entry ;
typedef int entry ;
struct TYPE_9__ {int cat_tree; } ;
struct TYPE_8__ {scalar_t__ depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct hfs_find_data*,int ) ;
 int FUNC_8 (struct hfs_find_data*,TYPE_1__*,int) ;
 int FUNC_9 (struct hfs_find_data*) ;
 int FUNC_10 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct hfs_find_data*) ;
 int FUNC_12 (int ,struct hfs_find_data*) ;
 int VAR_6 ;
 int FUNC_13 (struct super_block*,int ,int ,struct qstr const*) ;
 int FUNC_14 (struct super_block*,int ,int ) ;
 int FUNC_15 (struct super_block*,TYPE_1__*,int,int ,struct qstr const*) ;
 int FUNC_16 (struct inode*,int ) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 scalar_t__ FUNC_19 (int) ;

int FUNC_20(u32 VAR_7,
         struct inode *VAR_8, const struct qstr *VAR_9,
         struct inode *VAR_10, const struct qstr *VAR_11)
{
 struct super_block *VAR_12 = VAR_8->i_sb;
 struct hfs_find_data VAR_13, VAR_14;
 hfsplus_cat_entry VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;

 FUNC_10(VAR_0, "rename_cat: %u - %lu,%s - %lu,%s\n",
  VAR_7, VAR_8->i_ino, VAR_9->name,
  VAR_10->i_ino, VAR_11->name);
 VAR_18 = FUNC_12(FUNC_0(VAR_12)->cat_tree, &VAR_13);
 if (VAR_18)
  return VAR_18;
 VAR_14 = VAR_13;





 VAR_18 = FUNC_3(VAR_13.tree, 4 * (int)VAR_13.tree->depth - 1);
 if (VAR_18)
  goto out;


 VAR_18 = FUNC_13(VAR_12, VAR_13.search_key,
   VAR_8->i_ino, VAR_9);
 if (FUNC_19(VAR_18))
  goto out;

 VAR_18 = FUNC_7(&VAR_13, VAR_6);
 if (VAR_18)
  goto out;
 if (VAR_13.entrylength > sizeof(VAR_15) || VAR_13.entrylength < 0) {
  VAR_18 = -VAR_2;
  goto out;
 }

 FUNC_5(VAR_13.bnode, &VAR_15, VAR_13.entryoffset,
    VAR_13.entrylength);
 VAR_17 = FUNC_1(VAR_15.type);


 VAR_18 = FUNC_13(VAR_12, VAR_14.search_key,
   VAR_10->i_ino, VAR_11);
 if (FUNC_19(VAR_18))
  goto out;

 VAR_18 = FUNC_7(&VAR_14, VAR_6);
 if (VAR_18 != -VAR_3) {
  if (!VAR_18)
   VAR_18 = -VAR_1;
  goto out;
 }

 VAR_18 = FUNC_8(&VAR_14, &VAR_15, VAR_13.entrylength);
 if (VAR_18)
  goto out;
 VAR_10->i_size++;
 if (VAR_17 == VAR_4)
  FUNC_18(VAR_10);
 VAR_10->i_mtime = VAR_10->i_ctime = FUNC_2(VAR_10);


 VAR_18 = FUNC_13(VAR_12, VAR_13.search_key,
   VAR_8->i_ino, VAR_9);
 if (FUNC_19(VAR_18))
  goto out;

 VAR_18 = FUNC_7(&VAR_13, VAR_6);
 if (VAR_18)
  goto out;
 VAR_18 = FUNC_9(&VAR_13);
 if (VAR_18)
  goto out;
 VAR_8->i_size--;
 if (VAR_17 == VAR_4)
  FUNC_17(VAR_8);
 VAR_8->i_mtime = VAR_8->i_ctime = FUNC_2(VAR_8);


 FUNC_14(VAR_12, VAR_13.search_key, VAR_7);
 VAR_18 = FUNC_7(&VAR_13, VAR_6);
 if (VAR_18)
  goto out;
 VAR_17 = FUNC_6(VAR_13.bnode, VAR_13.entryoffset);
 VAR_18 = FUNC_9(&VAR_13);
 if (VAR_18)
  goto out;


 FUNC_14(VAR_12, VAR_14.search_key, VAR_7);
 VAR_16 = FUNC_15(VAR_12, &VAR_15, VAR_17,
  VAR_10->i_ino, VAR_11);
 if (FUNC_19(VAR_16 < 0)) {
  VAR_18 = VAR_16;
  goto out;
 }

 VAR_18 = FUNC_7(&VAR_14, VAR_6);
 if (VAR_18 != -VAR_3) {
  if (!VAR_18)
   VAR_18 = -VAR_1;
  goto out;
 }
 VAR_18 = FUNC_8(&VAR_14, &VAR_15, VAR_16);

 FUNC_16(VAR_10, VAR_5);
 FUNC_16(VAR_8, VAR_5);
out:
 FUNC_4(VAR_14.bnode);
 FUNC_11(&VAR_13);
 return VAR_18;
}
