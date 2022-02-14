
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pid; int fcs; } ;
struct bfa_fcs_rpf_s {int rpsc_retries; int timer; struct bfa_fcs_rport_s* rport; } ;
typedef enum rpf_event { ____Placeholder_rpf_event } rpf_event ;




 int FUNC_0 (struct bfa_fcs_rpf_s*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_rpf_s *VAR_2, enum rpf_event VAR_3)
{
 struct bfa_fcs_rport_s *VAR_4 = VAR_2->rport;

 FUNC_4(VAR_4->fcs, VAR_4->pid);
 FUNC_4(VAR_4->fcs, VAR_3);

 switch (VAR_3) {
 case 128:

  FUNC_2(VAR_2, VAR_1);
  FUNC_0(VAR_2, ((void*)0));
  break;

 case 129:
  FUNC_3(&VAR_2->timer);
  FUNC_2(VAR_2, VAR_0);
  VAR_2->rpsc_retries = 0;
  break;

 default:
  FUNC_1(VAR_4->fcs, VAR_3);
 }
}
