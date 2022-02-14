
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udf_sb_info {struct udf_part_map* s_partmaps; } ;
struct TYPE_5__ {struct udf_bitmap* s_bitmap; struct inode* s_table; } ;
struct udf_part_map {int s_partition_flags; TYPE_2__ s_uspace; void* s_partition_len; void* s_partition_root; int s_partition_type; } ;
struct udf_bitmap {void* s_extPosition; } ;
struct super_block {int dummy; } ;
struct TYPE_6__ {int extPosition; scalar_t__ extLength; } ;
struct TYPE_4__ {int extPosition; scalar_t__ extLength; } ;
struct partitionHeaderDesc {TYPE_3__ unallocSpaceBitmap; TYPE_1__ unallocSpaceTable; } ;
struct partitionDesc {scalar_t__ accessType; scalar_t__ partitionContentsUse; int partitionStartingLocation; int partitionLength; } ;
struct kernel_lb_addr {void* logicalBlockNum; int partitionReferenceNum; } ;
struct inode {void* i_ino; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct super_block*,int ) ;
 struct udf_sb_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,struct partitionDesc*,struct udf_part_map*) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (char*,int,...) ;
 struct inode* FUNC_8 (struct super_block*,struct kernel_lb_addr*) ;
 struct udf_bitmap* FUNC_9 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_12,
  struct partitionDesc *VAR_13, int VAR_14)
{
 struct udf_part_map *VAR_15;
 struct udf_sb_info *VAR_16 = FUNC_3(VAR_12);
 struct partitionHeaderDesc *VAR_17;
 int VAR_18;

 VAR_15 = &VAR_16->s_partmaps[VAR_14];

 VAR_15->s_partition_len = FUNC_6(VAR_13->partitionLength);
 VAR_15->s_partition_root = FUNC_6(VAR_13->partitionStartingLocation);

 if (VAR_13->accessType == FUNC_5(VAR_2))
  VAR_15->s_partition_flags |= VAR_7;
 if (VAR_13->accessType == FUNC_5(VAR_4))
  VAR_15->s_partition_flags |= VAR_11;
 if (VAR_13->accessType == FUNC_5(VAR_3))
  VAR_15->s_partition_flags |= VAR_8;
 if (VAR_13->accessType == FUNC_5(VAR_1))
  VAR_15->s_partition_flags |= VAR_6;

 FUNC_7("Partition (%d type %x) starts at physical %u, block length %u\n",
    VAR_14, VAR_15->s_partition_type,
    VAR_15->s_partition_root, VAR_15->s_partition_len);

 VAR_18 = FUNC_4(VAR_12, VAR_13, VAR_15);
 if (VAR_18)
  return VAR_18;






 if (FUNC_2(VAR_12, VAR_5))
  return 0;

 VAR_17 = (struct partitionHeaderDesc *)VAR_13->partitionContentsUse;
 if (VAR_17->unallocSpaceTable.extLength) {
  struct kernel_lb_addr VAR_19 = {
   .logicalBlockNum = FUNC_6(
    VAR_17->unallocSpaceTable.extPosition),
   .partitionReferenceNum = VAR_14,
  };
  struct inode *VAR_20;

  VAR_20 = FUNC_8(VAR_12, &VAR_19);
  if (FUNC_0(VAR_20)) {
   FUNC_7("cannot load unallocSpaceTable (part %d)\n",
      VAR_14);
   return FUNC_1(VAR_20);
  }
  VAR_15->s_uspace.s_table = VAR_20;
  VAR_15->s_partition_flags |= VAR_10;
  FUNC_7("unallocSpaceTable (part %d) @ %lu\n",
     VAR_14, VAR_15->s_uspace.s_table->i_ino);
 }

 if (VAR_17->unallocSpaceBitmap.extLength) {
  struct udf_bitmap *VAR_21 = FUNC_9(VAR_12, VAR_14);
  if (!VAR_21)
   return -VAR_0;
  VAR_15->s_uspace.s_bitmap = VAR_21;
  VAR_21->s_extPosition = FUNC_6(
    VAR_17->unallocSpaceBitmap.extPosition);
  VAR_15->s_partition_flags |= VAR_9;
  FUNC_7("unallocSpaceBitmap (part %d) @ %u\n",
     VAR_14, VAR_21->s_extPosition);
 }

 return 0;
}
