
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_card_rec {TYPE_2__* port; } ;
struct mwifiex_private {scalar_t__ usb_port; TYPE_1__* adapter; } ;
struct TYPE_4__ {scalar_t__ tx_data_ep; int block_status; } ;
struct TYPE_3__ {struct usb_card_rec* card; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct mwifiex_private *VAR_1)
{
 struct usb_card_rec *VAR_2 = VAR_1->adapter->card;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->usb_port == VAR_2->port[VAR_3].tx_data_ep)
   return !VAR_2->port[VAR_3].block_status;
 }

 return 0;
}
