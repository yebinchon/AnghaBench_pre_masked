
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct f2fs_sb_info {int blocks_per_seg; TYPE_3__* sb; } ;
struct TYPE_6__ {TYPE_2__* s_bdi; } ;
struct TYPE_4__ {scalar_t__ dirty_exceeded; } ;
struct TYPE_5__ {TYPE_1__ wb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct f2fs_sb_info *VAR_4, int VAR_5)
{
 if (VAR_4->sb->s_bdi->wb.dirty_exceeded)
  return 0;

 if (VAR_5 == VAR_1)
  return VAR_4->blocks_per_seg;
 else if (VAR_5 == VAR_3)
  return 8 * VAR_4->blocks_per_seg;
 else if (VAR_5 == VAR_2)
  return 8 * VAR_0;
 else
  return 0;
}
