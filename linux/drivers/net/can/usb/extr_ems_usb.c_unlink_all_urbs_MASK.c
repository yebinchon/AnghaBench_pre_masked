
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ems_usb {TYPE_1__* tx_contexts; int active_tx_urbs; int tx_submitted; int rx_submitted; int intr_urb; } ;
struct TYPE_2__ {int echo_index; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ems_usb *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1->intr_urb);

 FUNC_1(&VAR_1->rx_submitted);

 FUNC_1(&VAR_1->tx_submitted);
 FUNC_0(&VAR_1->active_tx_urbs, 0);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->tx_contexts[VAR_2].echo_index = VAR_0;
}
