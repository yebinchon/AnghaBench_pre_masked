
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int cluster_size; } ;
struct entry_set_cache_t {void* __buf; int num_entries; scalar_t__ sector; scalar_t__ offset; int alloc_flag; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int size; int dir; int flags; } ;
struct bd_info_t {scalar_t__ sector_size_bits; scalar_t__ sector_size_mask; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct super_block*,struct entry_set_cache_t*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct super_block*,struct chain_t*,scalar_t__,int *) ;

s32 FUNC_5(struct super_block *VAR_2,
 struct entry_set_cache_t *VAR_3, struct dentry_t *VAR_4, u32 VAR_5)
{
 s32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = 0;
 sector_t VAR_10;
 struct fs_info_t *VAR_11 = &(FUNC_0(VAR_2)->fs_info);
 struct bd_info_t *VAR_12 = &(FUNC_0(VAR_2)->bd_info);
 struct chain_t VAR_13;


 if (VAR_4 + VAR_5 > ((struct dentry_t *)&(VAR_3->__buf)) + VAR_3->num_entries)
  return VAR_0;

 VAR_13.dir = FUNC_1(VAR_3->sector);
 VAR_13.flags = VAR_3->alloc_flag;
 VAR_13.size = 0xffffffff;

 VAR_7 = (VAR_3->sector - FUNC_2(VAR_13.dir)) <<
   VAR_12->sector_size_bits;
 VAR_7 += ((void **)VAR_4 - &(VAR_3->__buf)) + VAR_3->offset;

 VAR_6 = FUNC_4(VAR_2, &VAR_13, VAR_7, &VAR_9);
 if (VAR_6 != VAR_1)
  return VAR_6;


 VAR_7 &= VAR_11->cluster_size - 1;


 VAR_8 = VAR_7 & VAR_12->sector_size_mask;


 VAR_10 = VAR_7 >> VAR_12->sector_size_bits;
 VAR_10 += FUNC_2(VAR_9);
 return FUNC_3(VAR_2, VAR_3, VAR_10, VAR_8, VAR_5);
}
