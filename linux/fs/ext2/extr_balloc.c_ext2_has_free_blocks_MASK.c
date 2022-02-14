
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext2_sb_info {int s_resgid; int s_resuid; TYPE_1__* s_es; int s_freeblocks_counter; } ;
typedef scalar_t__ ext2_fsblk_t ;
struct TYPE_2__ {int s_r_blocks_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ext2_sb_info *VAR_2)
{
 ext2_fsblk_t VAR_3, VAR_4;

 VAR_3 = FUNC_5(&VAR_2->s_freeblocks_counter);
 VAR_4 = FUNC_4(VAR_2->s_es->s_r_blocks_count);
 if (VAR_3 < VAR_4 + 1 && !FUNC_0(VAR_0) &&
  !FUNC_6(VAR_2->s_resuid, FUNC_1()) &&
  (FUNC_2(VAR_2->s_resgid, VAR_1) ||
   !FUNC_3 (VAR_2->s_resgid))) {
  return 0;
 }
 return 1;
}
