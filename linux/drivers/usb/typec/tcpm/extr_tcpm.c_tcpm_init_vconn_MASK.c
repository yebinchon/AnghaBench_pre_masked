
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int vconn_role; TYPE_1__* tcpc; } ;
struct TYPE_2__ {int (* set_vconn ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(struct tcpm_port *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->tcpc->set_vconn(VAR_1->tcpc, 0);
 VAR_1->vconn_role = VAR_0;
 return VAR_2;
}
