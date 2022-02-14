
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_mode; int i_mtime; scalar_t__ i_size; int i_sb; int i_nlink; } ;
struct hfs_find_data {int entrylength; int entryoffset; int bnode; TYPE_1__* search_key; } ;
struct hfs_cat_file {int dummy; } ;
struct hfs_cat_dir {int dummy; } ;
struct TYPE_11__ {void* MdDat; int PyLen; int LgLen; int ExtRec; int Flags; int FlNum; int RPyLen; int RLgLen; int RExtRec; } ;
struct TYPE_10__ {int Val; void* MdDat; int DirID; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_3__ file; TYPE_2__ dir; } ;
typedef TYPE_4__ hfs_cat_rec ;
struct TYPE_14__ {int cat_key; struct inode* rsrc_inode; } ;
struct TYPE_13__ {int cat_tree; int ext_tree; } ;
struct TYPE_9__ {int cat; } ;


 int FUNC_0 () ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_8__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;

 TYPE_7__* FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,TYPE_4__*,int ,int) ;
 int FUNC_8 (int ,TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_9 (struct hfs_find_data*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct hfs_find_data*) ;
 scalar_t__ FUNC_14 (int ,struct hfs_find_data*) ;
 int FUNC_15 (struct inode*,int ,int *,int *) ;
 void* FUNC_16 (int ) ;

int FUNC_17(struct inode *VAR_7, struct writeback_control *VAR_8)
{
 struct inode *VAR_9 = VAR_7;
 struct hfs_find_data VAR_10;
 hfs_cat_rec VAR_11;
 int VAR_12;

 FUNC_11(VAR_5, "hfs_write_inode: %lu\n", VAR_7->i_ino);
 VAR_12 = FUNC_12(VAR_7);
 if (VAR_12)
  return VAR_12;

 if (VAR_7->i_ino < VAR_4) {
  switch (VAR_7->i_ino) {
  case 128:
   break;
  case 129:
   FUNC_10(FUNC_3(VAR_7->i_sb)->ext_tree);
   return 0;
  case 130:
   FUNC_10(FUNC_3(VAR_7->i_sb)->cat_tree);
   return 0;
  default:
   FUNC_0();
   return -VAR_0;
  }
 }

 if (FUNC_2(VAR_7))
  VAR_9 = FUNC_1(VAR_7)->rsrc_inode;

 if (!VAR_9->i_nlink)
  return 0;

 if (FUNC_14(FUNC_3(VAR_9->i_sb)->cat_tree, &VAR_10))

  return -VAR_0;

 VAR_10.search_key->cat = FUNC_1(VAR_9)->cat_key;
 if (FUNC_9(&VAR_10))

  goto out;

 if (FUNC_4(VAR_9->i_mode)) {
  if (VAR_10.entrylength < sizeof(struct hfs_cat_dir))
               ;
  FUNC_7(VAR_10.bnode, &VAR_11, VAR_10.entryoffset,
      sizeof(struct hfs_cat_dir));
  if (VAR_11.type != VAR_1 ||
      FUNC_5(VAR_11.dir.DirID) != VAR_7->i_ino) {
  }

  VAR_11.dir.MdDat = FUNC_16(VAR_7->i_mtime);
  VAR_11.dir.Val = FUNC_6(VAR_7->i_size - 2);

  FUNC_8(VAR_10.bnode, &VAR_11, VAR_10.entryoffset,
       sizeof(struct hfs_cat_dir));
 } else if (FUNC_2(VAR_7)) {
  FUNC_7(VAR_10.bnode, &VAR_11, VAR_10.entryoffset,
          sizeof(struct hfs_cat_file));
  FUNC_15(VAR_7, VAR_11.file.RExtRec,
         &VAR_11.file.RLgLen, &VAR_11.file.RPyLen);
  FUNC_8(VAR_10.bnode, &VAR_11, VAR_10.entryoffset,
    sizeof(struct hfs_cat_file));
 } else {
  if (VAR_10.entrylength < sizeof(struct hfs_cat_file))
               ;
  FUNC_7(VAR_10.bnode, &VAR_11, VAR_10.entryoffset,
      sizeof(struct hfs_cat_file));
  if (VAR_11.type != VAR_2 ||
      FUNC_5(VAR_11.file.FlNum) != VAR_7->i_ino) {
  }

  if (VAR_7->i_mode & VAR_6)
   VAR_11.file.Flags &= ~VAR_3;
  else
   VAR_11.file.Flags |= VAR_3;
  FUNC_15(VAR_7, VAR_11.file.ExtRec, &VAR_11.file.LgLen, &VAR_11.file.PyLen);
  VAR_11.file.MdDat = FUNC_16(VAR_7->i_mtime);

  FUNC_8(VAR_10.bnode, &VAR_11, VAR_10.entryoffset,
       sizeof(struct hfs_cat_file));
 }
out:
 FUNC_13(&VAR_10);
 return 0;
}
