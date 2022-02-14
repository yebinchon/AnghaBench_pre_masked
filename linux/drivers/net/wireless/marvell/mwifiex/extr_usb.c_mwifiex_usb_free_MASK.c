
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_tx_data_port {TYPE_3__* tx_data_list; } ;
struct TYPE_8__ {int * urb; } ;
struct TYPE_5__ {int * urb; } ;
struct usb_card_rec {TYPE_4__ tx_cmd; struct usb_tx_data_port* port; TYPE_2__* rx_data_list; int rx_data_urb_pending; TYPE_1__ rx_cmd; int rx_cmd_urb_pending; } ;
struct TYPE_7__ {int * urb; } ;
struct TYPE_6__ {int * urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct usb_card_rec *VAR_3)
{
 struct usb_tx_data_port *VAR_4;
 int VAR_5, VAR_6;

 if (FUNC_0(&VAR_3->rx_cmd_urb_pending) && VAR_3->rx_cmd.urb)
  FUNC_2(VAR_3->rx_cmd.urb);

 FUNC_1(VAR_3->rx_cmd.urb);
 VAR_3->rx_cmd.urb = ((void*)0);

 if (FUNC_0(&VAR_3->rx_data_urb_pending))
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (VAR_3->rx_data_list[VAR_5].urb)
    FUNC_2(VAR_3->rx_data_list[VAR_5].urb);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_1(VAR_3->rx_data_list[VAR_5].urb);
  VAR_3->rx_data_list[VAR_5].urb = ((void*)0);
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->port[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   FUNC_2(VAR_4->tx_data_list[VAR_6].urb);
   FUNC_1(VAR_4->tx_data_list[VAR_6].urb);
   VAR_4->tx_data_list[VAR_6].urb = ((void*)0);
  }
 }

 FUNC_1(VAR_3->tx_cmd.urb);
 VAR_3->tx_cmd.urb = ((void*)0);

 return;
}
