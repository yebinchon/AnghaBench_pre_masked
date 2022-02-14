
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_fcs_lport_ns_s {struct bfa_fcs_lport_s* port; } ;


 struct bfa_fcs_lport_ns_s* FUNC_0 (struct bfa_fcs_lport_s*) ;
 int VAR_0 ;
 int FUNC_1 (struct bfa_fcs_lport_ns_s*,int ) ;

void
FUNC_2(struct bfa_fcs_lport_s *VAR_1)
{
 struct bfa_fcs_lport_ns_s *VAR_2 = FUNC_0(VAR_1);

 VAR_2->port = VAR_1;
 FUNC_1(VAR_2, VAR_0);
}
