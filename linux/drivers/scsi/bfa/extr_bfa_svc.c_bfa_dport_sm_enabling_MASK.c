
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ rsp; } ;
struct bfa_dport_s {int bfa; int test_state; TYPE_2__ i2hmsg; int result; } ;
struct bfa_diag_dport_result_s {int dummy; } ;
typedef enum bfa_dport_sm_event { ____Placeholder_bfa_dport_sm_event } bfa_dport_sm_event ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bfa_dport_s*,int ) ;
 int FUNC_1 (struct bfa_dport_s*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_dport_s*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_dport_s *VAR_8, enum bfa_dport_sm_event VAR_9)
{
 FUNC_5(VAR_8->bfa, VAR_9);

 switch (VAR_9) {
 case 130:
  FUNC_6(&VAR_8->result, 0,
    sizeof(struct bfa_diag_dport_result_s));
  if (VAR_8->i2hmsg.rsp.status == VAR_4) {
   VAR_8->test_state = VAR_3;
  } else {
   VAR_8->test_state = VAR_2;
   FUNC_1(VAR_8, VAR_0);
  }
  FUNC_4(VAR_8, VAR_7);
  break;

 case 128:
  VAR_8->test_state = VAR_1;
  FUNC_2(VAR_8->bfa);
  FUNC_4(VAR_8, VAR_6);
  break;

 case 129:
  FUNC_4(VAR_8, VAR_6);
  FUNC_0(VAR_8, VAR_5);
  break;

 default:
  FUNC_3(VAR_8->bfa, VAR_9);
 }
}
