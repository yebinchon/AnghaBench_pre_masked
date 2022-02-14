
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_stats_s {int dummy; } ;
struct aq_hw_s {struct aq_stats_s curr_stats; } ;



struct aq_stats_s *FUNC_0(struct aq_hw_s *VAR_0)
{
 return &VAR_0->curr_stats;
}
