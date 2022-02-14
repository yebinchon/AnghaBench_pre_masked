
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_card_rec {struct urb_context* rx_data_list; } ;
struct urb_context {scalar_t__ skb; } ;
struct mwifiex_adapter {scalar_t__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct urb_context*,int ) ;

__attribute__((used)) static void FUNC_1(struct mwifiex_adapter *VAR_2)
{
 struct usb_card_rec *VAR_3 = (struct usb_card_rec *)VAR_2->card;
 int VAR_4;
 struct urb_context *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->rx_data_list[VAR_4].skb)
   continue;
  VAR_5 = &VAR_3->rx_data_list[VAR_4];
  FUNC_0(VAR_5, VAR_0);
 }
}
