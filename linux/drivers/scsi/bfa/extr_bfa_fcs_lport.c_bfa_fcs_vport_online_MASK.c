
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fab_no_npiv; int fab_online; } ;
struct bfa_fcs_vport_s {TYPE_1__ vport_stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_vport_s*,int ) ;

void
FUNC_3(struct bfa_fcs_vport_s *VAR_1)
{
 VAR_1->vport_stats.fab_online++;
 if (FUNC_1(FUNC_0(VAR_1)))
  FUNC_2(VAR_1, VAR_0);
 else
  VAR_1->vport_stats.fab_no_npiv++;
}
