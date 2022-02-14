
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int user_block_count; } ;
typedef long block_t ;


 int VAR_0 ;

__attribute__((used)) static inline block_t FUNC_0(struct f2fs_sb_info *VAR_1)
{
 return (long)(VAR_1->user_block_count * VAR_0) / 100;
}
