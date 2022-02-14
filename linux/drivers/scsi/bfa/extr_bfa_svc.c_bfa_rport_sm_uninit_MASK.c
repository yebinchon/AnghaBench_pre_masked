
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_rport_s {int rport_tag; int bfa; } ;
typedef enum bfa_rport_event { ____Placeholder_bfa_rport_event } bfa_rport_event ;



 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_rport_s*,int ) ;
 int FUNC_2 (struct bfa_rport_s*,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct bfa_rport_s *VAR_3, enum bfa_rport_event VAR_4)
{
 FUNC_3(VAR_3->bfa, VAR_3->rport_tag);
 FUNC_3(VAR_3->bfa, VAR_4);

 switch (VAR_4) {
 case 128:
  FUNC_2(VAR_3, VAR_1);
  FUNC_1(VAR_3, VAR_0);
  break;

 default:
  FUNC_2(VAR_3, VAR_2);
  FUNC_0(VAR_3->bfa, VAR_4);
 }
}
