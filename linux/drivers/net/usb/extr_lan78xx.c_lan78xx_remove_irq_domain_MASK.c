
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phyirq; int * irqdomain; } ;
struct lan78xx_net {TYPE_1__ domain_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lan78xx_net *VAR_0)
{
 if (VAR_0->domain_data.phyirq > 0) {
  FUNC_0(VAR_0->domain_data.phyirq);

  if (VAR_0->domain_data.irqdomain)
   FUNC_1(VAR_0->domain_data.irqdomain);
 }
 VAR_0->domain_data.phyirq = 0;
 VAR_0->domain_data.irqdomain = ((void*)0);
}
