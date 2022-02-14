
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int polarity; TYPE_1__* tcpc; } ;
typedef enum typec_cc_polarity { ____Placeholder_typec_cc_polarity } typec_cc_polarity ;
struct TYPE_2__ {int (* set_polarity ) (TYPE_1__*,int) ;} ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct tcpm_port*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct tcpm_port *VAR_0,
        enum typec_cc_polarity VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, "polarity %d", VAR_1);

 VAR_2 = VAR_0->tcpc->set_polarity(VAR_0->tcpc, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_0->polarity = VAR_1;

 return 0;
}
