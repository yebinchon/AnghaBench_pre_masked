
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct controller {TYPE_1__* pcie; int pending_events; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,struct controller*) ;
 int VAR_0 ;

void FUNC_2(struct controller *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2, &VAR_1->pending_events);
 if (!VAR_0)
  FUNC_1(VAR_1->pcie->irq, VAR_1);
}
