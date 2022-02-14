
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int cc_req; TYPE_1__* tcpc; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;
struct TYPE_2__ {int (* set_cc ) (TYPE_1__*,int) ;} ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct tcpm_port*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct tcpm_port *VAR_0, enum typec_cc_status VAR_1)
{
 FUNC_1(VAR_0, "cc:=%d", VAR_1);
 VAR_0->cc_req = VAR_1;
 VAR_0->tcpc->set_cc(VAR_0->tcpc, VAR_1);
}
