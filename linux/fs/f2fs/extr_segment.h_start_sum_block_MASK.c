
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {int cp_pack_start_sum; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline block_t FUNC_3(struct f2fs_sb_info *VAR_0)
{
 return FUNC_1(VAR_0) +
  FUNC_2(FUNC_0(VAR_0)->cp_pack_start_sum);
}
