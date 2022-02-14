
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_sb_info {unsigned int s_partition; struct udf_part_map* s_partmaps; TYPE_1__* s_lvid_bh; } ;
struct TYPE_4__ {int s_table; int s_bitmap; } ;
struct udf_part_map {int s_partition_flags; TYPE_2__ s_uspace; } ;
struct super_block {int dummy; } ;
struct logicalVolIntegrityDesc {int * freeSpaceTable; int numOfPartitions; } ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct super_block*,int ) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct super_block *VAR_2)
{
 unsigned int VAR_3 = 0;
 struct udf_sb_info *VAR_4;
 struct udf_part_map *VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4->s_lvid_bh) {
  struct logicalVolIntegrityDesc *VAR_6 =
   (struct logicalVolIntegrityDesc *)
   VAR_4->s_lvid_bh->b_data;
  if (FUNC_1(VAR_6->numOfPartitions) > VAR_4->s_partition) {
   VAR_3 = FUNC_1(
     VAR_6->freeSpaceTable[VAR_4->s_partition]);
   if (VAR_3 == 0xFFFFFFFF)
    VAR_3 = 0;
  }
 }

 if (VAR_3)
  return VAR_3;

 VAR_5 = &VAR_4->s_partmaps[VAR_4->s_partition];
 if (VAR_5->s_partition_flags & VAR_0) {
  VAR_3 += FUNC_2(VAR_2,
            VAR_5->s_uspace.s_bitmap);
 }
 if (VAR_3)
  return VAR_3;

 if (VAR_5->s_partition_flags & VAR_1) {
  VAR_3 += FUNC_3(VAR_2,
           VAR_5->s_uspace.s_table);
 }
 return VAR_3;
}
