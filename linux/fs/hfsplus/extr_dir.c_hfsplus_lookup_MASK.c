
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct super_block {int s_root; } ;
struct qstr {char* name; int len; } ;
struct inode {int i_mode; struct super_block* i_sb; int i_ino; } ;
struct hfsplus_cat_folder {int dummy; } ;
struct hfsplus_cat_file {int dummy; } ;
struct hfs_find_data {int entrylength; int search_key; } ;
struct dentry {int * d_fsdata; struct qstr d_name; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {scalar_t__ fdType; scalar_t__ fdCreator; } ;
struct TYPE_12__ {scalar_t__ create_date; TYPE_3__ permissions; TYPE_2__ user_info; int id; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_13__ {TYPE_4__ file; TYPE_1__ folder; int type; } ;
typedef TYPE_5__ hfsplus_cat_entry ;
typedef int entry ;
struct TYPE_15__ {scalar_t__ create_date; int linkid; } ;
struct TYPE_14__ {struct inode* hidden_dir; int cat_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_8__* FUNC_2 (struct inode*) ;
 TYPE_7__* FUNC_3 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 struct inode* FUNC_9 (int ) ;
 struct dentry* FUNC_10 (struct inode*,struct dentry*) ;
 int FUNC_11 (struct hfs_find_data*,TYPE_5__*,int) ;
 int FUNC_12 (struct hfs_find_data*) ;
 int FUNC_13 (int ,struct hfs_find_data*) ;
 int FUNC_14 (struct super_block*,int ,int ,struct qstr*) ;
 struct inode* FUNC_15 (struct super_block*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,int) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static struct dentry *FUNC_19(struct inode *VAR_6, struct dentry *VAR_7,
         unsigned int VAR_8)
{
 struct inode *VAR_9 = ((void*)0);
 struct hfs_find_data VAR_10;
 struct super_block *VAR_11;
 hfsplus_cat_entry VAR_12;
 int VAR_13;
 u32 VAR_14, VAR_15 = 0;
 u16 VAR_16;

 VAR_11 = VAR_6->i_sb;

 VAR_7->d_fsdata = ((void*)0);
 VAR_13 = FUNC_13(FUNC_3(VAR_11)->cat_tree, &VAR_10);
 if (VAR_13)
  return FUNC_1(VAR_13);
 VAR_13 = FUNC_14(VAR_11, VAR_10.search_key, VAR_6->i_ino,
   &VAR_7->d_name);
 if (FUNC_18(VAR_13 < 0))
  goto fail;
again:
 VAR_13 = FUNC_11(&VAR_10, &VAR_12, sizeof(VAR_12));
 if (VAR_13) {
  if (VAR_13 == -VAR_1) {
   FUNC_12(&VAR_10);

   VAR_9 = ((void*)0);
   goto out;
  }
  goto fail;
 }
 VAR_16 = FUNC_6(VAR_12.type);
 if (VAR_16 == VAR_3) {
  if (VAR_10.entrylength < sizeof(struct hfsplus_cat_folder)) {
   VAR_13 = -VAR_0;
   goto fail;
  }
  VAR_14 = FUNC_7(VAR_12.folder.id);
  VAR_7->d_fsdata = (void *)(unsigned long)VAR_14;
 } else if (VAR_16 == VAR_2) {
  if (VAR_10.entrylength < sizeof(struct hfsplus_cat_file)) {
   VAR_13 = -VAR_0;
   goto fail;
  }
  VAR_14 = FUNC_7(VAR_12.file.id);
  if (VAR_12.file.user_info.fdType ==
    FUNC_8(VAR_4) &&
    VAR_12.file.user_info.fdCreator ==
    FUNC_8(VAR_5) &&
    FUNC_3(VAR_11)->hidden_dir &&
    (VAR_12.file.create_date ==
     FUNC_2(FUNC_3(VAR_11)->hidden_dir)->
      create_date ||
    VAR_12.file.create_date ==
     FUNC_2(FUNC_9(VAR_11->s_root))->
      create_date)) {
   struct qstr VAR_17;
   char VAR_18[32];

   if (VAR_7->d_fsdata) {




    VAR_14 = (unsigned long)VAR_7->d_fsdata;
    VAR_15 = 0;
   } else {
    VAR_7->d_fsdata = (void *)(unsigned long)VAR_14;
    VAR_15 =
     FUNC_7(VAR_12.file.permissions.dev);
    VAR_17.len = FUNC_17(VAR_18, "iNode%d", VAR_15);
    VAR_17.name = VAR_18;
    VAR_13 = FUNC_14(VAR_11, VAR_10.search_key,
     FUNC_3(VAR_11)->hidden_dir->i_ino,
     &VAR_17);
    if (FUNC_18(VAR_13 < 0))
     goto fail;
    goto again;
   }
  } else if (!VAR_7->d_fsdata)
   VAR_7->d_fsdata = (void *)(unsigned long)VAR_14;
 } else {
  FUNC_16("invalid catalog entry type in lookup\n");
  VAR_13 = -VAR_0;
  goto fail;
 }
 FUNC_12(&VAR_10);
 VAR_9 = FUNC_15(VAR_6->i_sb, VAR_14);
 if (FUNC_4(VAR_9))
  return FUNC_0(VAR_9);
 if (FUNC_5(VAR_9->i_mode))
  FUNC_2(VAR_9)->linkid = VAR_15;
out:
 return FUNC_10(VAR_9, VAR_7);
fail:
 FUNC_12(&VAR_10);
 return FUNC_1(VAR_13);
}
