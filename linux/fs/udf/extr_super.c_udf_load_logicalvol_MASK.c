
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u16 ;
struct udf_sb_info {int s_partitions; int s_lvid_bh; struct udf_part_map* s_partmaps; } ;
struct udf_meta_data {int s_flags; void* s_align_unit_size; void* s_alloc_unit_size; void* s_bitmap_file_loc; void* s_mirror_file_loc; void* s_meta_file_loc; } ;
struct TYPE_5__ {struct udf_meta_data s_metadata; } ;
struct udf_part_map {void* s_volumeseqnum; void* s_partition_num; int * s_partition_func; int s_partition_type; TYPE_1__ s_type_specific; } ;
struct TYPE_7__ {int ident; scalar_t__ identSuffix; } ;
struct udfPartitionMap2 {int partitionNum; int volSeqNum; TYPE_3__ partIdent; } ;
struct super_block {int s_blocksize; } ;
struct sparablePartitionMap {int dummy; } ;
struct TYPE_6__ {scalar_t__ identSuffix; } ;
struct metadataPartitionMap {int flags; int metadataBitmapFileLoc; int metadataMirrorFileLoc; int metadataFileLoc; int allocUnitSize; int partitionNum; TYPE_2__ partIdent; int alignUnitSize; } ;
struct long_ad {int extLocation; } ;
struct TYPE_8__ {scalar_t__ extLength; } ;
struct logicalVolDesc {TYPE_4__ integritySeqExt; int * logicalVolContentsUse; int * partitionMaps; int numPartitionMaps; int domainIdent; int mapTableLength; } ;
struct kernel_lb_addr {int partitionReferenceNum; int logicalBlockNum; } ;
struct genericPartitionMap1 {int partitionNum; int volSeqNum; } ;
struct genericPartitionMap {int partitionMapType; scalar_t__ partitionMapLength; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct buffer_head*) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__) ;
 struct kernel_lb_addr FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (struct super_block*,char*,unsigned int,int) ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_13 (struct super_block*,int ) ;
 int FUNC_14 (struct super_block*,struct udf_part_map*,struct sparablePartitionMap*) ;
 struct buffer_head* FUNC_15 (struct super_block*,int ,int ,scalar_t__*) ;
 int FUNC_16 (struct super_block*,void*) ;
 int FUNC_17 (struct super_block*,int *,char*) ;
 int FUNC_18 (struct super_block*,char*) ;

__attribute__((used)) static int FUNC_19(struct super_block *VAR_16, sector_t VAR_17,
          struct kernel_lb_addr *VAR_18)
{
 struct logicalVolDesc *VAR_19;
 int VAR_20, VAR_21;
 uint8_t VAR_22;
 struct udf_sb_info *VAR_23 = FUNC_1(VAR_16);
 struct genericPartitionMap *VAR_24;
 uint16_t VAR_25;
 struct buffer_head *VAR_26;
 unsigned int VAR_27;
 int VAR_28;

 VAR_26 = FUNC_15(VAR_16, VAR_17, VAR_17, &VAR_25);
 if (!VAR_26)
  return -VAR_1;
 FUNC_0(VAR_25 != VAR_4);
 VAR_19 = (struct logicalVolDesc *)VAR_26->b_data;
 VAR_27 = FUNC_5(VAR_19->mapTableLength);
 if (VAR_27 > VAR_16->s_blocksize - sizeof(*VAR_19)) {
  FUNC_12(VAR_16, "error loading logical volume descriptor: "
   "Partition table too long (%u > %lu)\n", VAR_27,
   VAR_16->s_blocksize - sizeof(*VAR_19));
  VAR_28 = -VAR_2;
  goto out_bh;
 }

 VAR_28 = FUNC_17(VAR_16, &VAR_19->domainIdent,
        "logical volume");
 if (VAR_28)
  goto out_bh;
 VAR_28 = FUNC_16(VAR_16, FUNC_5(VAR_19->numPartitionMaps));
 if (VAR_28)
  goto out_bh;

 for (VAR_20 = 0, VAR_21 = 0;
      VAR_20 < VAR_23->s_partitions && VAR_21 < VAR_27;
      VAR_20++, VAR_21 += VAR_24->partitionMapLength) {
  struct udf_part_map *VAR_29 = &VAR_23->s_partmaps[VAR_20];
  VAR_24 = (struct genericPartitionMap *)
    &(VAR_19->partitionMaps[VAR_21]);
  VAR_22 = VAR_24->partitionMapType;
  if (VAR_22 == 1) {
   struct genericPartitionMap1 *VAR_30 =
    (struct genericPartitionMap1 *)VAR_24;
   VAR_29->s_partition_type = VAR_10;
   VAR_29->s_volumeseqnum = FUNC_4(VAR_30->volSeqNum);
   VAR_29->s_partition_num = FUNC_4(VAR_30->partitionNum);
   VAR_29->s_partition_func = ((void*)0);
  } else if (VAR_22 == 2) {
   struct udfPartitionMap2 *VAR_31 =
      (struct udfPartitionMap2 *)VAR_24;
   if (!FUNC_10(VAR_31->partIdent.ident, VAR_8,
      FUNC_9(VAR_8))) {
    u16 VAR_32 =
     FUNC_4(((__le16 *)VAR_31->partIdent.
       identSuffix)[0]);
    if (VAR_32 < 0x0200) {
     VAR_29->s_partition_type =
       VAR_11;
     VAR_29->s_partition_func =
       VAR_14;
    } else {
     VAR_29->s_partition_type =
       VAR_12;
     VAR_29->s_partition_func =
       VAR_15;
    }
   } else if (!FUNC_10(VAR_31->partIdent.ident,
      VAR_7,
      FUNC_9(VAR_7))) {
    VAR_28 = FUNC_14(VAR_16, VAR_29,
     (struct sparablePartitionMap *)VAR_24);
    if (VAR_28 < 0)
     goto out_bh;
   } else if (!FUNC_10(VAR_31->partIdent.ident,
      VAR_6,
      FUNC_9(VAR_6))) {
    struct udf_meta_data *VAR_33 =
     &VAR_29->s_type_specific.s_metadata;
    struct metadataPartitionMap *VAR_34 =
      (struct metadataPartitionMap *)
      &(VAR_19->partitionMaps[VAR_21]);
    FUNC_11("Parsing Logical vol part %d type %u  id=%s\n",
       VAR_20, VAR_22, VAR_6);

    VAR_29->s_partition_type = VAR_9;
    VAR_29->s_partition_func = VAR_13;

    VAR_33->s_meta_file_loc =
     FUNC_5(VAR_34->metadataFileLoc);
    VAR_33->s_mirror_file_loc =
     FUNC_5(VAR_34->metadataMirrorFileLoc);
    VAR_33->s_bitmap_file_loc =
     FUNC_5(VAR_34->metadataBitmapFileLoc);
    VAR_33->s_alloc_unit_size =
     FUNC_5(VAR_34->allocUnitSize);
    VAR_33->s_align_unit_size =
     FUNC_4(VAR_34->alignUnitSize);
    if (VAR_34->flags & 0x01)
     VAR_33->s_flags |= VAR_3;

    FUNC_11("Metadata Ident suffix=0x%x\n",
       FUNC_4(*(__le16 *)
            VAR_34->partIdent.identSuffix));
    FUNC_11("Metadata part num=%u\n",
       FUNC_4(VAR_34->partitionNum));
    FUNC_11("Metadata part alloc unit size=%u\n",
       FUNC_5(VAR_34->allocUnitSize));
    FUNC_11("Metadata file loc=%u\n",
       FUNC_5(VAR_34->metadataFileLoc));
    FUNC_11("Mirror file loc=%u\n",
       FUNC_5(VAR_34->metadataMirrorFileLoc));
    FUNC_11("Bitmap file loc=%u\n",
       FUNC_5(VAR_34->metadataBitmapFileLoc));
    FUNC_11("Flags: %d %u\n",
       VAR_33->s_flags, VAR_34->flags);
   } else {
    FUNC_11("Unknown ident: %s\n",
       VAR_31->partIdent.ident);
    continue;
   }
   VAR_29->s_volumeseqnum = FUNC_4(VAR_31->volSeqNum);
   VAR_29->s_partition_num = FUNC_4(VAR_31->partitionNum);
  }
  FUNC_11("Partition (%d:%u) type %u on volume %u\n",
     VAR_20, VAR_29->s_partition_num, VAR_22, VAR_29->s_volumeseqnum);
 }

 if (VAR_18) {
  struct long_ad *VAR_35 = (struct long_ad *)&(VAR_19->logicalVolContentsUse[0]);

  *VAR_18 = FUNC_7(VAR_35->extLocation);
  FUNC_11("FileSet found in LogicalVolDesc at block=%u, partition=%u\n",
     VAR_18->logicalBlockNum,
     VAR_18->partitionReferenceNum);
 }
 if (VAR_19->integritySeqExt.extLength)
  FUNC_13(VAR_16, FUNC_6(VAR_19->integritySeqExt));
 VAR_28 = 0;

 if (!VAR_23->s_lvid_bh) {

  if (FUNC_8(VAR_16)) {
   FUNC_2(VAR_16, VAR_5);
  } else {
   FUNC_18(VAR_16, "Damaged or missing LVID, forcing "
         "readonly mount\n");
   VAR_28 = -VAR_0;
  }
 }
out_bh:
 FUNC_3(VAR_26);
 return VAR_28;
}
