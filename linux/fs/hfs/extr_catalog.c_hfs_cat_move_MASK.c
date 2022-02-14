
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Flags; } ;
union hfs_cat_rec {int type; TYPE_1__ file; } ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int name; } ;
struct inode {int i_ino; void* i_ctime; void* i_mtime; int i_size; struct super_block* i_sb; } ;
struct hfs_find_data {int entrylength; int bnode; int search_key; int entryoffset; TYPE_2__* tree; } ;
typedef int entry ;
struct TYPE_6__ {int cat_tree; } ;
struct TYPE_5__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (struct inode*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,union hfs_cat_rec*,int ,int) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (struct hfs_find_data*,union hfs_cat_rec*,int) ;
 int FUNC_7 (struct hfs_find_data*) ;
 int FUNC_8 (struct super_block*,int ,int ,struct qstr const*) ;
 int FUNC_9 (struct super_block*,union hfs_cat_rec*,int ,int ,struct qstr const*) ;
 int FUNC_10 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct hfs_find_data*) ;
 int FUNC_12 (int ,struct hfs_find_data*) ;
 int FUNC_13 (struct inode*) ;

int FUNC_14(u32 VAR_8, struct inode *VAR_9, const struct qstr *VAR_10,
   struct inode *VAR_11, const struct qstr *VAR_12)
{
 struct super_block *VAR_13;
 struct hfs_find_data VAR_14, VAR_15;
 union hfs_cat_rec VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 FUNC_10(VAR_0, "rename_cat: %u - %lu,%s - %lu,%s\n",
  VAR_8, VAR_9->i_ino, VAR_10->name,
  VAR_11->i_ino, VAR_12->name);
 VAR_13 = VAR_9->i_sb;
 VAR_19 = FUNC_12(FUNC_0(VAR_13)->cat_tree, &VAR_14);
 if (VAR_19)
  return VAR_19;
 VAR_15 = VAR_14;





 VAR_19 = FUNC_2(VAR_14.tree, 2 * VAR_14.tree->depth);
 if (VAR_19)
  goto out;


 FUNC_8(VAR_13, VAR_14.search_key, VAR_9->i_ino, VAR_10);
 VAR_19 = FUNC_5(&VAR_14);
 if (VAR_19)
  goto out;
 if (VAR_14.entrylength > sizeof(VAR_16) || VAR_14.entrylength < 0) {
  VAR_19 = -VAR_2;
  goto out;
 }

 FUNC_4(VAR_14.bnode, &VAR_16, VAR_14.entryoffset,
       VAR_14.entrylength);


 FUNC_8(VAR_13, VAR_15.search_key, VAR_11->i_ino, VAR_12);
 VAR_19 = FUNC_5(&VAR_15);
 if (VAR_19 != -VAR_3) {
  if (!VAR_19)
   VAR_19 = -VAR_1;
  goto out;
 }

 VAR_19 = FUNC_6(&VAR_15, &VAR_16, VAR_14.entrylength);
 if (VAR_19)
  goto out;
 VAR_11->i_size++;
 VAR_11->i_mtime = VAR_11->i_ctime = FUNC_1(VAR_11);
 FUNC_13(VAR_11);


 FUNC_8(VAR_13, VAR_14.search_key, VAR_9->i_ino, VAR_10);
 VAR_19 = FUNC_5(&VAR_14);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_7(&VAR_14);
 if (VAR_19)
  goto out;
 VAR_9->i_size--;
 VAR_9->i_mtime = VAR_9->i_ctime = FUNC_1(VAR_9);
 FUNC_13(VAR_9);

 VAR_18 = VAR_16.type;
 if (VAR_18 == VAR_4 && !(VAR_16.file.Flags & VAR_7))
  goto out;


 FUNC_8(VAR_13, VAR_14.search_key, VAR_8, ((void*)0));
 VAR_19 = FUNC_5(&VAR_14);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_7(&VAR_14);
 if (VAR_19)
  goto out;


 FUNC_8(VAR_13, VAR_15.search_key, VAR_8, ((void*)0));
 VAR_17 = FUNC_9(VAR_13, &VAR_16, VAR_18 == VAR_4 ? VAR_5 : VAR_6,
     VAR_11->i_ino, VAR_12);
 VAR_19 = FUNC_5(&VAR_15);
 if (VAR_19 != -VAR_3) {
  if (!VAR_19)
   VAR_19 = -VAR_1;
  goto out;
 }
 VAR_19 = FUNC_6(&VAR_15, &VAR_16, VAR_17);
out:
 FUNC_3(VAR_15.bnode);
 FUNC_11(&VAR_14);
 return VAR_19;
}
