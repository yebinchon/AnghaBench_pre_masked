
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int queued_message; int state_machine; int wq; } ;
typedef enum pd_msg_request { ____Placeholder_pd_msg_request } pd_msg_request ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct tcpm_port *VAR_0,
          enum pd_msg_request VAR_1)
{
 VAR_0->queued_message = VAR_1;
 FUNC_0(VAR_0->wq, &VAR_0->state_machine, 0);
}
