
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocks_per_segment; int ns_first_data_block; } ;
typedef int sector_t ;
typedef int __u64 ;



__attribute__((used)) static inline void
FUNC_0(struct the_nilfs *VAR_0, __u64 VAR_1,
   sector_t *VAR_2, sector_t *VAR_3)
{
 *VAR_2 = (sector_t)VAR_0->ns_blocks_per_segment * VAR_1;
 *VAR_3 = *VAR_2 + VAR_0->ns_blocks_per_segment - 1;
 if (VAR_1 == 0)
  *VAR_2 = VAR_0->ns_first_data_block;
}
