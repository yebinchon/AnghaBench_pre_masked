
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhci_hcd {int resuming_ports; int port_c_suspend; } ;
struct TYPE_2__ {int self; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct uhci_hcd*,unsigned long) ;
 TYPE_1__* FUNC_6 (struct uhci_hcd*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(struct uhci_hcd *VAR_1, int VAR_2,
  unsigned long VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (FUNC_5(VAR_1, VAR_3) & VAR_0) {
  FUNC_0(VAR_0);
  if (FUNC_3(VAR_2, &VAR_1->resuming_ports))
   FUNC_2(VAR_2, &VAR_1->port_c_suspend);






  for (VAR_5 = 0; VAR_5 < 10; ++VAR_5) {
   if (!(FUNC_5(VAR_1, VAR_3) & VAR_0))
    break;
   FUNC_4(1);
  }
 }
 FUNC_1(VAR_2, &VAR_1->resuming_ports);
 FUNC_7(&FUNC_6(VAR_1)->self, VAR_2);
}
