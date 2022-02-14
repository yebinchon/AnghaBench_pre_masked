
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sysv_zone_t ;
struct sysv_sb_info {scalar_t__* s_bcache; unsigned int s_firstdatazone; unsigned int s_nzones; unsigned int s_flc_size; int s_lock; int s_free_blocks; void** s_bcache_count; scalar_t__ s_block_base; } ;
struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef void* __fs16 ;


 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (struct sysv_sb_info*,unsigned int) ;
 int FUNC_3 (struct super_block*) ;
 unsigned int FUNC_4 (struct sysv_sb_info*,void*) ;
 int FUNC_5 (struct sysv_sb_info*,int ,int) ;
 unsigned int FUNC_6 (struct sysv_sb_info*,scalar_t__) ;
 int FUNC_7 (struct super_block*,struct buffer_head*) ;
 int FUNC_8 (scalar_t__*,int ,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;
 struct buffer_head* FUNC_12 (struct super_block*,unsigned int) ;

sysv_zone_t FUNC_13(struct super_block * VAR_0)
{
 struct sysv_sb_info *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2;
 sysv_zone_t VAR_3;
 struct buffer_head * VAR_4;
 unsigned VAR_5;

 FUNC_9(&VAR_1->s_lock);
 VAR_5 = FUNC_4(VAR_1, *VAR_1->s_bcache_count);

 if (VAR_5 == 0)
  goto Enospc;
 VAR_3 = VAR_1->s_bcache[--VAR_5];
 if (VAR_3 == 0)
  goto Enospc;

 VAR_2 = FUNC_6(VAR_1, VAR_3);

 *VAR_1->s_bcache_count = FUNC_2(VAR_1, VAR_5);

 if (VAR_2 < VAR_1->s_firstdatazone || VAR_2 >= VAR_1->s_nzones) {
  FUNC_11("sysv_new_block: new block %d is not in data zone\n",
   VAR_2);
  goto Enospc;
 }

 if (VAR_5 == 0) {
  unsigned VAR_6;

  VAR_2 += VAR_1->s_block_base;
  if (!(VAR_4 = FUNC_12(VAR_0, VAR_2))) {
   FUNC_11("sysv_new_block: cannot read free-list block\n");

   *VAR_1->s_bcache_count = FUNC_2(VAR_1, 1);
   goto Enospc;
  }
  VAR_6 = FUNC_4(VAR_1, *(__fs16*)VAR_4->b_data);
  if (VAR_6 > VAR_1->s_flc_size) {
   FUNC_11("sysv_new_block: free-list block with >flc_size entries\n");
   FUNC_1(VAR_4);
   goto Enospc;
  }
  *VAR_1->s_bcache_count = FUNC_2(VAR_1, VAR_6);
  FUNC_8(VAR_1->s_bcache, FUNC_7(VAR_0, VAR_4),
    VAR_6 * sizeof(sysv_zone_t));
  FUNC_1(VAR_4);
 }

 FUNC_5(VAR_1, VAR_1->s_free_blocks, -1);
 FUNC_3(VAR_0);
 FUNC_10(&VAR_1->s_lock);
 return VAR_3;

Enospc:
 FUNC_10(&VAR_1->s_lock);
 return 0;
}
