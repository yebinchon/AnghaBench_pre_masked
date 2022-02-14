
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int itnim; int pid; int fcs; int pwwn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcs_rport_s *VAR_1)
{
 if ((!VAR_1->pid) || (!VAR_1->pwwn)) {
  FUNC_2(VAR_1->fcs, VAR_1->pid);
  FUNC_0(VAR_1->fcs, VAR_1->pid);
 }

 FUNC_1(VAR_1->itnim, VAR_0);
}
