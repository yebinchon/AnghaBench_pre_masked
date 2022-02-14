
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; } ;
struct netup_ci_state {TYPE_1__ ca; } ;
struct cx23885_tsport {scalar_t__ port_priv; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct netup_ci_state*) ;

void FUNC_2(struct cx23885_tsport *VAR_0)
{
 struct netup_ci_state *VAR_1;

 if (((void*)0) == VAR_0)
  return;

 VAR_1 = (struct netup_ci_state *)VAR_0->port_priv;
 if (((void*)0) == VAR_1)
  return;

 if (((void*)0) == VAR_1->ca.data)
  return;

 FUNC_0(&VAR_1->ca);
 FUNC_1(VAR_1);
}
