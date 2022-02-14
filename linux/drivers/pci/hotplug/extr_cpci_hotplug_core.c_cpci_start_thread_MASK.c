
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ irq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_4(void)
{
 if (VAR_0->irq)
  VAR_1 = FUNC_3(VAR_2, ((void*)0), "cpci_hp_eventd");
 else
  VAR_1 = FUNC_3(VAR_3, ((void*)0), "cpci_hp_polld");
 if (FUNC_0(VAR_1)) {
  FUNC_2("Can't start up our thread");
  return FUNC_1(VAR_1);
 }
 VAR_4 = 0;
 return 0;
}
