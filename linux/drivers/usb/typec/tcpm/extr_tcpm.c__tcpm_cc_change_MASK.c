
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int cc1; int cc2; size_t state; int delayed_state; int max_wait; int vbus_present; int pd_capable; int polarity; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;
typedef enum tcpm_state { ____Placeholder_tcpm_state } tcpm_state ;
 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (struct tcpm_port*) ;
 int FUNC_1 (struct tcpm_port*,char*,int,int,int,int,int ,int ,char*) ;
 int FUNC_2 (struct tcpm_port*) ;
 int FUNC_3 (struct tcpm_port*) ;
 int FUNC_4 (struct tcpm_port*) ;
 scalar_t__ FUNC_5 (struct tcpm_port*) ;
 int FUNC_6 (struct tcpm_port*) ;
 int FUNC_7 (struct tcpm_port*) ;
 int FUNC_8 (struct tcpm_port*,int ,int) ;
 int FUNC_9 (struct tcpm_port*,int const,int ) ;
 int * VAR_3 ;
 int FUNC_10 (struct tcpm_port*) ;
 int const FUNC_11 (struct tcpm_port*) ;

__attribute__((used)) static void FUNC_12(struct tcpm_port *VAR_4, enum typec_cc_status VAR_5,
       enum typec_cc_status VAR_6)
{
 enum typec_cc_status VAR_7, VAR_8;
 enum tcpm_state VAR_9;

 VAR_7 = VAR_4->cc1;
 VAR_8 = VAR_4->cc2;
 VAR_4->cc1 = VAR_5;
 VAR_4->cc2 = VAR_6;

 FUNC_1(VAR_4,
         "CC1: %u -> %u, CC2: %u -> %u [state %s, polarity %d, %s]",
         VAR_7, VAR_5, VAR_8, VAR_6, VAR_3[VAR_4->state],
         VAR_4->polarity,
         FUNC_5(VAR_4) ? "disconnected"
             : "connected");

 switch (VAR_4->state) {
 case 128:
  if (FUNC_4(VAR_4) || FUNC_2(VAR_4) ||
      FUNC_7(VAR_4))
   FUNC_9(VAR_4, 136, 0);
  else if (FUNC_6(VAR_4))
   FUNC_9(VAR_4, 148, 0);
  break;
 case 129:
 case 157:
  if (FUNC_4(VAR_4) || FUNC_2(VAR_4) ||
      FUNC_7(VAR_4))
   FUNC_9(VAR_4, 136, 0);
  break;
 case 136:
  if (FUNC_5(VAR_4) ||
      FUNC_3(VAR_4))
   FUNC_9(VAR_4, 129, 0);
  else if (VAR_5 != VAR_7 || VAR_6 != VAR_8)
   FUNC_9(VAR_4, 136, 0);
  break;
 case 137:
 case 134:
 case 135:
  if (FUNC_5(VAR_4) ||
      !FUNC_7(VAR_4))
   FUNC_9(VAR_4, 129, 0);
  break;
 case 138:
  if (FUNC_6(VAR_4))
   FUNC_9(VAR_4, 148, 0);
  break;
 case 148:
  if ((VAR_4->cc1 == VAR_2 &&
       VAR_4->cc2 != VAR_2) ||
      (VAR_4->cc1 != VAR_2 &&
       VAR_4->cc2 == VAR_2))
   VAR_9 = 147;
  else if (FUNC_5(VAR_4))
   VAR_9 = 138;
  else
   break;
  if (VAR_9 != VAR_4->delayed_state)
   FUNC_9(VAR_4, 148, 0);
  break;
 case 147:
  if (FUNC_5(VAR_4))
   VAR_9 = 138;
  else if (VAR_4->vbus_present)
   VAR_9 = FUNC_10(VAR_4) ? VAR_1 : VAR_0;
  else
   VAR_9 = 138;
  if (VAR_9 != VAR_4->delayed_state)
   FUNC_9(VAR_4, 147, 0);
  break;
 case 144:
  if (FUNC_5(VAR_4))
   FUNC_9(VAR_4, FUNC_11(VAR_4), 0);
  else if (!VAR_4->pd_capable &&
    (VAR_5 != VAR_7 || VAR_6 != VAR_8))
   FUNC_8(VAR_4,
            FUNC_0(VAR_4),
            5000);
  break;

 case 156:
  if (VAR_5 == VAR_2 || VAR_6 == VAR_2)
   FUNC_9(VAR_4, 155, 0);
  break;
 case 155:
  if (FUNC_2(VAR_4))
   FUNC_9(VAR_4, 156, 0);
  break;

 case 154:
  if (VAR_5 == VAR_2 || VAR_6 == VAR_2)
   FUNC_9(VAR_4, 157, 0);
  break;

 case 143:

  break;

 case 146:

  if (FUNC_5(VAR_4))
   FUNC_9(VAR_4, 145, 0);
  break;
 case 145:
  break;

 case 133:

  if (!VAR_4->vbus_present && FUNC_7(VAR_4))
   FUNC_9(VAR_4, 132, 0);
  break;
 case 132:
  if (VAR_4->vbus_present || !FUNC_7(VAR_4))
   FUNC_9(VAR_4, 133, 0);
  break;
 case 139:
  if (!FUNC_6(VAR_4)) {
   VAR_4->max_wait = 0;
   FUNC_9(VAR_4, 133, 0);
  }
  break;
 case 130:
  if (FUNC_7(VAR_4))
   FUNC_9(VAR_4, 131, 0);
  break;
 case 131:
  FUNC_9(VAR_4, 130, 0);
  break;
 case 141:
  if (FUNC_6(VAR_4))
   FUNC_9(VAR_4, 140, 0);
  break;
 case 140:
  if (!FUNC_6(VAR_4))
   FUNC_9(VAR_4, 141, 0);
  break;
 case 142:

  break;
 case 153:
 case 149:
 case 151:
 case 150:
 case 152:




  break;

 default:
  if (FUNC_5(VAR_4))
   FUNC_9(VAR_4, FUNC_11(VAR_4), 0);
  break;
 }
}
