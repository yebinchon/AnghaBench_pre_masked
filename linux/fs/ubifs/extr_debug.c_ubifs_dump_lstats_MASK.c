
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lp_stats {int total_dead; int total_dark; int total_used; int total_dirty; int total_free; int taken_empty_lebs; int idx_lebs; int empty_lebs; } ;
struct TYPE_2__ {int pid; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(const struct ubifs_lp_stats *VAR_2)
{
 FUNC_1(&VAR_1);
 FUNC_0("(pid %d) Lprops statistics: empty_lebs %d, idx_lebs  %d\n",
        VAR_0->pid, VAR_2->empty_lebs, VAR_2->idx_lebs);
 FUNC_0("\ttaken_empty_lebs %d, total_free %lld, total_dirty %lld\n",
        VAR_2->taken_empty_lebs, VAR_2->total_free, VAR_2->total_dirty);
 FUNC_0("\ttotal_used %lld, total_dark %lld, total_dead %lld\n",
        VAR_2->total_used, VAR_2->total_dark, VAR_2->total_dead);
 FUNC_2(&VAR_1);
}
