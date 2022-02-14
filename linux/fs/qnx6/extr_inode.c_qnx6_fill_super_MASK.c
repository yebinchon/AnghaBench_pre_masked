
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_blocksize_bits; int s_blocksize; struct qnx6_sb_info* s_fs_info; int * s_root; int s_time_max; scalar_t__ s_time_min; int s_flags; scalar_t__ s_magic; int * s_op; } ;
struct TYPE_2__ {scalar_t__ levels; } ;
struct qnx6_super_block {TYPE_1__ Longfile; TYPE_1__ Inode; int sb_serial; int sb_checksum; int sb_magic; int sb_num_blocks; int sb_blocksize; } ;
struct qnx6_sb_info {int s_blks_off; void* inodes; void* longfile; int s_ptrbits; struct qnx6_super_block* sb; struct buffer_head* sb_buf; int s_bytesex; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (struct inode*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct qnx6_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int * FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct qnx6_sb_info*,int ) ;
 scalar_t__ FUNC_8 (struct qnx6_sb_info*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (struct qnx6_sb_info*) ;
 struct qnx6_sb_info* FUNC_12 (int,int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*) ;
 struct buffer_head* FUNC_15 (struct super_block*,int,int) ;
 char* FUNC_16 (struct super_block*) ;
 struct inode* FUNC_17 (struct super_block*,int ) ;
 struct qnx6_super_block* FUNC_18 (struct super_block*,int) ;
 int FUNC_19 (char*,struct super_block*) ;
 void* FUNC_20 (struct super_block*,TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_21 (struct qnx6_super_block*,struct super_block*) ;
 struct buffer_head* FUNC_22 (struct super_block*,int) ;
 int FUNC_23 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_24 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_25(struct super_block *VAR_14, void *VAR_15, int VAR_16)
{
 struct buffer_head *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 struct qnx6_super_block *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 struct qnx6_sb_info *VAR_21;
 struct inode *VAR_22;
 const char *VAR_23;
 struct qnx6_sb_info *VAR_24;
 int VAR_25 = -VAR_1;
 u64 VAR_26;
 int VAR_27 = VAR_5;

 VAR_24 = FUNC_12(sizeof(struct qnx6_sb_info), VAR_3);
 if (!VAR_24)
  return -VAR_2;
 VAR_14->s_fs_info = VAR_24;


 if (!FUNC_23(VAR_14, VAR_9)) {
  FUNC_13("unable to set blocksize\n");
  goto outnobh;
 }


 if (!FUNC_19((char *) VAR_15, VAR_14)) {
  FUNC_13("invalid mount options.\n");
  goto outnobh;
 }
 if (FUNC_24(VAR_14, VAR_4)) {
  VAR_19 = FUNC_18(VAR_14, VAR_16);
  if (VAR_19)
   goto mmi_success;
  else
   goto outnobh;
 }
 VAR_21 = FUNC_2(VAR_14);
 VAR_21->s_bytesex = VAR_0;


 VAR_17 = FUNC_15(VAR_14,
  VAR_27 / VAR_9, VAR_16);
 if (!VAR_17) {

  VAR_17 = FUNC_15(VAR_14, 0, VAR_16);
  if (!VAR_17) {
   FUNC_13("unable to read the first superblock\n");
   goto outnobh;
  }

  VAR_27 = 0;
 }
 VAR_19 = (struct qnx6_super_block *)VAR_17->b_data;






 if (FUNC_7(VAR_21, VAR_19->sb_checksum) !=
   FUNC_4(0, (char *)(VAR_17->b_data + 8), 504)) {
  FUNC_13("superblock #1 checksum error\n");
  goto out;
 }


 if (!FUNC_23(VAR_14, FUNC_7(VAR_21, VAR_19->sb_blocksize))) {
  FUNC_13("unable to set blocksize\n");
  goto out;
 }

 FUNC_3(VAR_17);
 VAR_17 = FUNC_22(VAR_14, VAR_27 >> VAR_14->s_blocksize_bits);
 if (!VAR_17)
  goto outnobh;
 VAR_19 = (struct qnx6_super_block *)VAR_17->b_data;


 VAR_26 = FUNC_7(VAR_21, VAR_19->sb_num_blocks) +
  (VAR_27 >> VAR_14->s_blocksize_bits) +
  (VAR_8 >> VAR_14->s_blocksize_bits);


 VAR_21->s_blks_off = (VAR_27 >> VAR_14->s_blocksize_bits) +
     (VAR_8 >> VAR_14->s_blocksize_bits);


 VAR_18 = FUNC_22(VAR_14, VAR_26);
 if (!VAR_18) {
  FUNC_13("unable to read the second superblock\n");
  goto out;
 }
 VAR_20 = (struct qnx6_super_block *)VAR_18->b_data;
 if (FUNC_7(VAR_21, VAR_20->sb_magic) != VAR_10) {
  if (!VAR_16)
   FUNC_13("wrong signature (magic) in superblock #2.\n");
  goto out;
 }


 if (FUNC_7(VAR_21, VAR_20->sb_checksum) !=
    FUNC_4(0, (char *)(VAR_18->b_data + 8), 504)) {
  FUNC_13("superblock #2 checksum error\n");
  goto out;
 }

 if (FUNC_8(VAR_21, VAR_19->sb_serial) >=
     FUNC_8(VAR_21, VAR_20->sb_serial)) {

  VAR_21->sb_buf = VAR_17;
  VAR_21->sb = (struct qnx6_super_block *)VAR_17->b_data;
  FUNC_3(VAR_18);
  FUNC_14("superblock #1 active\n");
 } else {

  VAR_21->sb_buf = VAR_18;
  VAR_21->sb = (struct qnx6_super_block *)VAR_18->b_data;
  FUNC_3(VAR_17);
  FUNC_14("superblock #2 active\n");
 }
mmi_success:

 if (VAR_19->Inode.levels > VAR_6) {
  FUNC_13("too many inode levels (max %i, sb %i)\n",
         VAR_6, VAR_19->Inode.levels);
  goto out;
 }
 if (VAR_19->Longfile.levels > VAR_6) {
  FUNC_13("too many longfilename levels (max %i, sb %i)\n",
         VAR_6, VAR_19->Longfile.levels);
  goto out;
 }
 VAR_14->s_op = &VAR_13;
 VAR_14->s_magic = VAR_10;
 VAR_14->s_flags |= VAR_11;
 VAR_14->s_time_min = 0;
 VAR_14->s_time_max = VAR_12;


 VAR_21 = FUNC_2(VAR_14);
 VAR_21->s_ptrbits = FUNC_9(VAR_14->s_blocksize / 4);
 VAR_21->inodes = FUNC_20(VAR_14, &VAR_19->Inode);
 if (!VAR_21->inodes)
  goto out;
 VAR_21->longfile = FUNC_20(VAR_14, &VAR_19->Longfile);
 if (!VAR_21->longfile)
  goto out1;


 VAR_22 = FUNC_17(VAR_14, VAR_7);
 if (FUNC_0(VAR_22)) {
  FUNC_13("get inode failed\n");
  VAR_25 = FUNC_1(VAR_22);
  goto out2;
 }

 VAR_25 = -VAR_2;
 VAR_14->s_root = FUNC_5(VAR_22);
 if (!VAR_14->s_root)
  goto out2;

 VAR_25 = -VAR_1;
 VAR_23 = FUNC_16(VAR_14);
 if (VAR_23 != ((void*)0)) {
  if (!VAR_16)
   FUNC_13("%s\n", VAR_23);
  goto out3;
 }
 return 0;

out3:
 FUNC_6(VAR_14->s_root);
 VAR_14->s_root = ((void*)0);
out2:
 FUNC_10(VAR_21->longfile);
out1:
 FUNC_10(VAR_21->inodes);
out:
 if (VAR_17)
  FUNC_3(VAR_17);
 if (VAR_18)
  FUNC_3(VAR_18);
outnobh:
 FUNC_11(VAR_24);
 VAR_14->s_fs_info = ((void*)0);
 return VAR_25;
}
