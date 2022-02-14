
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ scn; } ;
struct bfa_dport_s {int bfa; TYPE_2__ i2hmsg; int dynamic; } ;
typedef enum bfa_dport_sm_event { ____Placeholder_bfa_dport_sm_event } bfa_dport_sm_event ;




 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct bfa_dport_s*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_dport_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_dport_s *VAR_3,
          enum bfa_dport_sm_event VAR_4)
{
 FUNC_4(VAR_3->bfa, VAR_4);

 switch (VAR_4) {
 case 129:
  switch (VAR_3->i2hmsg.scn.state) {
  case 128:
   FUNC_3(VAR_3, VAR_2);
   VAR_3->dynamic = VAR_0;
   FUNC_1(VAR_3->bfa);
   break;

  default:
   FUNC_4(VAR_3->bfa, VAR_3->i2hmsg.scn.state);
   FUNC_2(VAR_3->bfa, VAR_4);

  }
  break;

 case 130:
  FUNC_3(VAR_3, VAR_2);
  FUNC_0(VAR_3, VAR_1);
  break;

 default:
  FUNC_2(VAR_3->bfa, VAR_4);
 }
}
