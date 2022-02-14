
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {long user_block_count; } ;
typedef long block_t ;


 long VAR_0 ;
 long FUNC_0 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline block_t FUNC_1(struct f2fs_sb_info *VAR_1)
{
 block_t VAR_2 = VAR_1->user_block_count -
  FUNC_0(VAR_1);
 return (long)(VAR_2 * VAR_0) / 100;
}
