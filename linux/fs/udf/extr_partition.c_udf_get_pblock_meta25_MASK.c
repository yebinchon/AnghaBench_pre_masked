
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct udf_sb_info {struct udf_part_map* s_partmaps; } ;
struct udf_meta_data {int s_flags; struct inode* s_mirror_fe; int s_phys_partition_ref; int s_mirror_file_loc; scalar_t__ s_metadata_fe; } ;
struct TYPE_2__ {struct udf_meta_data s_metadata; } ;
struct udf_part_map {TYPE_1__ s_type_specific; } ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (char*) ;
 struct inode* FUNC_3 (struct super_block*,int ,int ) ;
 int FUNC_4 (struct inode*,int,size_t,int) ;
 int FUNC_5 (struct super_block*,char*) ;

uint32_t FUNC_6(struct super_block *VAR_1, uint32_t VAR_2,
    uint16_t VAR_3, uint32_t VAR_4)
{
 struct udf_sb_info *VAR_5 = FUNC_1(VAR_1);
 struct udf_part_map *VAR_6;
 struct udf_meta_data *VAR_7;
 uint32_t VAR_8;
 struct inode *VAR_9;

 FUNC_2("READING from METADATA\n");

 VAR_6 = &VAR_5->s_partmaps[VAR_3];
 VAR_7 = &VAR_6->s_type_specific.s_metadata;
 VAR_9 = VAR_7->s_metadata_fe ? : VAR_7->s_mirror_fe;

 if (!VAR_9)
  return 0xFFFFFFFF;

 VAR_8 = FUNC_4(VAR_9, VAR_2, VAR_3, VAR_4);
 if (VAR_8 == 0xFFFFFFFF && VAR_7->s_metadata_fe) {
  FUNC_5(VAR_1, "error reading from METADATA, trying to read from MIRROR\n");
  if (!(VAR_7->s_flags & VAR_0)) {
   VAR_7->s_mirror_fe = FUNC_3(VAR_1,
    VAR_7->s_mirror_file_loc,
    VAR_7->s_phys_partition_ref);
   if (FUNC_0(VAR_7->s_mirror_fe))
    VAR_7->s_mirror_fe = ((void*)0);
   VAR_7->s_flags |= VAR_0;
  }

  VAR_9 = VAR_7->s_mirror_fe;
  if (!VAR_9)
   return 0xFFFFFFFF;
  VAR_8 = FUNC_4(VAR_9, VAR_2, VAR_3, VAR_4);
 }

 return VAR_8;
}
