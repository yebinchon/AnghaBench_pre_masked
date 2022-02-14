
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_size; scalar_t__ i_ino; struct super_block* i_sb; } ;
struct hfsplus_readdir_data {int key; int list; struct file* file; } ;
struct hfsplus_cat_key {int dummy; } ;
struct hfsplus_cat_folder {int dummy; } ;
struct hfsplus_cat_file {int dummy; } ;
struct hfs_find_data {int entrylength; TYPE_8__* key; int entryoffset; int bnode; int search_key; } ;
struct file {scalar_t__ f_pos; struct hfsplus_readdir_data* private_data; } ;
struct dir_context {scalar_t__ pos; } ;
struct TYPE_18__ {int mode; } ;
struct TYPE_19__ {int id; TYPE_5__ permissions; } ;
struct TYPE_17__ {int id; } ;
struct TYPE_14__ {int parentID; } ;
struct TYPE_20__ {TYPE_6__ file; TYPE_4__ folder; int type; TYPE_1__ thread; } ;
typedef TYPE_7__ hfsplus_cat_entry ;
typedef int entry ;
struct TYPE_15__ {int name; int parent; } ;
struct TYPE_21__ {TYPE_2__ cat; } ;
struct TYPE_16__ {scalar_t__ i_ino; } ;
struct TYPE_13__ {int open_dir_lock; int open_dir_list; } ;
struct TYPE_12__ {TYPE_3__* hidden_dir; int cat_tree; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_11__* FUNC_0 (struct inode*) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_10__* FUNC_1 (struct super_block*) ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct dir_context*,char*,int,scalar_t__,unsigned int) ;
 int FUNC_11 (struct file*,struct dir_context*) ;
 struct inode* FUNC_12 (struct file*) ;
 int FUNC_13 (int ,TYPE_7__*,int ,int) ;
 int FUNC_14 (struct hfs_find_data*,int ) ;
 int FUNC_15 (struct hfs_find_data*,int) ;
 int FUNC_16 (struct hfs_find_data*) ;
 int FUNC_17 (int ,struct hfs_find_data*) ;
 int VAR_17 ;
 int FUNC_18 (struct super_block*,int ,scalar_t__) ;
 int FUNC_19 (struct super_block*,int *,char*,int*) ;
 int FUNC_20 (char*) ;
 void* FUNC_21 (int,int ) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,TYPE_8__*,int) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27(struct file *VAR_18, struct dir_context *VAR_19)
{
 struct inode *VAR_20 = FUNC_12(VAR_18);
 struct super_block *VAR_21 = VAR_20->i_sb;
 int VAR_22, VAR_23;
 char *VAR_24;
 hfsplus_cat_entry VAR_25;
 struct hfs_find_data VAR_26;
 struct hfsplus_readdir_data *VAR_27;
 u16 VAR_28;

 if (VAR_18->f_pos >= VAR_20->i_size)
  return 0;

 VAR_23 = FUNC_17(FUNC_1(VAR_21)->cat_tree, &VAR_26);
 if (VAR_23)
  return VAR_23;
 VAR_24 = FUNC_21(VAR_16 * VAR_14 + 1, VAR_10);
 if (!VAR_24) {
  VAR_23 = -VAR_9;
  goto out;
 }
 FUNC_18(VAR_21, VAR_26.search_key, VAR_20->i_ino);
 VAR_23 = FUNC_14(&VAR_26, VAR_17);
 if (VAR_23)
  goto out;

 if (VAR_19->pos == 0) {

  if (!FUNC_11(VAR_18, VAR_19))
   goto out;
  VAR_19->pos = 1;
 }
 if (VAR_19->pos == 1) {
  if (VAR_26.entrylength > sizeof(VAR_25) || VAR_26.entrylength < 0) {
   VAR_23 = -VAR_8;
   goto out;
  }

  FUNC_13(VAR_26.bnode, &VAR_25, VAR_26.entryoffset,
   VAR_26.entrylength);
  if (FUNC_8(VAR_25.type) != VAR_13) {
   FUNC_24("bad catalog folder thread\n");
   VAR_23 = -VAR_8;
   goto out;
  }
  if (VAR_26.entrylength < VAR_15) {
   FUNC_24("truncated catalog thread\n");
   VAR_23 = -VAR_8;
   goto out;
  }
  if (!FUNC_10(VAR_19, "..", 2,
       FUNC_9(VAR_25.thread.parentID), VAR_2))
   goto out;
  VAR_19->pos = 2;
 }
 if (VAR_19->pos >= VAR_20->i_size)
  goto out;
 VAR_23 = FUNC_15(&VAR_26, VAR_19->pos - 1);
 if (VAR_23)
  goto out;
 for (;;) {
  if (FUNC_9(VAR_26.key->cat.parent) != VAR_20->i_ino) {
   FUNC_24("walked past end of dir\n");
   VAR_23 = -VAR_8;
   goto out;
  }

  if (VAR_26.entrylength > sizeof(VAR_25) || VAR_26.entrylength < 0) {
   VAR_23 = -VAR_8;
   goto out;
  }

  FUNC_13(VAR_26.bnode, &VAR_25, VAR_26.entryoffset,
   VAR_26.entrylength);
  VAR_28 = FUNC_8(VAR_25.type);
  VAR_22 = VAR_16 * VAR_14;
  VAR_23 = FUNC_19(VAR_21, &VAR_26.key->cat.name, VAR_24, &VAR_22);
  if (VAR_23)
   goto out;
  if (VAR_28 == VAR_12) {
   if (VAR_26.entrylength <
     sizeof(struct hfsplus_cat_folder)) {
    FUNC_24("small dir entry\n");
    VAR_23 = -VAR_8;
    goto out;
   }
   if (FUNC_1(VAR_21)->hidden_dir &&
       FUNC_1(VAR_21)->hidden_dir->i_ino ==
     FUNC_9(VAR_25.folder.id))
    goto next;
   if (!FUNC_10(VAR_19, VAR_24, VAR_22,
        FUNC_9(VAR_25.folder.id), VAR_2))
    break;
  } else if (VAR_28 == VAR_11) {
   u16 VAR_29;
   unsigned VAR_30 = VAR_7;

   if (VAR_26.entrylength < sizeof(struct hfsplus_cat_file)) {
    FUNC_24("small file entry\n");
    VAR_23 = -VAR_8;
    goto out;
   }

   VAR_29 = FUNC_8(VAR_25.file.permissions.mode);
   if (FUNC_6(VAR_29))
    VAR_30 = VAR_5;
   else if (FUNC_5(VAR_29))
    VAR_30 = VAR_4;
   else if (FUNC_4(VAR_29))
    VAR_30 = VAR_3;
   else if (FUNC_3(VAR_29))
    VAR_30 = VAR_1;
   else if (FUNC_2(VAR_29))
    VAR_30 = VAR_0;
   else if (FUNC_7(VAR_29))
    VAR_30 = VAR_6;

   if (!FUNC_10(VAR_19, VAR_24, VAR_22,
          FUNC_9(VAR_25.file.id), VAR_30))
    break;
  } else {
   FUNC_24("bad catalog entry type\n");
   VAR_23 = -VAR_8;
   goto out;
  }
next:
  VAR_19->pos++;
  if (VAR_19->pos >= VAR_20->i_size)
   goto out;
  VAR_23 = FUNC_15(&VAR_26, 1);
  if (VAR_23)
   goto out;
 }
 VAR_27 = VAR_18->private_data;
 if (!VAR_27) {
  VAR_27 = FUNC_21(sizeof(struct hfsplus_readdir_data), VAR_10);
  if (!VAR_27) {
   VAR_23 = -VAR_9;
   goto out;
  }
  VAR_18->private_data = VAR_27;
  VAR_27->file = VAR_18;
  FUNC_25(&FUNC_0(VAR_20)->open_dir_lock);
  FUNC_22(&VAR_27->list, &FUNC_0(VAR_20)->open_dir_list);
  FUNC_26(&FUNC_0(VAR_20)->open_dir_lock);
 }




 FUNC_23(&VAR_27->key, VAR_26.key, sizeof(struct hfsplus_cat_key));
out:
 FUNC_20(VAR_24);
 FUNC_16(&VAR_26);
 return VAR_23;
}
