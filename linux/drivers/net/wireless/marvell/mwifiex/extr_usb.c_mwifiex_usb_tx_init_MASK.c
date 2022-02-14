
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int is_hold_timer_set; int hold_timer; scalar_t__ hold_tmo_msecs; struct usb_tx_data_port* port; struct mwifiex_adapter* adapter; } ;
struct TYPE_8__ {TYPE_3__ timer_cnxt; int aggr_list; } ;
struct usb_tx_data_port {scalar_t__ tx_data_ep; int block_status; TYPE_4__ tx_aggr; TYPE_2__* tx_data_list; scalar_t__ tx_data_ix; } ;
struct TYPE_5__ {void* urb; int ep; struct mwifiex_adapter* adapter; } ;
struct usb_card_rec {struct usb_tx_data_port* port; TYPE_1__ tx_cmd; int tx_cmd_ep; } ;
struct mwifiex_adapter {scalar_t__ card; } ;
struct TYPE_6__ {scalar_t__ ep; void* urb; struct mwifiex_adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_6)
{
 struct usb_card_rec *VAR_7 = (struct usb_card_rec *)VAR_6->card;
 struct usb_tx_data_port *VAR_8;
 int VAR_9, VAR_10;

 VAR_7->tx_cmd.adapter = VAR_6;
 VAR_7->tx_cmd.ep = VAR_7->tx_cmd_ep;

 VAR_7->tx_cmd.urb = FUNC_2(0, VAR_1);
 if (!VAR_7->tx_cmd.urb)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8 = &VAR_7->port[VAR_9];
  if (!VAR_8->tx_data_ep)
   continue;
  VAR_8->tx_data_ix = 0;
  FUNC_0(&VAR_8->tx_aggr.aggr_list);
  if (VAR_8->tx_data_ep == VAR_4)
   VAR_8->block_status = 0;
  else
   VAR_8->block_status = 1;
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   VAR_8->tx_data_list[VAR_10].adapter = VAR_6;
   VAR_8->tx_data_list[VAR_10].ep = VAR_8->tx_data_ep;
   VAR_8->tx_data_list[VAR_10].urb =
     FUNC_2(0, VAR_1);
   if (!VAR_8->tx_data_list[VAR_10].urb)
    return -VAR_0;
  }

  VAR_8->tx_aggr.timer_cnxt.adapter = VAR_6;
  VAR_8->tx_aggr.timer_cnxt.port = VAR_8;
  VAR_8->tx_aggr.timer_cnxt.is_hold_timer_set = 0;
  VAR_8->tx_aggr.timer_cnxt.hold_tmo_msecs = 0;
  FUNC_1(&VAR_8->tx_aggr.timer_cnxt.hold_timer,
       VAR_5, 0);
 }

 return 0;
}
