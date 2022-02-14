
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ scn; } ;
struct bfa_dport_s {int bfa; TYPE_2__ i2hmsg; int dynamic; int test_state; } ;
typedef enum bfa_dport_sm_event { ____Placeholder_bfa_dport_sm_event } bfa_dport_sm_event ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;
 int FUNC_0 (struct bfa_dport_s*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_dport_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_dport_s *VAR_14, enum bfa_dport_sm_event VAR_15)
{
 FUNC_5(VAR_14->bfa, VAR_15);

 switch (VAR_15) {
 case 135:
  if (FUNC_0(VAR_14, VAR_6))
   FUNC_4(VAR_14, VAR_12);
  else
   FUNC_4(VAR_14, VAR_13);
  break;

 case 138:
  FUNC_2(VAR_14->bfa);
  if (FUNC_0(VAR_14, VAR_4))
   FUNC_4(VAR_14, VAR_8);
  else
   FUNC_4(VAR_14, VAR_9);
  break;

 case 137:
  FUNC_4(VAR_14, VAR_7);
  break;

 case 136:
  switch (VAR_14->i2hmsg.scn.state) {
  case 130:
   VAR_14->test_state = VAR_0;
   break;

  case 128:
   VAR_14->test_state = VAR_1;
   break;

  case 129:
  case 131:

   break;

  case 132:
   VAR_14->test_state = VAR_2;
   break;

  case 134:
   FUNC_1(VAR_14->bfa);

   if (FUNC_0(VAR_14, VAR_5))
    FUNC_4(VAR_14,
      VAR_10);
   else
    FUNC_4(VAR_14,
      VAR_11);
   break;

  case 133:
   FUNC_1(VAR_14->bfa);

   FUNC_4(VAR_14, VAR_7);
   VAR_14->dynamic = VAR_3;
   break;

  default:
   FUNC_5(VAR_14->bfa, VAR_14->i2hmsg.scn.state);
   FUNC_3(VAR_14->bfa, VAR_15);
  }
  break;
 default:
  FUNC_3(VAR_14->bfa, VAR_15);
 }
}
