
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int s_ndevs; } ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {scalar_t__ start_blk; scalar_t__ end_blk; } ;


 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (struct f2fs_sb_info*) ;

int FUNC_2(struct f2fs_sb_info *VAR_0, block_t VAR_1)
{
 int VAR_2;

 if (!FUNC_1(VAR_0))
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->s_ndevs; VAR_2++)
  if (FUNC_0(VAR_2).start_blk <= VAR_1 && FUNC_0(VAR_2).end_blk >= VAR_1)
   return VAR_2;
 return 0;
}
