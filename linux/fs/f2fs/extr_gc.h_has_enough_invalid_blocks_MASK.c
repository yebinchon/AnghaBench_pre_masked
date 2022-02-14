
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {scalar_t__ user_block_count; } ;
typedef scalar_t__ block_t ;


 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline bool FUNC_4(struct f2fs_sb_info *VAR_0)
{
 block_t VAR_1 = VAR_0->user_block_count -
     FUNC_3(VAR_0);





 if (VAR_1 > FUNC_2(VAR_0) &&
   FUNC_0(VAR_0) < FUNC_1(VAR_0))
  return 1;
 return 0;
}
