
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct f2fs_sb_info {int user_block_count; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline int FUNC_2(struct f2fs_sb_info *VAR_0)
{
 return FUNC_0((u64)FUNC_1(VAR_0) * 100,
     VAR_0->user_block_count);
}
