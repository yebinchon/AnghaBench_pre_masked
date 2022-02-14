
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_dport_s {int bfa; int test_state; } ;
typedef enum bfa_dport_sm_event { ____Placeholder_bfa_dport_sm_event } bfa_dport_sm_event ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_dport_s*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_dport_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_dport_s *VAR_3, enum bfa_dport_sm_event VAR_4)
{
 FUNC_3(VAR_3->bfa, VAR_4);

 switch (VAR_4) {
 case 130:
  VAR_3->test_state = VAR_0;
  FUNC_2(VAR_3, VAR_2);
  break;

 case 129:
  FUNC_2(VAR_3, VAR_2);
  FUNC_0(VAR_3, VAR_1);
  break;

 case 128:

  break;

 default:
  FUNC_1(VAR_3->bfa, VAR_4);
 }
}
