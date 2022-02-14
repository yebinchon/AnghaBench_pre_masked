
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int cluster_size; scalar_t__ root_start_sector; } ;
struct chain_t {scalar_t__ dir; } ;
struct bd_info_t {scalar_t__ sector_size_mask; scalar_t__ sector_size_bits; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct super_block*,struct chain_t*,scalar_t__,int *) ;

s32 FUNC_4(struct super_block *VAR_2, struct chain_t *VAR_3, s32 VAR_4,
    sector_t *VAR_5, s32 *VAR_6)
{
 s32 VAR_7, VAR_8;
 u32 VAR_9 = 0;
 struct fs_info_t *VAR_10 = &(FUNC_1(VAR_2)->fs_info);
 struct bd_info_t *VAR_11 = &(FUNC_1(VAR_2)->bd_info);

 VAR_7 = VAR_4 << VAR_0;

 if (VAR_3->dir == FUNC_0(0)) {
  *VAR_6 = VAR_7 & VAR_11->sector_size_mask;
  *VAR_5 = VAR_7 >> VAR_11->sector_size_bits;
  *VAR_5 += VAR_10->root_start_sector;
 } else {
  VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_7, &VAR_9);
  if (VAR_8 != VAR_1)
   return VAR_8;


  VAR_7 &= VAR_10->cluster_size - 1;


  *VAR_6 = VAR_7 & VAR_11->sector_size_mask;


  *VAR_5 = VAR_7 >> VAR_11->sector_size_bits;
  *VAR_5 += FUNC_2(VAR_9);
 }
 return VAR_1;
}
