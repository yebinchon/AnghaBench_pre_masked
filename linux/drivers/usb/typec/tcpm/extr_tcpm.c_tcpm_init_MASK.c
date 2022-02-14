
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tcpm_port {int vbus_never_low; TYPE_1__* tcpc; scalar_t__ vbus_present; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;
struct TYPE_4__ {scalar_t__ (* get_cc ) (TYPE_1__*,int*,int*) ;scalar_t__ (* get_vbus ) (TYPE_1__*) ;int (* init ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tcpm_port*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int*,int*) ;
 int FUNC_4 (struct tcpm_port*) ;
 int FUNC_5 (struct tcpm_port*) ;
 int FUNC_6 (struct tcpm_port*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct tcpm_port *VAR_1)
{
 enum typec_cc_status VAR_2, VAR_3;

 VAR_1->tcpc->init(VAR_1->tcpc);

 FUNC_5(VAR_1);






 VAR_1->vbus_present = VAR_1->tcpc->get_vbus(VAR_1->tcpc);
 if (VAR_1->vbus_present)
  VAR_1->vbus_never_low = 1;

 FUNC_6(VAR_1, FUNC_4(VAR_1), 0);

 if (VAR_1->tcpc->get_cc(VAR_1->tcpc, &VAR_2, &VAR_3) == 0)
  FUNC_0(VAR_1, VAR_2, VAR_3);





 FUNC_6(VAR_1, VAR_0, 0);
}
