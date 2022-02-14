
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usb_card_rec {TYPE_1__* port; } ;
struct mwifiex_private {scalar_t__ bss_role; scalar_t__ usb_port; scalar_t__ media_connected; scalar_t__ bss_started; } ;
struct mwifiex_adapter {int priv_num; struct mwifiex_private** priv; scalar_t__ usb_mc_status; struct usb_card_rec* card; } ;
struct TYPE_2__ {int block_status; scalar_t__ tx_data_ep; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct mwifiex_adapter *VAR_4)
{
 struct usb_card_rec *VAR_5 = VAR_4->card;
 u8 VAR_6 = VAR_3;
 struct mwifiex_private *VAR_7 = ((void*)0);
 int VAR_8;

 if (VAR_4->usb_mc_status) {
  for (VAR_8 = 0; VAR_8 < VAR_4->priv_num; VAR_8++) {
   VAR_7 = VAR_4->priv[VAR_8];
   if (!VAR_7)
    continue;
   if ((VAR_7->bss_role == VAR_1 &&
        !VAR_7->bss_started) ||
       (VAR_7->bss_role == VAR_0 &&
        !VAR_7->media_connected))
    VAR_7->usb_port = VAR_3;
  }
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   VAR_5->port[VAR_8].block_status = 0;
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_4->priv_num; VAR_8++) {
   VAR_7 = VAR_4->priv[VAR_8];
   if (!VAR_7)
    continue;
   if ((VAR_7->bss_role == VAR_1 &&
        VAR_7->bss_started) ||
       (VAR_7->bss_role == VAR_0 &&
        VAR_7->media_connected)) {
    VAR_6 = VAR_7->usb_port;
    break;
   }
  }
  for (VAR_8 = 0; VAR_8 < VAR_4->priv_num; VAR_8++) {
   VAR_7 = VAR_4->priv[VAR_8];
   if (VAR_7)
    VAR_7->usb_port = VAR_6;
  }
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   if (VAR_6 == VAR_5->port[VAR_8].tx_data_ep)
    VAR_5->port[VAR_8].block_status = 0;
   else
    VAR_5->port[VAR_8].block_status = 1;
  }
 }
}
