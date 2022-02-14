
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; } ;
struct bfa_fcs_rpf_s {struct bfa_fcs_rport_s* rport; } ;
typedef enum rpf_event { ____Placeholder_rpf_event } rpf_event ;




 int FUNC_0 (struct bfa_fcs_rpf_s*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_rpf_s *VAR_1, enum rpf_event VAR_2)
{
 struct bfa_fcs_rport_s *VAR_3 = VAR_1->rport;

 FUNC_3(VAR_3->fcs, VAR_3->pwwn);
 FUNC_3(VAR_3->fcs, VAR_3->pid);
 FUNC_3(VAR_3->fcs, VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_1, VAR_0);
  FUNC_0(VAR_1, ((void*)0));
  break;

 case 129:
  break;

 default:
  FUNC_1(VAR_3->fcs, VAR_2);
 }
}
