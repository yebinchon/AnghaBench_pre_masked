
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* urb; int ep; struct mwifiex_adapter* adapter; int skb; } ;
struct usb_card_rec {TYPE_1__* rx_data_list; int rx_data_ep; TYPE_1__ rx_cmd; int rx_cmd_ep; } ;
struct mwifiex_adapter {scalar_t__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_5)
{
 struct usb_card_rec *VAR_6 = (struct usb_card_rec *)VAR_5->card;
 int VAR_7;

 VAR_6->rx_cmd.adapter = VAR_5;
 VAR_6->rx_cmd.ep = VAR_6->rx_cmd_ep;

 VAR_6->rx_cmd.urb = FUNC_2(0, VAR_1);
 if (!VAR_6->rx_cmd.urb)
  return -VAR_0;

 VAR_6->rx_cmd.skb = FUNC_0(VAR_2);
 if (!VAR_6->rx_cmd.skb)
  return -VAR_0;

 if (FUNC_1(&VAR_6->rx_cmd, VAR_2))
  return -1;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6->rx_data_list[VAR_7].adapter = VAR_5;
  VAR_6->rx_data_list[VAR_7].ep = VAR_6->rx_data_ep;

  VAR_6->rx_data_list[VAR_7].urb = FUNC_2(0, VAR_1);
  if (!VAR_6->rx_data_list[VAR_7].urb)
   return -1;
  if (FUNC_1(&VAR_6->rx_data_list[VAR_7],
           VAR_3))
   return -1;
 }

 return 0;
}
