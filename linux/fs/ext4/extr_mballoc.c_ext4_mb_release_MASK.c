
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct kmem_cache {int dummy; } ;
struct ext4_sb_info {int s_locality_groups; int s_mb_discarded; int s_mb_preallocated; int s_mb_generation_time; int s_mb_buddies_generated; int s_mb_lost_chunks; int s_bal_breaks; int s_bal_2orders; int s_bal_goals; int s_bal_ex_scanned; int s_bal_success; int s_bal_reqs; int s_bal_allocated; scalar_t__ s_mb_stats; int s_buddy_cache; int s_mb_maxs; int s_mb_offsets; int * s_group_info; } ;
struct ext4_group_info {int bb_bitmap; } ;
typedef int ext4_group_t ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 struct ext4_group_info* FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,int) ;
 int FUNC_8 (struct ext4_group_info*) ;
 int FUNC_9 (struct super_block*,int ,char*,int ,int ,...) ;
 int FUNC_10 (struct super_block*,int) ;
 int FUNC_11 (int ) ;
 struct kmem_cache* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct kmem_cache*,struct ext4_group_info*) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct super_block *VAR_1)
{
 ext4_group_t VAR_2 = FUNC_6(VAR_1);
 ext4_group_t VAR_3;
 int VAR_4;
 struct ext4_group_info *VAR_5;
 struct ext4_sb_info *VAR_6 = FUNC_2(VAR_1);
 struct kmem_cache *VAR_7 = FUNC_12(VAR_1->s_blocksize_bits);

 if (VAR_6->s_group_info) {
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   FUNC_4();
   VAR_5 = FUNC_5(VAR_1, VAR_3);



   FUNC_7(VAR_1, VAR_3);
   FUNC_8(VAR_5);
   FUNC_10(VAR_1, VAR_3);
   FUNC_15(VAR_7, VAR_5);
  }
  VAR_4 = (VAR_2 +
    FUNC_0(VAR_1) - 1) >>
   FUNC_1(VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   FUNC_14(VAR_6->s_group_info[VAR_3]);
  FUNC_16(VAR_6->s_group_info);
 }
 FUNC_14(VAR_6->s_mb_offsets);
 FUNC_14(VAR_6->s_mb_maxs);
 FUNC_13(VAR_6->s_buddy_cache);
 if (VAR_6->s_mb_stats) {
  FUNC_9(VAR_1, VAR_0,
         "mballoc: %u blocks %u reqs (%u success)",
    FUNC_3(&VAR_6->s_bal_allocated),
    FUNC_3(&VAR_6->s_bal_reqs),
    FUNC_3(&VAR_6->s_bal_success));
  FUNC_9(VAR_1, VAR_0,
        "mballoc: %u extents scanned, %u goal hits, "
    "%u 2^N hits, %u breaks, %u lost",
    FUNC_3(&VAR_6->s_bal_ex_scanned),
    FUNC_3(&VAR_6->s_bal_goals),
    FUNC_3(&VAR_6->s_bal_2orders),
    FUNC_3(&VAR_6->s_bal_breaks),
    FUNC_3(&VAR_6->s_mb_lost_chunks));
  FUNC_9(VAR_1, VAR_0,
         "mballoc: %lu generated and it took %Lu",
    VAR_6->s_mb_buddies_generated,
    VAR_6->s_mb_generation_time);
  FUNC_9(VAR_1, VAR_0,
         "mballoc: %u preallocated, %u discarded",
    FUNC_3(&VAR_6->s_mb_preallocated),
    FUNC_3(&VAR_6->s_mb_discarded));
 }

 FUNC_11(VAR_6->s_locality_groups);

 return 0;
}
