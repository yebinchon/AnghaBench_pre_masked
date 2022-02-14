
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int fcs; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(void *VAR_1)
{

 struct bfa_fcs_rport_s *VAR_2 = (struct bfa_fcs_rport_s *) VAR_1;

 FUNC_1(VAR_2->fcs, VAR_2->pwwn);
 FUNC_0(VAR_2, VAR_0);
}
