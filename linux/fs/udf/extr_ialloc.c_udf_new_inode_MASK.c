
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
typedef int uint32_t ;
typedef int udf_pblk_t ;
struct udf_sb_info {scalar_t__ s_udfrev; int s_gid; int s_uid; int s_alloc_mutex; } ;
struct TYPE_4__ {int partitionReferenceNum; int logicalBlockNum; } ;
struct TYPE_3__ {void* i_data; } ;
struct udf_inode_info {int i_efe; int i_checkpoint; int i_crtime; int i_alloc_type; int i_extraPerms; scalar_t__ i_use; scalar_t__ i_lenAlloc; scalar_t__ i_lenEAttr; TYPE_2__ i_location; int i_unique; TYPE_1__ i_ext; } ;
struct super_block {scalar_t__ s_blocksize; } ;
struct logicalVolIntegrityDescImpUse {int numFiles; int numDirs; } ;
struct inode {int i_mtime; int i_ctime; int i_atime; struct super_block* i_sb; scalar_t__ i_blocks; int i_ino; int i_gid; int i_uid; int i_generation; } ;
struct fileEntry {int dummy; } ;
struct extendedFileEntry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct udf_inode_info* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 struct udf_sb_info* FUNC_4 (struct super_block*) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct inode*,int ) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 void* FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct super_block*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct inode* FUNC_16 (struct super_block*) ;
 int FUNC_17 (struct super_block*,TYPE_2__*,int ) ;
 int FUNC_18 (struct super_block*,int *,int ,int ,int*) ;
 struct logicalVolIntegrityDescImpUse* FUNC_19 (struct super_block*) ;
 int FUNC_20 (struct inode*,int ) ;
 int FUNC_21 (struct super_block*) ;
 scalar_t__ FUNC_22 (int) ;

struct inode *FUNC_23(struct inode *VAR_14, umode_t VAR_15)
{
 struct super_block *VAR_16 = VAR_14->i_sb;
 struct udf_sb_info *VAR_17 = FUNC_4(VAR_16);
 struct inode *VAR_18;
 udf_pblk_t VAR_19;
 uint32_t VAR_20 = FUNC_2(VAR_14)->i_location.logicalBlockNum;
 struct udf_inode_info *VAR_21;
 struct udf_inode_info *VAR_22 = FUNC_2(VAR_14);
 struct logicalVolIntegrityDescImpUse *VAR_23;
 int VAR_24;

 VAR_18 = FUNC_16(VAR_16);

 if (!VAR_18)
  return FUNC_0(-VAR_1);

 VAR_21 = FUNC_2(VAR_18);
 if (FUNC_3(VAR_18->i_sb, VAR_11)) {
  VAR_21->i_efe = 1;
  if (VAR_13 > VAR_17->s_udfrev)
   VAR_17->s_udfrev = VAR_13;
  VAR_21->i_ext.i_data = FUNC_9(VAR_18->i_sb->s_blocksize -
         sizeof(struct extendedFileEntry),
         VAR_4);
 } else {
  VAR_21->i_efe = 0;
  VAR_21->i_ext.i_data = FUNC_9(VAR_18->i_sb->s_blocksize -
         sizeof(struct fileEntry),
         VAR_4);
 }
 if (!VAR_21->i_ext.i_data) {
  FUNC_8(VAR_18);
  return FUNC_0(-VAR_1);
 }

 VAR_24 = -VAR_2;
 VAR_19 = FUNC_18(VAR_14->i_sb, ((void*)0),
         VAR_22->i_location.partitionReferenceNum,
         VAR_20, &VAR_24);
 if (VAR_24) {
  FUNC_8(VAR_18);
  return FUNC_0(VAR_24);
 }

 VAR_23 = FUNC_19(VAR_16);
 if (VAR_23) {
  VAR_21->i_unique = FUNC_11(VAR_16);
  VAR_18->i_generation = VAR_21->i_unique;
  FUNC_14(&VAR_17->s_alloc_mutex);
  if (FUNC_1(VAR_15))
   FUNC_10(&VAR_23->numDirs, 1);
  else
   FUNC_10(&VAR_23->numFiles, 1);
  FUNC_21(VAR_16);
  FUNC_15(&VAR_17->s_alloc_mutex);
 }

 FUNC_6(VAR_18, VAR_14, VAR_15);
 if (FUNC_3(VAR_16, VAR_9))
  VAR_18->i_uid = VAR_17->s_uid;
 if (FUNC_3(VAR_16, VAR_8))
  VAR_18->i_gid = VAR_17->s_gid;

 VAR_21->i_location.logicalBlockNum = VAR_19;
 VAR_21->i_location.partitionReferenceNum =
    VAR_22->i_location.partitionReferenceNum;
 VAR_18->i_ino = FUNC_17(VAR_16, &VAR_21->i_location, 0);
 VAR_18->i_blocks = 0;
 VAR_21->i_lenEAttr = 0;
 VAR_21->i_lenAlloc = 0;
 VAR_21->i_use = 0;
 VAR_21->i_checkpoint = 1;
 VAR_21->i_extraPerms = VAR_3;
 FUNC_20(VAR_18, VAR_15);

 if (FUNC_3(VAR_18->i_sb, VAR_10))
  VAR_21->i_alloc_type = VAR_5;
 else if (FUNC_3(VAR_18->i_sb, VAR_12))
  VAR_21->i_alloc_type = VAR_7;
 else
  VAR_21->i_alloc_type = VAR_6;
 VAR_18->i_mtime = VAR_18->i_atime = VAR_18->i_ctime = FUNC_5(VAR_18);
 VAR_21->i_crtime = VAR_18->i_mtime;
 if (FUNC_22(FUNC_7(VAR_18) < 0)) {
  FUNC_12(VAR_18);
  FUNC_8(VAR_18);
  return FUNC_0(-VAR_0);
 }
 FUNC_13(VAR_18);

 return VAR_18;
}
