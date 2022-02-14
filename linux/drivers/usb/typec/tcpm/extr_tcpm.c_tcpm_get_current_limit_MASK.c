
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcpm_port {int cc2; int cc1; TYPE_1__* tcpc; scalar_t__ polarity; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;
struct TYPE_2__ {int (* get_current_limit ) (TYPE_1__*) ;} ;





 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static u32 FUNC_1(struct tcpm_port *VAR_0)
{
 enum typec_cc_status VAR_1;
 u32 VAR_2;

 VAR_1 = VAR_0->polarity ? VAR_0->cc2 : VAR_0->cc1;
 switch (VAR_1) {
 case 130:
  VAR_2 = 1500;
  break;
 case 129:
  VAR_2 = 3000;
  break;
 case 128:
 default:
  if (VAR_0->tcpc->get_current_limit)
   VAR_2 = VAR_0->tcpc->get_current_limit(VAR_0->tcpc);
  else
   VAR_2 = 0;
  break;
 }

 return VAR_2;
}
