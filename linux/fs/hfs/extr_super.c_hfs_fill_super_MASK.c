
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_root; int * s_d_op; int s_flags; int s_xattr; int * s_op; struct hfs_sb_info* s_fs_info; } ;
struct inode {int dummy; } ;
struct hfs_sb_info {int bitmap_lock; int mdb_work; int work_lock; struct super_block* sb; } ;
struct hfs_find_data {int entrylength; TYPE_1__* search_key; int entryoffset; int bnode; } ;
typedef int rec ;
typedef int hfs_cat_rec ;
struct TYPE_4__ {int cat_tree; } ;
struct TYPE_3__ {int cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct inode*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,int ,int) ;
 int FUNC_4 (struct super_block*,int ,struct hfs_find_data*) ;
 int VAR_7 ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (int ,struct hfs_find_data*) ;
 struct inode* FUNC_7 (struct super_block*,int *,int *) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct hfs_sb_info* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,struct hfs_sb_info*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct super_block *VAR_10, void *VAR_11, int VAR_12)
{
 struct hfs_sb_info *VAR_13;
 struct hfs_find_data VAR_14;
 hfs_cat_rec VAR_15;
 struct inode *VAR_16;
 int VAR_17;

 VAR_13 = FUNC_11(sizeof(struct hfs_sb_info), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->sb = VAR_10;
 VAR_10->s_fs_info = VAR_13;
 FUNC_16(&VAR_13->work_lock);
 FUNC_1(&VAR_13->mdb_work, VAR_6);

 VAR_17 = -VAR_0;
 if (!FUNC_13((char *)VAR_11, VAR_13)) {
  FUNC_14("unable to parse mount options\n");
  goto bail;
 }

 VAR_10->s_op = &VAR_8;
 VAR_10->s_xattr = VAR_9;
 VAR_10->s_flags |= VAR_5;
 FUNC_12(&VAR_13->bitmap_lock);

 VAR_17 = FUNC_8(VAR_10);
 if (VAR_17) {
  if (!VAR_12)
   FUNC_15("can't find a HFS filesystem on dev %s\n",
    FUNC_9(VAR_10));
  VAR_17 = -VAR_0;
  goto bail;
 }


 VAR_17 = FUNC_6(FUNC_0(VAR_10)->cat_tree, &VAR_14);
 if (VAR_17)
  goto bail_no_root;
 VAR_17 = FUNC_4(VAR_10, VAR_4, &VAR_14);
 if (!VAR_17) {
  if (VAR_14.entrylength > sizeof(VAR_15) || VAR_14.entrylength < 0) {
   VAR_17 = -VAR_1;
   goto bail;
  }
  FUNC_3(VAR_14.bnode, &VAR_15, VAR_14.entryoffset, VAR_14.entrylength);
 }
 if (VAR_17) {
  FUNC_5(&VAR_14);
  goto bail_no_root;
 }
 VAR_17 = -VAR_0;
 VAR_16 = FUNC_7(VAR_10, &VAR_14.search_key->cat, &VAR_15);
 FUNC_5(&VAR_14);
 if (!VAR_16)
  goto bail_no_root;

 VAR_10->s_d_op = &VAR_7;
 VAR_17 = -VAR_2;
 VAR_10->s_root = FUNC_2(VAR_16);
 if (!VAR_10->s_root)
  goto bail_no_root;


 return 0;

bail_no_root:
 FUNC_14("get root inode failed\n");
bail:
 FUNC_10(VAR_10);
 return VAR_17;
}
