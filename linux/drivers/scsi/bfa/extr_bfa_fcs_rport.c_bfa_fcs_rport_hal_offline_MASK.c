
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {scalar_t__ bfa_rport; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcs_rport_s *VAR_1)
{
 if (VAR_1->bfa_rport)
  FUNC_1(VAR_1->bfa_rport, VAR_0);
 else
  FUNC_0(VAR_1);
}
