
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fdisc_sent; } ;
struct bfa_fcs_vport_s {TYPE_1__ vport_stats; int lps; } ;


 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (struct bfa_fcs_vport_s*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct bfa_fcs_vport_s*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_vport_s *VAR_0)
{
 FUNC_4(VAR_0->lps, VAR_0,
  FUNC_3(FUNC_0(VAR_0)),
  FUNC_2(VAR_0), FUNC_1(VAR_0));
 VAR_0->vport_stats.fdisc_sent++;
}
