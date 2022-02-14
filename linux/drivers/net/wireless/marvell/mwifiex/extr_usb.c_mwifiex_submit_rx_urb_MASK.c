
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int skb; } ;
struct usb_card_rec {scalar_t__ rx_cmd_ep; TYPE_1__ rx_cmd; int rx_cmd_urb_pending; } ;
struct mwifiex_adapter {scalar_t__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mwifiex_adapter *VAR_2, u8 VAR_3)
{
 struct usb_card_rec *VAR_4 = (struct usb_card_rec *)VAR_2->card;

 FUNC_2(VAR_4->rx_cmd.skb, VAR_0);
 if ((VAR_3 == VAR_4->rx_cmd_ep) &&
     (!FUNC_0(&VAR_4->rx_cmd_urb_pending)))
  FUNC_1(&VAR_4->rx_cmd,
       VAR_1);

 return;
}
