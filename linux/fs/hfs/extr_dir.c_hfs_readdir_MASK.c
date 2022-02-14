
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int FlNum; } ;
struct TYPE_9__ {int DirID; } ;
struct TYPE_8__ {int ParID; } ;
union hfs_cat_rec {scalar_t__ type; TYPE_3__ file; TYPE_2__ dir; TYPE_1__ thread; } ;
typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_size; scalar_t__ i_ino; struct super_block* i_sb; } ;
struct hfs_readdir_data {int key; int list; struct file* file; } ;
struct hfs_find_data {int entrylength; TYPE_4__* key; int entryoffset; int bnode; int search_key; } ;
struct hfs_cat_key {int dummy; } ;
struct hfs_cat_file {int dummy; } ;
struct hfs_cat_dir {int dummy; } ;
struct file {struct hfs_readdir_data* private_data; } ;
struct dir_context {scalar_t__ pos; } ;
typedef int entry ;
struct TYPE_14__ {int open_dir_lock; int open_dir_list; } ;
struct TYPE_13__ {int cat_tree; } ;
struct TYPE_12__ {int CName; int ParID; } ;
struct TYPE_11__ {TYPE_5__ cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 int VAR_8 ;
 TYPE_6__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct dir_context*,char*,int,scalar_t__,int ) ;
 int FUNC_4 (struct file*,struct dir_context*) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (int ,union hfs_cat_rec*,int ,int) ;
 int FUNC_7 (struct hfs_find_data*) ;
 int FUNC_8 (struct hfs_find_data*,int) ;
 int FUNC_9 (struct super_block*,int ,scalar_t__,int *) ;
 int FUNC_10 (struct hfs_find_data*) ;
 int FUNC_11 (int ,struct hfs_find_data*) ;
 int FUNC_12 (struct super_block*,char*,int *) ;
 struct hfs_readdir_data* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,TYPE_5__*,int) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct file *VAR_9, struct dir_context *VAR_10)
{
 struct inode *VAR_11 = FUNC_5(VAR_9);
 struct super_block *VAR_12 = VAR_11->i_sb;
 int VAR_13, VAR_14;
 char VAR_15[VAR_8];
 union hfs_cat_rec VAR_16;
 struct hfs_find_data VAR_17;
 struct hfs_readdir_data *VAR_18;
 u16 VAR_19;

 if (VAR_10->pos >= VAR_11->i_size)
  return 0;

 VAR_14 = FUNC_11(FUNC_1(VAR_12)->cat_tree, &VAR_17);
 if (VAR_14)
  return VAR_14;
 FUNC_9(VAR_12, VAR_17.search_key, VAR_11->i_ino, ((void*)0));
 VAR_14 = FUNC_7(&VAR_17);
 if (VAR_14)
  goto out;

 if (VAR_10->pos == 0) {

  if (!FUNC_4(VAR_9, VAR_10))
   goto out;
  VAR_10->pos = 1;
 }
 if (VAR_10->pos == 1) {
  if (VAR_17.entrylength > sizeof(VAR_16) || VAR_17.entrylength < 0) {
   VAR_14 = -VAR_2;
   goto out;
  }

  FUNC_6(VAR_17.bnode, &VAR_16, VAR_17.entryoffset, VAR_17.entrylength);
  if (VAR_16.type != VAR_7) {
   FUNC_16("bad catalog folder thread\n");
   VAR_14 = -VAR_2;
   goto out;
  }





  if (!FUNC_3(VAR_10, "..", 2,
       FUNC_2(VAR_16.thread.ParID), VAR_0))
   goto out;
  VAR_10->pos = 2;
 }
 if (VAR_10->pos >= VAR_11->i_size)
  goto out;
 VAR_14 = FUNC_8(&VAR_17, VAR_10->pos - 1);
 if (VAR_14)
  goto out;

 for (;;) {
  if (FUNC_2(VAR_17.key->cat.ParID) != VAR_11->i_ino) {
   FUNC_16("walked past end of dir\n");
   VAR_14 = -VAR_2;
   goto out;
  }

  if (VAR_17.entrylength > sizeof(VAR_16) || VAR_17.entrylength < 0) {
   VAR_14 = -VAR_2;
   goto out;
  }

  FUNC_6(VAR_17.bnode, &VAR_16, VAR_17.entryoffset, VAR_17.entrylength);
  VAR_19 = VAR_16.type;
  VAR_13 = FUNC_12(VAR_12, VAR_15, &VAR_17.key->cat.CName);
  if (VAR_19 == VAR_5) {
   if (VAR_17.entrylength < sizeof(struct hfs_cat_dir)) {
    FUNC_16("small dir entry\n");
    VAR_14 = -VAR_2;
    goto out;
   }
   if (!FUNC_3(VAR_10, VAR_15, VAR_13,
        FUNC_2(VAR_16.dir.DirID), VAR_0))
    break;
  } else if (VAR_19 == VAR_6) {
   if (VAR_17.entrylength < sizeof(struct hfs_cat_file)) {
    FUNC_16("small file entry\n");
    VAR_14 = -VAR_2;
    goto out;
   }
   if (!FUNC_3(VAR_10, VAR_15, VAR_13,
        FUNC_2(VAR_16.file.FlNum), VAR_1))
    break;
  } else {
   FUNC_16("bad catalog entry type %d\n", VAR_19);
   VAR_14 = -VAR_2;
   goto out;
  }
  VAR_10->pos++;
  if (VAR_10->pos >= VAR_11->i_size)
   goto out;
  VAR_14 = FUNC_8(&VAR_17, 1);
  if (VAR_14)
   goto out;
 }
 VAR_18 = VAR_9->private_data;
 if (!VAR_18) {
  VAR_18 = FUNC_13(sizeof(struct hfs_readdir_data), VAR_4);
  if (!VAR_18) {
   VAR_14 = -VAR_3;
   goto out;
  }
  VAR_9->private_data = VAR_18;
  VAR_18->file = VAR_9;
  FUNC_17(&FUNC_0(VAR_11)->open_dir_lock);
  FUNC_14(&VAR_18->list, &FUNC_0(VAR_11)->open_dir_list);
  FUNC_18(&FUNC_0(VAR_11)->open_dir_lock);
 }




 FUNC_15(&VAR_18->key, &VAR_17.key->cat, sizeof(struct hfs_cat_key));
out:
 FUNC_10(&VAR_17);
 return VAR_14;
}
