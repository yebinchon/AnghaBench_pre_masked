
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct statistics_block {int dummy; } ;
struct bnx2 {scalar_t__ temp_stats_blk; scalar_t__ stats_blk; } ;



__attribute__((used)) static void
FUNC_0(struct bnx2 *VAR_0)
{
 u32 *VAR_1 = (u32 *) VAR_0->stats_blk;
 u32 *VAR_2 = (u32 *) VAR_0->temp_stats_blk;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < 20; VAR_3 += 2) {
  u32 VAR_4;
  u64 VAR_5;

  VAR_4 = VAR_2[VAR_3] + VAR_1[VAR_3];
  VAR_5 = (u64) VAR_2[VAR_3 + 1] + (u64) VAR_1[VAR_3 + 1];
  if (VAR_5 > 0xffffffff)
   VAR_4++;
  VAR_2[VAR_3] = VAR_4;
  VAR_2[VAR_3 + 1] = VAR_5 & 0xffffffff;
 }

 for ( ; VAR_3 < sizeof(struct statistics_block) / 4; VAR_3++)
  VAR_2[VAR_3] += VAR_1[VAR_3];
}
