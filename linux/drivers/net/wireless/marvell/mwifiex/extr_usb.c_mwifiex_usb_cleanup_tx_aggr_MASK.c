
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int is_hold_timer_set; scalar_t__ hold_tmo_msecs; int hold_timer; } ;
struct TYPE_6__ {TYPE_2__ timer_cnxt; int aggr_list; } ;
struct usb_tx_data_port {TYPE_3__ tx_aggr; } ;
struct usb_card_rec {struct usb_tx_data_port* port; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ enable; } ;
struct mwifiex_adapter {TYPE_1__ bus_aggr; scalar_t__ card; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_adapter*,struct sk_buff*,int ,int) ;
 struct sk_buff* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mwifiex_adapter *VAR_1)
{
 struct usb_card_rec *VAR_2 = (struct usb_card_rec *)VAR_1->card;
 struct usb_tx_data_port *VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = &VAR_2->port[VAR_5];
  if (VAR_1->bus_aggr.enable)
   while ((VAR_4 =
    FUNC_2(&VAR_3->tx_aggr.aggr_list)))
    FUNC_1(VAR_1, VAR_4,
           0, -1);
  FUNC_0(&VAR_3->tx_aggr.timer_cnxt.hold_timer);
  VAR_3->tx_aggr.timer_cnxt.is_hold_timer_set = 0;
  VAR_3->tx_aggr.timer_cnxt.hold_tmo_msecs = 0;
 }
}
