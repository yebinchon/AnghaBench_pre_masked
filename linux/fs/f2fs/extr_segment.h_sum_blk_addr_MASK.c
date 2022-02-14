
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
typedef int block_t ;
struct TYPE_2__ {int cp_pack_total_block_count; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline block_t FUNC_3(struct f2fs_sb_info *VAR_0, int VAR_1, int VAR_2)
{
 return FUNC_1(VAR_0) +
  FUNC_2(FUNC_0(VAR_0)->cp_pack_total_block_count)
    - (VAR_1 + 1) + VAR_2;
}
