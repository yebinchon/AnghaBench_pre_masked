
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {scalar_t__ unusable_cap; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;

int FUNC_5(struct f2fs_sb_info *VAR_2, block_t VAR_3)
{
 int VAR_4 =
  (FUNC_3(VAR_2) - FUNC_4(VAR_2));
 if (VAR_3 > FUNC_0(VAR_2).unusable_cap)
  return -VAR_0;
 if (FUNC_2(VAR_2, VAR_1) &&
  FUNC_1(VAR_2) > VAR_4)
  return -VAR_0;
 return 0;
}
