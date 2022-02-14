
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhci_hcd {int rh_numports; int is_stopped; int rh_state; scalar_t__ resuming_ports; scalar_t__ port_c_suspend; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (struct uhci_hcd*) ;
 int FUNC_2 (struct uhci_hcd*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uhci_hcd *VAR_4)
{
 int VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_4->rh_numports; ++VAR_5)
  FUNC_2(VAR_4, 0, VAR_3 + (VAR_5 * 2));

 VAR_4->port_c_suspend = VAR_4->resuming_ports = 0;
 VAR_4->rh_state = VAR_2;
 VAR_4->is_stopped = VAR_1;
 FUNC_0(VAR_0, &FUNC_1(VAR_4)->flags);
}
