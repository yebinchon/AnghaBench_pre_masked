
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct peak_usb_device {int active_tx_urbs; int tx_submitted; TYPE_1__* tx_contexts; int rx_submitted; } ;
struct TYPE_2__ {int echo_index; struct urb* urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct peak_usb_device *VAR_1)
{
 int VAR_2;


 FUNC_2(&VAR_1->rx_submitted);


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct urb *VAR_3 = VAR_1->tx_contexts[VAR_2].urb;

  if (!VAR_3 ||
      VAR_1->tx_contexts[VAR_2].echo_index != VAR_0) {




   continue;
  }

  FUNC_1(VAR_3);
  VAR_1->tx_contexts[VAR_2].urb = ((void*)0);
 }


 FUNC_2(&VAR_1->tx_submitted);
 FUNC_0(&VAR_1->active_tx_urbs, 0);
}
