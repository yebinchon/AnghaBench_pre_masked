
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_rport_qos_attr_s {int dummy; } ;
struct TYPE_2__ {struct bfa_rport_qos_attr_s qos; } ;
struct bfa_rport_aen_data_s {TYPE_1__ priv; } ;
struct bfa_fcs_rport_s {int pwwn; int fcs; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*,int ,struct bfa_rport_aen_data_s*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(void *VAR_1,
  struct bfa_rport_qos_attr_s VAR_2,
  struct bfa_rport_qos_attr_s VAR_3)
{
 struct bfa_fcs_rport_s *VAR_4 = (struct bfa_fcs_rport_s *) VAR_1;
 struct bfa_rport_aen_data_s VAR_5;

 FUNC_1(VAR_4->fcs, VAR_4->pwwn);
 VAR_5.priv.qos = VAR_3;
 FUNC_0(VAR_4, VAR_0, &VAR_5);
}
