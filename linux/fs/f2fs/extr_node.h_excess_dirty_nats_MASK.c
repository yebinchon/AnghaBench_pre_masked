
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {int dirty_nat_cnt; int max_nid; int dirty_nats_ratio; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline bool FUNC_1(struct f2fs_sb_info *VAR_0)
{
 return FUNC_0(VAR_0)->dirty_nat_cnt >= FUNC_0(VAR_0)->max_nid *
     FUNC_0(VAR_0)->dirty_nats_ratio / 100;
}
