
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int port_type; TYPE_1__* tcpc; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;
struct TYPE_2__ {int (* start_toggling ) (TYPE_1__*,int ,int) ;} ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (struct tcpm_port*,char*) ;

__attribute__((used)) static bool FUNC_2(struct tcpm_port *VAR_0, enum typec_cc_status VAR_1)
{
 int VAR_2;

 if (!VAR_0->tcpc->start_toggling)
  return 0;

 FUNC_1(VAR_0, "Start toggling");
 VAR_2 = VAR_0->tcpc->start_toggling(VAR_0->tcpc, VAR_0->port_type, VAR_1);
 return VAR_2 == 0;
}
