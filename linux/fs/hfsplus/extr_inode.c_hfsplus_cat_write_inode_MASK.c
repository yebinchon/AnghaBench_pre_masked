
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int i_ctime; int i_mtime; int i_atime; scalar_t__ i_size; int i_mode; int i_ino; int i_sb; int i_nlink; } ;
struct TYPE_8__ {int rootflags; int userflags; } ;
struct hfsplus_cat_folder {int flags; void* subfolders; void* valence; void* attribute_mod_date; void* content_mod_date; void* access_date; TYPE_2__ permissions; } ;
struct hfsplus_cat_file {int flags; void* attribute_mod_date; void* content_mod_date; void* access_date; TYPE_2__ permissions; int data_fork; int rsrc_fork; } ;
struct hfs_find_data {int entrylength; int entryoffset; int bnode; } ;
struct TYPE_7__ {struct hfsplus_cat_file file; struct hfsplus_cat_folder folder; } ;
typedef TYPE_1__ hfsplus_cat_entry ;
struct TYPE_10__ {int flags; scalar_t__ subfolders; struct inode* rsrc_inode; } ;
struct TYPE_9__ {int cat_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_4 ;
 TYPE_5__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,TYPE_1__*,int ,int) ;
 int FUNC_7 (int ,TYPE_1__*,int ,int) ;
 int FUNC_8 (struct hfs_find_data*) ;
 scalar_t__ FUNC_9 (int ,struct hfs_find_data*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,TYPE_2__*) ;
 scalar_t__ FUNC_12 (int ,int ,struct hfs_find_data*) ;
 int FUNC_13 (struct inode*,int *) ;
 int FUNC_14 (int ,int *) ;

int FUNC_15(struct inode *VAR_5)
{
 struct inode *VAR_6 = VAR_5;
 struct hfs_find_data VAR_7;
 hfsplus_cat_entry VAR_8;

 if (FUNC_1(VAR_5))
  VAR_6 = FUNC_0(VAR_5)->rsrc_inode;

 if (!VAR_6->i_nlink)
  return 0;

 if (FUNC_9(FUNC_2(VAR_6->i_sb)->cat_tree, &VAR_7))

  return -VAR_0;

 if (FUNC_12(VAR_6->i_sb, VAR_6->i_ino, &VAR_7))

  goto out;

 if (FUNC_3(VAR_6->i_mode)) {
  struct hfsplus_cat_folder *VAR_9 = &VAR_8.folder;

  if (VAR_7.entrylength < sizeof(struct hfsplus_cat_folder))
               ;
  FUNC_6(VAR_7.bnode, &VAR_8, VAR_7.entryoffset,
     sizeof(struct hfsplus_cat_folder));

  FUNC_11(VAR_5, &VAR_9->permissions);
  VAR_9->access_date = FUNC_10(VAR_5->i_atime);
  VAR_9->content_mod_date = FUNC_10(VAR_5->i_mtime);
  VAR_9->attribute_mod_date = FUNC_10(VAR_5->i_ctime);
  VAR_9->valence = FUNC_5(VAR_5->i_size - 2);
  if (VAR_9->flags & FUNC_4(VAR_3)) {
   VAR_9->subfolders =
    FUNC_5(FUNC_0(VAR_5)->subfolders);
  }
  FUNC_7(VAR_7.bnode, &VAR_8, VAR_7.entryoffset,
      sizeof(struct hfsplus_cat_folder));
 } else if (FUNC_1(VAR_5)) {
  struct hfsplus_cat_file *VAR_10 = &VAR_8.file;
  FUNC_6(VAR_7.bnode, &VAR_8, VAR_7.entryoffset,
          sizeof(struct hfsplus_cat_file));
  FUNC_13(VAR_5, &VAR_10->rsrc_fork);
  FUNC_7(VAR_7.bnode, &VAR_8, VAR_7.entryoffset,
    sizeof(struct hfsplus_cat_file));
 } else {
  struct hfsplus_cat_file *VAR_11 = &VAR_8.file;

  if (VAR_7.entrylength < sizeof(struct hfsplus_cat_file))
               ;
  FUNC_6(VAR_7.bnode, &VAR_8, VAR_7.entryoffset,
     sizeof(struct hfsplus_cat_file));
  FUNC_13(VAR_5, &VAR_11->data_fork);
  FUNC_11(VAR_5, &VAR_11->permissions);
  if (VAR_2 &
    (VAR_11->permissions.rootflags |
     VAR_11->permissions.userflags))
   VAR_11->flags |= FUNC_4(VAR_1);
  else
   VAR_11->flags &= FUNC_4(~VAR_1);
  VAR_11->access_date = FUNC_10(VAR_5->i_atime);
  VAR_11->content_mod_date = FUNC_10(VAR_5->i_mtime);
  VAR_11->attribute_mod_date = FUNC_10(VAR_5->i_ctime);
  FUNC_7(VAR_7.bnode, &VAR_8, VAR_7.entryoffset,
      sizeof(struct hfsplus_cat_file));
 }

 FUNC_14(VAR_4, &FUNC_0(VAR_5)->flags);
out:
 FUNC_8(&VAR_7);
 return 0;
}
