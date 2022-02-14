
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_fs_info; } ;
struct befs_sb_info {int dummy; } ;



__attribute__((used)) static inline struct befs_sb_info *
FUNC_0(const struct super_block *VAR_0)
{
 return (struct befs_sb_info *) VAR_0->s_fs_info;
}
