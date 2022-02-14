
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
typedef int u16 ;
struct udf_sparing_data {int s_packet_len; struct buffer_head** s_spar_map; } ;
struct udf_sb_info {int s_partitions; int s_alloc_mutex; struct udf_part_map* s_partmaps; } ;
struct TYPE_2__ {struct udf_sparing_data s_sparing; } ;
struct udf_part_map {long s_partition_root; long s_partition_len; TYPE_1__ s_type_specific; } ;
struct super_block {int dummy; } ;
struct sparingTable {struct sparingEntry* mapEntry; int reallocationTableLen; } ;
struct sparingEntry {void* mappedLocation; void* origLocation; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 long FUNC_3 (void*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct sparingEntry*,struct sparingEntry*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;

int FUNC_9(struct super_block *VAR_0, long VAR_1, long *VAR_2)
{
 struct udf_sparing_data *VAR_3;
 struct sparingTable *VAR_4 = ((void*)0);
 struct sparingEntry VAR_5;
 uint32_t VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct udf_sb_info *VAR_11 = FUNC_0(VAR_0);
 u16 VAR_12;
 struct buffer_head *VAR_13;
 int VAR_14 = 0;

 FUNC_6(&VAR_11->s_alloc_mutex);
 for (VAR_7 = 0; VAR_7 < VAR_11->s_partitions; VAR_7++) {
  struct udf_part_map *VAR_15 = &VAR_11->s_partmaps[VAR_7];
  if (VAR_1 > VAR_15->s_partition_root &&
      VAR_1 < VAR_15->s_partition_root + VAR_15->s_partition_len) {
   VAR_3 = &VAR_15->s_type_specific.s_sparing;
   VAR_6 = (VAR_1 - VAR_15->s_partition_root) &
      ~(VAR_3->s_packet_len - 1);

   for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
    if (VAR_3->s_spar_map[VAR_8] != ((void*)0)) {
     VAR_4 = (struct sparingTable *)
      VAR_3->s_spar_map[VAR_8]->b_data;
     break;
    }

   if (!VAR_4) {
    VAR_14 = 1;
    goto out;
   }

   VAR_12 =
     FUNC_2(VAR_4->reallocationTableLen);
   for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
    struct sparingEntry *VAR_16 = &VAR_4->mapEntry[VAR_9];
    u32 VAR_17 = FUNC_3(VAR_16->origLocation);

    if (VAR_17 == 0xFFFFFFFF) {
     for (; VAR_8 < 4; VAR_8++) {
      int VAR_18;
      VAR_13 = VAR_3->s_spar_map[VAR_8];
      if (!VAR_13)
       continue;

      VAR_4 = (struct sparingTable *)
        VAR_13->b_data;
      VAR_16->origLocation =
       FUNC_1(VAR_6);
      VAR_18 =
        sizeof(struct sparingTable) +
        VAR_12 *
        sizeof(struct sparingEntry);
      FUNC_8((char *)VAR_4, VAR_18);
      FUNC_4(VAR_13);
     }
     *VAR_2 = FUNC_3(
       VAR_16->mappedLocation) +
           ((VAR_1 -
       VAR_15->s_partition_root) &
           (VAR_3->s_packet_len - 1));
     VAR_14 = 0;
     goto out;
    } else if (VAR_17 == VAR_6) {
     *VAR_2 = FUNC_3(
       VAR_16->mappedLocation) +
           ((VAR_1 -
       VAR_15->s_partition_root) &
           (VAR_3->s_packet_len - 1));
     VAR_14 = 0;
     goto out;
    } else if (VAR_17 > VAR_6)
     break;
   }

   for (VAR_10 = VAR_9; VAR_10 < VAR_12; VAR_10++) {
    struct sparingEntry *VAR_19 = &VAR_4->mapEntry[VAR_10];
    u32 VAR_20 = FUNC_3(VAR_19->origLocation);

    if (VAR_20 != 0xFFFFFFFF)
     continue;

    for (; VAR_8 < 4; VAR_8++) {
     VAR_13 = VAR_3->s_spar_map[VAR_8];
     if (!VAR_13)
      continue;

     VAR_4 = (struct sparingTable *)VAR_13->b_data;
     VAR_5 = VAR_4->mapEntry[VAR_10];
     VAR_5.origLocation =
       FUNC_1(VAR_6);
     FUNC_5(&VAR_4->mapEntry[VAR_9 + 1],
      &VAR_4->mapEntry[VAR_9],
      (VAR_10 - VAR_9) *
      sizeof(struct sparingEntry));
     VAR_4->mapEntry[VAR_9] = VAR_5;
     FUNC_8((char *)VAR_4,
      sizeof(struct sparingTable) +
      VAR_12 *
      sizeof(struct sparingEntry));
     FUNC_4(VAR_13);
    }
    *VAR_2 =
     FUNC_3(
           VAR_4->mapEntry[VAR_9].mappedLocation) +
     ((VAR_1 - VAR_15->s_partition_root) &
      (VAR_3->s_packet_len - 1));
    VAR_14 = 0;
    goto out;
   }

   VAR_14 = 1;
   goto out;
  }
 }

 if (VAR_7 == VAR_11->s_partitions) {


  VAR_14 = 1;
 }

out:
 FUNC_7(&VAR_11->s_alloc_mutex);
 return VAR_14;
}
