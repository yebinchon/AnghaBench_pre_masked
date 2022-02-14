
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_sb_info {struct udf_part_map* s_partmaps; } ;
struct udf_meta_data {int s_phys_partition_ref; int s_bitmap_file_loc; struct inode* s_bitmap_fe; struct inode* s_metadata_fe; struct inode* s_mirror_fe; int s_mirror_file_loc; int s_meta_file_loc; } ;
struct TYPE_2__ {struct udf_meta_data s_metadata; } ;
struct udf_part_map {TYPE_1__ s_type_specific; } ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int logicalBlockNum; int partitionReferenceNum; } ;
struct inode {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct udf_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct super_block*,char*) ;
 struct inode* FUNC_6 (struct super_block*,int ,int) ;
 struct inode* FUNC_7 (struct super_block*,struct kernel_lb_addr*) ;
 int FUNC_8 (struct super_block*,char*) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_0, int VAR_1,
       int VAR_2)
{
 struct udf_sb_info *VAR_3 = FUNC_2(VAR_0);
 struct udf_part_map *VAR_4;
 struct udf_meta_data *VAR_5;
 struct kernel_lb_addr VAR_6;
 struct inode *VAR_7;

 VAR_4 = &VAR_3->s_partmaps[VAR_1];
 VAR_5 = &VAR_4->s_type_specific.s_metadata;
 VAR_5->s_phys_partition_ref = VAR_2;


 FUNC_4("Metadata file location: block = %u part = %u\n",
    VAR_5->s_meta_file_loc, VAR_5->s_phys_partition_ref);

 VAR_7 = FUNC_6(VAR_0, VAR_5->s_meta_file_loc,
      VAR_5->s_phys_partition_ref);
 if (FUNC_0(VAR_7)) {

  FUNC_4("Mirror metadata file location: block = %u part = %u\n",
     VAR_5->s_mirror_file_loc, VAR_5->s_phys_partition_ref);

  VAR_7 = FUNC_6(VAR_0, VAR_5->s_mirror_file_loc,
       VAR_5->s_phys_partition_ref);

  if (FUNC_0(VAR_7)) {
   FUNC_5(VAR_0, "Both metadata and mirror metadata inode efe can not found\n");
   return FUNC_1(VAR_7);
  }
  VAR_5->s_mirror_fe = VAR_7;
 } else
  VAR_5->s_metadata_fe = VAR_7;







 if (VAR_5->s_bitmap_file_loc != 0xFFFFFFFF) {
  VAR_6.logicalBlockNum = VAR_5->s_bitmap_file_loc;
  VAR_6.partitionReferenceNum = VAR_5->s_phys_partition_ref;

  FUNC_4("Bitmap file location: block = %u part = %u\n",
     VAR_6.logicalBlockNum, VAR_6.partitionReferenceNum);

  VAR_7 = FUNC_7(VAR_0, &VAR_6);
  if (FUNC_0(VAR_7)) {
   if (FUNC_3(VAR_0))
    FUNC_8(VAR_0, "bitmap inode efe not found but it's ok since the disc is mounted read-only\n");
   else {
    FUNC_5(VAR_0, "bitmap inode efe not found and attempted read-write mount\n");
    return FUNC_1(VAR_7);
   }
  } else
   VAR_5->s_bitmap_fe = VAR_7;
 }

 FUNC_4("udf_load_metadata_files Ok\n");
 return 0;
}
