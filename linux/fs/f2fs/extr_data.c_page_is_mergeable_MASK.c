
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct bio {int dummy; } ;
typedef scalar_t__ block_t ;


 int FUNC_0 (struct f2fs_sb_info*,scalar_t__,struct bio*) ;

__attribute__((used)) static bool FUNC_1(struct f2fs_sb_info *VAR_0, struct bio *VAR_1,
    block_t VAR_2, block_t VAR_3)
{
 if (VAR_2 + 1 != VAR_3)
  return 0;
 return FUNC_0(VAR_0, VAR_3, VAR_1);
}
