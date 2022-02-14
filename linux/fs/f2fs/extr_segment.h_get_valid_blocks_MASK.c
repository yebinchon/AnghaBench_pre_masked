
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_4__ {unsigned int valid_blocks; } ;
struct TYPE_3__ {unsigned int valid_blocks; } ;


 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 TYPE_2__* FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 TYPE_1__* FUNC_2 (struct f2fs_sb_info*,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct f2fs_sb_info *VAR_0,
    unsigned int VAR_1, bool VAR_2)
{




 if (VAR_2 && FUNC_0(VAR_0))
  return FUNC_1(VAR_0, VAR_1)->valid_blocks;
 else
  return FUNC_2(VAR_0, VAR_1)->valid_blocks;
}
