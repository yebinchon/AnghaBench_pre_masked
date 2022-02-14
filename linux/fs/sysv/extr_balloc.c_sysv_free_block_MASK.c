
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysv_zone_t ;
struct sysv_sb_info {scalar_t__ s_type; unsigned int s_firstdatazone; unsigned int s_nzones; unsigned int s_flc_size; int s_lock; int s_free_blocks; void** s_bcache_count; int * s_bcache; scalar_t__ s_block_base; } ;
struct super_block {int s_blocksize; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef void* __fs16 ;


 scalar_t__ VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (struct sysv_sb_info*,unsigned int) ;
 int FUNC_3 (struct super_block*) ;
 unsigned int FUNC_4 (struct sysv_sb_info*,void*) ;
 int FUNC_5 (struct sysv_sb_info*,int ,int) ;
 unsigned int FUNC_6 (struct sysv_sb_info*,int ) ;
 int FUNC_7 (struct super_block*,struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ,int *,unsigned int) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 struct buffer_head* FUNC_14 (struct super_block*,unsigned int) ;
 int FUNC_15 (struct buffer_head*) ;

void FUNC_16(struct super_block * VAR_1, sysv_zone_t VAR_2)
{
 struct sysv_sb_info * VAR_3 = FUNC_0(VAR_1);
 struct buffer_head * VAR_4;
 sysv_zone_t *VAR_5 = VAR_3->s_bcache;
 unsigned VAR_6;
 unsigned VAR_7 = FUNC_6(VAR_3, VAR_2);






 if (VAR_3->s_type == VAR_0)
  return;

 if (VAR_7 < VAR_3->s_firstdatazone || VAR_7 >= VAR_3->s_nzones) {
  FUNC_13("sysv_free_block: trying to free block not in datazone\n");
  return;
 }

 FUNC_11(&VAR_3->s_lock);
 VAR_6 = FUNC_4(VAR_3, *VAR_3->s_bcache_count);

 if (VAR_6 > VAR_3->s_flc_size) {
  FUNC_13("sysv_free_block: flc_count > flc_size\n");
  FUNC_12(&VAR_3->s_lock);
  return;
 }




 if (VAR_6 == VAR_3->s_flc_size || VAR_6 == 0) {
  VAR_7 += VAR_3->s_block_base;
  VAR_4 = FUNC_14(VAR_1, VAR_7);
  if (!VAR_4) {
   FUNC_13("sysv_free_block: getblk() failed\n");
   FUNC_12(&VAR_3->s_lock);
   return;
  }
  FUNC_10(VAR_4->b_data, 0, VAR_1->s_blocksize);
  *(__fs16*)VAR_4->b_data = FUNC_2(VAR_3, VAR_6);
  FUNC_9(FUNC_7(VAR_1,VAR_4), VAR_5, VAR_6 * sizeof(sysv_zone_t));
  FUNC_8(VAR_4);
  FUNC_15(VAR_4);
  FUNC_1(VAR_4);
  VAR_6 = 0;
 }
 VAR_3->s_bcache[VAR_6++] = VAR_2;

 *VAR_3->s_bcache_count = FUNC_2(VAR_3, VAR_6);
 FUNC_5(VAR_3, VAR_3->s_free_blocks, 1);
 FUNC_3(VAR_1);
 FUNC_12(&VAR_3->s_lock);
}
