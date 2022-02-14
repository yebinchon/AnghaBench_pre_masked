
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int pwr_role; int typec_port; int data_role; TYPE_1__* tcpc; } ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;
struct TYPE_2__ {int (* set_roles ) (TYPE_1__*,int,int,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int,int,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct tcpm_port *VAR_0, enum typec_role VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->tcpc->set_roles(VAR_0->tcpc, 1, VAR_1,
        VAR_0->data_role);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_0->pwr_role = VAR_1;
 FUNC_1(VAR_0->typec_port, VAR_1);

 return 0;
}
