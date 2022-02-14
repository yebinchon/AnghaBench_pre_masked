
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int vbus_source; int vbus_charge; TYPE_1__* tcpc; } ;
struct TYPE_2__ {int (* set_vbus ) (TYPE_1__*,int,int) ;} ;


 int FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_1(struct tcpm_port *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->tcpc->set_vbus(VAR_0->tcpc, 0, 0);
 VAR_0->vbus_source = 0;
 VAR_0->vbus_charge = 0;
 return VAR_1;
}
