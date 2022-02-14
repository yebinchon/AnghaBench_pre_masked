
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_lport_stats_s {int dummy; } ;
struct bfa_fcs_lport_s {int stats; } ;


 int FUNC_0 (int *,int ,int) ;

void
FUNC_1(struct bfa_fcs_lport_s *VAR_0)
{
 FUNC_0(&VAR_0->stats, 0, sizeof(struct bfa_lport_stats_s));
}
