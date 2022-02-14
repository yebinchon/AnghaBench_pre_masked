
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team {int dummy; } ;
struct lb_stats_info {int opt_inst_info; int stats; int last_stats; } ;
struct lb_stats {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct lb_stats_info *VAR_0,
       struct team *VAR_1)
{
 if (FUNC_0(&VAR_0->last_stats, &VAR_0->stats,
     sizeof(struct lb_stats))) {
  FUNC_1(VAR_0->opt_inst_info);
  return 1;
 }
 return 0;
}
