
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int vbus_source; scalar_t__ vbus_charge; TYPE_1__* tcpc; } ;
struct TYPE_2__ {int (* set_vbus ) (TYPE_1__*,int,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_1 (struct tcpm_port*,char*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct tcpm_port *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (VAR_2 && VAR_1->vbus_charge)
  return -VAR_0;

 FUNC_1(VAR_1, "vbus:=%d charge=%d", VAR_2, VAR_1->vbus_charge);

 VAR_3 = VAR_1->tcpc->set_vbus(VAR_1->tcpc, VAR_2, VAR_1->vbus_charge);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->vbus_source = VAR_2;
 return 0;
}
