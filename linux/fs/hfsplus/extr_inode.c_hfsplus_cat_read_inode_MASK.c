
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct inode {int i_size; void* i_ctime; void* i_mtime; void* i_atime; int i_mode; TYPE_1__* i_mapping; int * i_op; int * i_fop; } ;
struct TYPE_8__ {scalar_t__ dev; } ;
struct hfsplus_cat_folder {int flags; scalar_t__ subfolders; int create_date; int attribute_mod_date; int content_mod_date; int access_date; scalar_t__ valence; TYPE_3__ permissions; } ;
struct hfsplus_cat_file {int create_date; int attribute_mod_date; int content_mod_date; int access_date; TYPE_3__ permissions; int data_fork; int rsrc_fork; } ;
struct hfs_find_data {int entrylength; int entryoffset; int bnode; } ;
struct TYPE_7__ {struct hfsplus_cat_file file; struct hfsplus_cat_folder folder; } ;
typedef TYPE_2__ hfsplus_cat_entry ;
struct TYPE_9__ {int subfolders; int create_date; scalar_t__ fs_blocks; scalar_t__ linkid; } ;
struct TYPE_6__ {int * a_ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct inode*,TYPE_3__*,int) ;
 int FUNC_10 (struct inode*,int *) ;
 int FUNC_11 (struct inode*,int ,int) ;
 int FUNC_12 (struct inode*) ;
 int VAR_9 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct inode*,int) ;
 void* FUNC_15 (int ) ;

int FUNC_16(struct inode *VAR_10, struct hfs_find_data *VAR_11)
{
 hfsplus_cat_entry VAR_12;
 int VAR_13 = 0;
 u16 VAR_14;

 VAR_14 = FUNC_7(VAR_11->bnode, VAR_11->entryoffset);

 FUNC_0(VAR_10)->linkid = 0;
 if (VAR_14 == VAR_2) {
  struct hfsplus_cat_folder *VAR_15 = &VAR_12.folder;

  if (VAR_11->entrylength < sizeof(struct hfsplus_cat_folder))
               ;
  FUNC_6(VAR_11->bnode, &VAR_12, VAR_11->entryoffset,
     sizeof(struct hfsplus_cat_folder));
  FUNC_9(VAR_10, &VAR_15->permissions, 1);
  FUNC_14(VAR_10, 1);
  VAR_10->i_size = 2 + FUNC_4(VAR_15->valence);
  VAR_10->i_atime = FUNC_15(FUNC_8(VAR_15->access_date));
  VAR_10->i_mtime = FUNC_15(FUNC_8(VAR_15->content_mod_date));
  VAR_10->i_ctime = FUNC_15(FUNC_8(VAR_15->attribute_mod_date));
  FUNC_0(VAR_10)->create_date = VAR_15->create_date;
  FUNC_0(VAR_10)->fs_blocks = 0;
  if (VAR_15->flags & FUNC_5(VAR_3)) {
   FUNC_0(VAR_10)->subfolders =
    FUNC_4(VAR_15->subfolders);
  }
  VAR_10->i_op = &VAR_5;
  VAR_10->i_fop = &VAR_6;
 } else if (VAR_14 == VAR_1) {
  struct hfsplus_cat_file *VAR_16 = &VAR_12.file;

  if (VAR_11->entrylength < sizeof(struct hfsplus_cat_file))
               ;
  FUNC_6(VAR_11->bnode, &VAR_12, VAR_11->entryoffset,
     sizeof(struct hfsplus_cat_file));

  FUNC_10(VAR_10, FUNC_1(VAR_10) ?
     &VAR_16->rsrc_fork : &VAR_16->data_fork);
  FUNC_9(VAR_10, &VAR_16->permissions, 0);
  FUNC_14(VAR_10, 1);
  if (FUNC_3(VAR_10->i_mode)) {
   if (VAR_16->permissions.dev)
    FUNC_14(VAR_10,
       FUNC_4(VAR_16->permissions.dev));
   VAR_10->i_op = &VAR_7;
   VAR_10->i_fop = &VAR_8;
   VAR_10->i_mapping->a_ops = &VAR_4;
  } else if (FUNC_2(VAR_10->i_mode)) {
   VAR_10->i_op = &VAR_9;
   FUNC_12(VAR_10);
   VAR_10->i_mapping->a_ops = &VAR_4;
  } else {
   FUNC_11(VAR_10, VAR_10->i_mode,
        FUNC_4(VAR_16->permissions.dev));
  }
  VAR_10->i_atime = FUNC_15(FUNC_8(VAR_16->access_date));
  VAR_10->i_mtime = FUNC_15(FUNC_8(VAR_16->content_mod_date));
  VAR_10->i_ctime = FUNC_15(FUNC_8(VAR_16->attribute_mod_date));
  FUNC_0(VAR_10)->create_date = VAR_16->create_date;
 } else {
  FUNC_13("bad catalog entry used to create inode\n");
  VAR_13 = -VAR_0;
 }
 return VAR_13;
}
