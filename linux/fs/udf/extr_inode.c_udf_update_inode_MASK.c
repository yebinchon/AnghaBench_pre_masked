
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_12__ {void* tagIdent; } ;
struct unallocSpaceEntry {TYPE_1__ descTag; void* lengthAllocDescs; } ;
struct udf_sb_info {int s_udfrev; int s_serial_number; } ;
struct TYPE_18__ {int logicalBlockNum; } ;
struct TYPE_13__ {int i_data; } ;
struct udf_inode_info {int i_lenAlloc; int i_extraPerms; int i_alloc_type; scalar_t__ i_efe; int i_unique; int i_lenEAttr; int i_checkpoint; int i_lenStreams; TYPE_9__ i_location; scalar_t__ i_use; scalar_t__ i_strat4096; int i_crtime; int i_locStreamdir; scalar_t__ i_streamdir; TYPE_2__ i_ext; } ;
struct tag {int dummy; } ;
struct regid {void** identSuffix; int ident; } ;
struct long_ad {void* extLength; int extLocation; } ;
struct inode {int i_mode; scalar_t__ i_nlink; int i_size; int i_blocks; int i_ino; TYPE_5__* i_sb; int i_ctime; int i_mtime; int i_atime; } ;
struct TYPE_17__ {int tagChecksum; void* descCRC; void* descCRCLength; void* tagLocation; void* tagSerialNum; void* descVersion; void* tagIdent; } ;
struct TYPE_15__ {void* flags; int fileType; void* numEntries; void* strategyType; void* strategyParameter; } ;
struct fileEntry {TYPE_7__ descTag; TYPE_4__ icbTag; void* checkpoint; void* lengthAllocDescs; void* lengthExtendedAttr; void* uniqueID; struct regid impIdent; int attrTime; int modificationTime; int accessTime; void* logicalBlocksRecorded; void* informationLength; void* fileLinkCount; void* permissions; void* gid; void* uid; } ;
struct TYPE_14__ {void* tagIdent; } ;
struct extendedFileEntry {TYPE_3__ descTag; void* checkpoint; void* lengthAllocDescs; void* lengthExtendedAttr; void* uniqueID; struct regid impIdent; int attrTime; int createTime; int modificationTime; int accessTime; struct long_ad streamDirectoryICB; void* logicalBlocksRecorded; void* objectSize; } ;
struct deviceSpec {int attrSubtype; void* minorDeviceIdent; void* majorDeviceIdent; scalar_t__ impUse; void* impUseLength; void* attrLength; void* attrType; } ;
struct buffer_head {struct regid* b_data; } ;
struct TYPE_16__ {unsigned char s_blocksize_bits; int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct udf_inode_info* FUNC_7 (struct inode*) ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ) ;
 struct udf_sb_info* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (struct buffer_head*) ;
 scalar_t__ FUNC_11 (struct buffer_head*) ;
 void* FUNC_12 (int) ;
 void* FUNC_13 (int) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (void*) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (struct regid*,int ,int) ;
 int FUNC_25 (struct regid*,int ,int) ;
 int FUNC_26 (struct buffer_head*) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (struct buffer_head*) ;
 scalar_t__ FUNC_29 (struct inode*,int,int,int) ;
 int FUNC_30 (struct udf_inode_info*,int ) ;
 int FUNC_31 (char*) ;
 scalar_t__ FUNC_32 (struct inode*,int,int) ;
 int FUNC_33 (TYPE_5__*,TYPE_9__*,int ) ;
 int FUNC_34 (TYPE_7__*) ;
 struct buffer_head* FUNC_35 (TYPE_5__*,int ) ;
 int FUNC_36 (int *,int ) ;
 int FUNC_37 (TYPE_5__*,char*,int ) ;
 int FUNC_38 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_39(struct inode *VAR_26, int VAR_27)
{
 struct buffer_head *VAR_28 = ((void*)0);
 struct fileEntry *VAR_29;
 struct extendedFileEntry *VAR_30;
 uint64_t VAR_31;
 uint32_t VAR_32;
 uint16_t VAR_33;
 uint16_t VAR_34;
 int VAR_35 = 0;
 struct udf_sb_info *VAR_36 = FUNC_9(VAR_26->i_sb);
 unsigned char VAR_37 = VAR_26->i_sb->s_blocksize_bits;
 struct udf_inode_info *VAR_38 = FUNC_7(VAR_26);

 VAR_28 = FUNC_35(VAR_26->i_sb,
   FUNC_33(VAR_26->i_sb, &VAR_38->i_location, 0));
 if (!VAR_28) {
  FUNC_31("getblk failure\n");
  return -VAR_0;
 }

 FUNC_22(VAR_28);
 FUNC_25(VAR_28->b_data, 0, VAR_26->i_sb->s_blocksize);
 VAR_29 = (struct fileEntry *)VAR_28->b_data;
 VAR_30 = (struct extendedFileEntry *)VAR_28->b_data;

 if (VAR_38->i_use) {
  struct unallocSpaceEntry *VAR_39 =
   (struct unallocSpaceEntry *)VAR_28->b_data;

  VAR_39->lengthAllocDescs = FUNC_13(VAR_38->i_lenAlloc);
  FUNC_24(VAR_28->b_data + sizeof(struct unallocSpaceEntry),
         VAR_38->i_ext.i_data, VAR_26->i_sb->s_blocksize -
     sizeof(struct unallocSpaceEntry));
  VAR_39->descTag.tagIdent = FUNC_12(VAR_19);
  VAR_34 = sizeof(struct unallocSpaceEntry);

  goto finish;
 }

 if (FUNC_8(VAR_26->i_sb, VAR_21))
  VAR_29->uid = FUNC_13(VAR_23);
 else
  VAR_29->uid = FUNC_13(FUNC_18(VAR_26));

 if (FUNC_8(VAR_26->i_sb, VAR_20))
  VAR_29->gid = FUNC_13(VAR_23);
 else
  VAR_29->gid = FUNC_13(FUNC_17(VAR_26));

 VAR_32 = ((VAR_26->i_mode & 0007)) |
     ((VAR_26->i_mode & 0070) << 2) |
     ((VAR_26->i_mode & 0700) << 4);

 VAR_32 |= VAR_38->i_extraPerms;
 VAR_29->permissions = FUNC_13(VAR_32);

 if (FUNC_2(VAR_26->i_mode) && VAR_26->i_nlink > 0)
  VAR_29->fileLinkCount = FUNC_12(VAR_26->i_nlink - 1);
 else
  VAR_29->fileLinkCount = FUNC_12(VAR_26->i_nlink);

 VAR_29->informationLength = FUNC_14(VAR_26->i_size);

 if (FUNC_1(VAR_26->i_mode) || FUNC_0(VAR_26->i_mode)) {
  struct regid *VAR_40;
  struct deviceSpec *VAR_41 =
   (struct deviceSpec *)FUNC_32(VAR_26, 12, 1);
  if (!VAR_41) {
   VAR_41 = (struct deviceSpec *)
    FUNC_29(VAR_26,
           sizeof(struct deviceSpec) +
           sizeof(struct regid), 12, 0x3);
   VAR_41->attrType = FUNC_13(12);
   VAR_41->attrSubtype = 1;
   VAR_41->attrLength = FUNC_13(
      sizeof(struct deviceSpec) +
      sizeof(struct regid));
   VAR_41->impUseLength = FUNC_13(sizeof(struct regid));
  }
  VAR_40 = (struct regid *)VAR_41->impUse;
  FUNC_25(VAR_40, 0, sizeof(*VAR_40));
  FUNC_27(VAR_40->ident, VAR_22);
  VAR_40->identSuffix[0] = VAR_24;
  VAR_40->identSuffix[1] = VAR_25;
  VAR_41->majorDeviceIdent = FUNC_13(FUNC_19(VAR_26));
  VAR_41->minorDeviceIdent = FUNC_13(FUNC_20(VAR_26));
 }

 if (VAR_38->i_alloc_type == VAR_9)
  VAR_31 = 0;
 else
  VAR_31 =
   (VAR_26->i_blocks + (1 << (VAR_37 - 9)) - 1) >>
   (VAR_37 - 9);

 if (VAR_38->i_efe == 0) {
  FUNC_24(VAR_28->b_data + sizeof(struct fileEntry),
         VAR_38->i_ext.i_data,
         VAR_26->i_sb->s_blocksize - sizeof(struct fileEntry));
  VAR_29->logicalBlocksRecorded = FUNC_14(VAR_31);

  FUNC_36(&VAR_29->accessTime, VAR_26->i_atime);
  FUNC_36(&VAR_29->modificationTime, VAR_26->i_mtime);
  FUNC_36(&VAR_29->attrTime, VAR_26->i_ctime);
  FUNC_25(&(VAR_29->impIdent), 0, sizeof(struct regid));
  FUNC_27(VAR_29->impIdent.ident, VAR_22);
  VAR_29->impIdent.identSuffix[0] = VAR_24;
  VAR_29->impIdent.identSuffix[1] = VAR_25;
  VAR_29->uniqueID = FUNC_14(VAR_38->i_unique);
  VAR_29->lengthExtendedAttr = FUNC_13(VAR_38->i_lenEAttr);
  VAR_29->lengthAllocDescs = FUNC_13(VAR_38->i_lenAlloc);
  VAR_29->checkpoint = FUNC_13(VAR_38->i_checkpoint);
  VAR_29->descTag.tagIdent = FUNC_12(VAR_18);
  VAR_34 = sizeof(struct fileEntry);
 } else {
  FUNC_24(VAR_28->b_data + sizeof(struct extendedFileEntry),
         VAR_38->i_ext.i_data,
         VAR_26->i_sb->s_blocksize -
     sizeof(struct extendedFileEntry));
  VAR_30->objectSize =
   FUNC_14(VAR_26->i_size + VAR_38->i_lenStreams);
  VAR_30->logicalBlocksRecorded = FUNC_14(VAR_31);

  if (VAR_38->i_streamdir) {
   struct long_ad *VAR_42 = &VAR_30->streamDirectoryICB;

   VAR_42->extLocation =
    FUNC_15(VAR_38->i_locStreamdir);
   VAR_42->extLength =
    FUNC_13(VAR_26->i_sb->s_blocksize);
  }

  FUNC_30(VAR_38, VAR_26->i_atime);
  FUNC_30(VAR_38, VAR_26->i_mtime);
  FUNC_30(VAR_38, VAR_26->i_ctime);

  FUNC_36(&VAR_30->accessTime, VAR_26->i_atime);
  FUNC_36(&VAR_30->modificationTime, VAR_26->i_mtime);
  FUNC_36(&VAR_30->createTime, VAR_38->i_crtime);
  FUNC_36(&VAR_30->attrTime, VAR_26->i_ctime);

  FUNC_25(&(VAR_30->impIdent), 0, sizeof(VAR_30->impIdent));
  FUNC_27(VAR_30->impIdent.ident, VAR_22);
  VAR_30->impIdent.identSuffix[0] = VAR_24;
  VAR_30->impIdent.identSuffix[1] = VAR_25;
  VAR_30->uniqueID = FUNC_14(VAR_38->i_unique);
  VAR_30->lengthExtendedAttr = FUNC_13(VAR_38->i_lenEAttr);
  VAR_30->lengthAllocDescs = FUNC_13(VAR_38->i_lenAlloc);
  VAR_30->checkpoint = FUNC_13(VAR_38->i_checkpoint);
  VAR_30->descTag.tagIdent = FUNC_12(VAR_17);
  VAR_34 = sizeof(struct extendedFileEntry);
 }

finish:
 if (VAR_38->i_strat4096) {
  VAR_29->icbTag.strategyType = FUNC_12(4096);
  VAR_29->icbTag.strategyParameter = FUNC_12(1);
  VAR_29->icbTag.numEntries = FUNC_12(2);
 } else {
  VAR_29->icbTag.strategyType = FUNC_12(4);
  VAR_29->icbTag.numEntries = FUNC_12(1);
 }

 if (VAR_38->i_use)
  VAR_29->icbTag.fileType = VAR_8;
 else if (FUNC_2(VAR_26->i_mode))
  VAR_29->icbTag.fileType = VAR_3;
 else if (FUNC_5(VAR_26->i_mode))
  VAR_29->icbTag.fileType = VAR_5;
 else if (FUNC_4(VAR_26->i_mode))
  VAR_29->icbTag.fileType = VAR_7;
 else if (FUNC_0(VAR_26->i_mode))
  VAR_29->icbTag.fileType = VAR_1;
 else if (FUNC_1(VAR_26->i_mode))
  VAR_29->icbTag.fileType = VAR_2;
 else if (FUNC_3(VAR_26->i_mode))
  VAR_29->icbTag.fileType = VAR_4;
 else if (FUNC_6(VAR_26->i_mode))
  VAR_29->icbTag.fileType = VAR_6;

 VAR_33 = VAR_38->i_alloc_type |
   ((VAR_26->i_mode & VAR_15) ? VAR_12 : 0) |
   ((VAR_26->i_mode & VAR_14) ? VAR_11 : 0) |
   ((VAR_26->i_mode & VAR_16) ? VAR_13 : 0) |
   (FUNC_21(VAR_29->icbTag.flags) &
    ~(VAR_10 | VAR_12 |
    VAR_11 | VAR_13));

 VAR_29->icbTag.flags = FUNC_12(VAR_33);
 if (VAR_36->s_udfrev >= 0x0200)
  VAR_29->descTag.descVersion = FUNC_12(3);
 else
  VAR_29->descTag.descVersion = FUNC_12(2);
 VAR_29->descTag.tagSerialNum = FUNC_12(VAR_36->s_serial_number);
 VAR_29->descTag.tagLocation = FUNC_13(
     VAR_38->i_location.logicalBlockNum);
 VAR_34 += VAR_38->i_lenEAttr + VAR_38->i_lenAlloc - sizeof(struct tag);
 VAR_29->descTag.descCRCLength = FUNC_12(VAR_34);
 VAR_29->descTag.descCRC = FUNC_12(FUNC_16(0, (char *)VAR_29 + sizeof(struct tag),
        VAR_34));
 VAR_29->descTag.tagChecksum = FUNC_34(&VAR_29->descTag);

 FUNC_26(VAR_28);
 FUNC_38(VAR_28);


 FUNC_23(VAR_28);
 if (VAR_27) {
  FUNC_28(VAR_28);
  if (FUNC_11(VAR_28)) {
   FUNC_37(VAR_26->i_sb, "IO error syncing udf inode [%08lx]\n",
     VAR_26->i_ino);
   VAR_35 = -VAR_0;
  }
 }
 FUNC_10(VAR_28);

 return VAR_35;
}
