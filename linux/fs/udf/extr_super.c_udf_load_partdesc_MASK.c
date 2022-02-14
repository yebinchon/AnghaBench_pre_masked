
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct udf_sb_info {int s_partitions; struct udf_part_map* s_partmaps; } ;
struct udf_part_map {scalar_t__ s_partition_num; scalar_t__ s_partition_type; } ;
struct super_block {int dummy; } ;
struct partitionDesc {int partitionNumber; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (char*,scalar_t__,...) ;
 int FUNC_6 (struct super_block*,char*,int) ;
 int FUNC_7 (struct super_block*,struct partitionDesc*,int) ;
 int FUNC_8 (struct super_block*,int,int) ;
 int FUNC_9 (struct super_block*,int,int) ;
 struct buffer_head* FUNC_10 (struct super_block*,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_9, sector_t VAR_10)
{
 struct buffer_head *VAR_11;
 struct partitionDesc *VAR_12;
 struct udf_part_map *VAR_13;
 struct udf_sb_info *VAR_14 = FUNC_0(VAR_9);
 int VAR_15, VAR_16;
 uint16_t VAR_17;
 uint16_t VAR_18;
 int VAR_19;

 VAR_11 = FUNC_10(VAR_9, VAR_10, VAR_10, &VAR_18);
 if (!VAR_11)
  return -VAR_1;
 if (VAR_18 != VAR_2) {
  VAR_19 = 0;
  goto out_bh;
 }

 VAR_12 = (struct partitionDesc *)VAR_11->b_data;
 VAR_17 = FUNC_3(VAR_12->partitionNumber);


 for (VAR_15 = 0; VAR_15 < VAR_14->s_partitions; VAR_15++) {
  VAR_13 = &VAR_14->s_partmaps[VAR_15];
  FUNC_5("Searching map: (%u == %u)\n",
     VAR_13->s_partition_num, VAR_17);
  if (VAR_13->s_partition_num == VAR_17 &&
      (VAR_13->s_partition_type == VAR_6 ||
       VAR_13->s_partition_type == VAR_5))
   break;
 }

 if (VAR_15 >= VAR_14->s_partitions) {
  FUNC_5("Partition (%u) not found in partition map\n",
     VAR_17);
  VAR_19 = 0;
  goto out_bh;
 }

 VAR_19 = FUNC_7(VAR_9, VAR_12, VAR_15);
 if (VAR_19 < 0)
  goto out_bh;





 VAR_16 = VAR_15;
 VAR_13 = ((void*)0);
 for (VAR_15 = 0; VAR_15 < VAR_14->s_partitions; VAR_15++) {
  VAR_13 = &VAR_14->s_partmaps[VAR_15];

  if (VAR_13->s_partition_num == VAR_17 &&
      (VAR_13->s_partition_type == VAR_7 ||
       VAR_13->s_partition_type == VAR_8 ||
       VAR_13->s_partition_type == VAR_4))
   break;
 }

 if (VAR_15 >= VAR_14->s_partitions) {
  VAR_19 = 0;
  goto out_bh;
 }

 VAR_19 = FUNC_7(VAR_9, VAR_12, VAR_15);
 if (VAR_19 < 0)
  goto out_bh;

 if (VAR_13->s_partition_type == VAR_4) {
  VAR_19 = FUNC_8(VAR_9, VAR_15, VAR_16);
  if (VAR_19 < 0) {
   FUNC_6(VAR_9, "error loading MetaData partition map %d\n",
    VAR_15);
   goto out_bh;
  }
 } else {





  if (!FUNC_4(VAR_9)) {
   VAR_19 = -VAR_0;
   goto out_bh;
  }
  FUNC_1(VAR_9, VAR_3);
  VAR_19 = FUNC_9(VAR_9, VAR_15, VAR_16);
  if (VAR_19 < 0)
   goto out_bh;
 }
 VAR_19 = 0;
out_bh:

 FUNC_2(VAR_11);
 return VAR_19;
}
