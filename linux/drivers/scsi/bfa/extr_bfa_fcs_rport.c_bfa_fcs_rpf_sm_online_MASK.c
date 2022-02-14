
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; } ;
struct bfa_fcs_rpf_s {int rpsc_retries; struct bfa_fcs_rport_s* rport; } ;
typedef enum rpf_event { ____Placeholder_rpf_event } rpf_event ;



 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcs_rpf_s *VAR_1, enum rpf_event VAR_2)
{
 struct bfa_fcs_rport_s *VAR_3 = VAR_1->rport;

 FUNC_2(VAR_3->fcs, VAR_3->pwwn);
 FUNC_2(VAR_3->fcs, VAR_3->pid);
 FUNC_2(VAR_3->fcs, VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, VAR_0);
  VAR_1->rpsc_retries = 0;
  break;

 default:
  FUNC_0(VAR_3->fcs, VAR_2);
 }
}
