
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ rec_prefree_segments; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline bool FUNC_2(struct f2fs_sb_info *VAR_0)
{
 return FUNC_1(VAR_0) > FUNC_0(VAR_0)->rec_prefree_segments;
}
