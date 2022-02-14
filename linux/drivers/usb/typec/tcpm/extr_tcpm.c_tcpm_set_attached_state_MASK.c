
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int data_role; int pwr_role; TYPE_1__* tcpc; } ;
struct TYPE_2__ {int (* set_roles ) (TYPE_1__*,int,int ,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct tcpm_port *VAR_0, bool VAR_1)
{
 return VAR_0->tcpc->set_roles(VAR_0->tcpc, VAR_1, VAR_0->pwr_role,
         VAR_0->data_role);
}
