
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sysv_zone_t ;
struct sysv_sb_info {scalar_t__ s_type; scalar_t__* s_free_blocks; int s_flc_size; unsigned int s_firstdatazone; unsigned int s_nzones; int s_lock; scalar_t__ s_block_base; scalar_t__* s_bcache; int * s_bcache_count; } ;
struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __fs16 ;


 scalar_t__ VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct sysv_sb_info*,int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct sysv_sb_info*,int ) ;
 void* FUNC_5 (struct sysv_sb_info*,scalar_t__) ;
 scalar_t__* FUNC_6 (struct super_block*,struct buffer_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;
 struct buffer_head* FUNC_10 (struct super_block*,unsigned int) ;
 int FUNC_11 (struct super_block*) ;

unsigned long FUNC_12(struct super_block * VAR_1)
{
 struct sysv_sb_info * VAR_2 = FUNC_0(VAR_1);
 int VAR_3;
 int VAR_4;
 struct buffer_head * VAR_5 = ((void*)0);
 sysv_zone_t *VAR_6;
 unsigned VAR_7;
 int VAR_8;






 if (VAR_2->s_type == VAR_0)
  return 0;

 FUNC_7(&VAR_2->s_lock);
 VAR_3 = FUNC_5(VAR_2, *VAR_2->s_free_blocks);

 if (0)
  goto trust_sb;


 VAR_4 = 0;
 VAR_8 = FUNC_4(VAR_2, *VAR_2->s_bcache_count);
 VAR_6 = VAR_2->s_bcache;
 while (1) {
  sysv_zone_t VAR_9;
  if (VAR_8 > VAR_2->s_flc_size)
   goto E2big;
  VAR_9 = 0;
  while (VAR_8 && (VAR_9 = VAR_6[--VAR_8]) != 0)
   VAR_4++;
  if (VAR_9 == 0)
   break;

  VAR_7 = FUNC_5(VAR_2, VAR_9);
  if (VAR_5)
   FUNC_1(VAR_5);

  if (VAR_7 < VAR_2->s_firstdatazone || VAR_7 >= VAR_2->s_nzones)
   goto Einval;
  VAR_7 += VAR_2->s_block_base;
  VAR_5 = FUNC_10(VAR_1, VAR_7);
  if (!VAR_5)
   goto Eio;
  VAR_8 = FUNC_4(VAR_2, *(__fs16*)VAR_5->b_data);
  VAR_6 = FUNC_6(VAR_1, VAR_5);
 }
 if (VAR_5)
  FUNC_1(VAR_5);
 if (VAR_4 != VAR_3)
  goto Ecount;
done:
 FUNC_8(&VAR_2->s_lock);
 return VAR_4;

Einval:
 FUNC_9("sysv_count_free_blocks: new block %d is not in data zone\n",
  VAR_7);
 goto trust_sb;
Eio:
 FUNC_9("sysv_count_free_blocks: cannot read free-list block\n");
 goto trust_sb;
E2big:
 FUNC_9("sysv_count_free_blocks: >flc_size entries in free-list block\n");
 if (VAR_5)
  FUNC_1(VAR_5);
trust_sb:
 VAR_4 = VAR_3;
 goto done;
Ecount:
 FUNC_9("sysv_count_free_blocks: free block count was %d, "
  "correcting to %d\n", VAR_3, VAR_4);
 if (!FUNC_11(VAR_1)) {
  *VAR_2->s_free_blocks = FUNC_2(VAR_2, VAR_4);
  FUNC_3(VAR_1);
 }
 goto done;
}
