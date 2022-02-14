
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_card_rec {TYPE_1__* port; } ;
struct mwifiex_adapter {struct usb_card_rec* card; } ;
struct TYPE_2__ {int block_status; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct mwifiex_adapter *VAR_1)
{
 struct usb_card_rec *VAR_2 = VAR_1->card;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!VAR_2->port[VAR_3].block_status)
   return 0;

 return 1;
}
