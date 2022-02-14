
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct ext4_group_info {int bb_largest_free_order; scalar_t__* bb_counters; } ;



__attribute__((used)) static void
FUNC_0(struct super_block *VAR_0, struct ext4_group_info *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_1->bb_largest_free_order = -1;

 VAR_3 = VAR_0->s_blocksize_bits + 1;
 for (VAR_2 = VAR_3; VAR_2 >= 0; VAR_2--) {
  if (VAR_1->bb_counters[VAR_2] > 0) {
   VAR_1->bb_largest_free_order = VAR_2;
   break;
  }
 }
}
