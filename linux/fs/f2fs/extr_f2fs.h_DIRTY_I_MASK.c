
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct dirty_seglist_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ dirty_info; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline struct dirty_seglist_info *FUNC_1(struct f2fs_sb_info *VAR_0)
{
 return (struct dirty_seglist_info *)(FUNC_0(VAR_0)->dirty_info);
}
