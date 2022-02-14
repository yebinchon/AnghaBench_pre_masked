
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lb_stats_info {int stats; int last_stats; } ;
struct lb_stats {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct lb_stats_info *VAR_0)
{
 FUNC_0(&VAR_0->last_stats, &VAR_0->stats, sizeof(struct lb_stats));
 FUNC_1(&VAR_0->stats, 0, sizeof(struct lb_stats));
}
