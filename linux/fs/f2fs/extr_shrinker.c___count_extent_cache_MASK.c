
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int total_ext_node; int total_zombie_tree; } ;


 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static unsigned long FUNC_1(struct f2fs_sb_info *VAR_0)
{
 return FUNC_0(&VAR_0->total_zombie_tree) +
    FUNC_0(&VAR_0->total_ext_node);
}
