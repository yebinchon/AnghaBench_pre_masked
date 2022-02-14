
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {unsigned int cur_victim_sec; } ;


 scalar_t__ FUNC_0 (struct f2fs_sb_info*,unsigned int) ;

__attribute__((used)) static inline bool FUNC_1(struct f2fs_sb_info *VAR_0, unsigned int VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1) || (VAR_0->cur_victim_sec == VAR_1))
  return 1;
 return 0;
}
