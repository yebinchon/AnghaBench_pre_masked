
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {scalar_t__ queued_message; scalar_t__ delayed_state; scalar_t__ delayed_runtime; int state_machine; int wq; } ;
typedef enum pd_msg_request { ____Placeholder_pd_msg_request } pd_msg_request ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (struct tcpm_port*,int ) ;
 int FUNC_2 (struct tcpm_port*) ;
 int FUNC_3 (struct tcpm_port*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct tcpm_port *VAR_6)
{
 enum pd_msg_request VAR_7;

 do {
  VAR_7 = VAR_6->queued_message;
  VAR_6->queued_message = VAR_4;

  switch (VAR_7) {
  case 130:
   FUNC_1(VAR_6, VAR_3);
   break;
  case 131:
   FUNC_1(VAR_6, VAR_2);
   break;
  case 132:
   FUNC_1(VAR_6, VAR_1);
   break;
  case 129:
   FUNC_2(VAR_6);
   break;
  case 128:
   FUNC_3(VAR_6);
   break;
  default:
   break;
  }
 } while (VAR_6->queued_message != VAR_4);

 if (VAR_6->delayed_state != VAR_0) {
  if (FUNC_4(VAR_6->delayed_runtime)) {
   FUNC_0(VAR_6->wq, &VAR_6->state_machine,
      VAR_6->delayed_runtime - VAR_5);
   return 1;
  }
  VAR_6->delayed_state = VAR_0;
 }
 return 0;
}
