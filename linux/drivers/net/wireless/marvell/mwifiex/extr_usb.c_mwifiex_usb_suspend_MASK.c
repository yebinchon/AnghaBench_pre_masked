
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_tx_data_port {TYPE_3__* tx_data_list; } ;
struct usb_interface {int dev; } ;
struct TYPE_8__ {scalar_t__ urb; } ;
struct TYPE_5__ {scalar_t__ urb; } ;
struct usb_card_rec {TYPE_4__ tx_cmd; struct usb_tx_data_port* port; TYPE_2__* rx_data_list; int rx_data_urb_pending; TYPE_1__ rx_cmd; int rx_cmd_urb_pending; struct mwifiex_adapter* adapter; int fw_done; } ;
struct mwifiex_adapter {int work_flags; } ;
typedef int pm_message_t ;
struct TYPE_7__ {scalar_t__ urb; } ;
struct TYPE_6__ {scalar_t__ urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 struct usb_card_rec* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_8, pm_message_t VAR_9)
{
 struct usb_card_rec *VAR_10 = FUNC_8(VAR_8);
 struct mwifiex_adapter *VAR_11;
 struct usb_tx_data_port *VAR_12;
 int VAR_13, VAR_14;


 FUNC_10(&VAR_10->fw_done);

 VAR_11 = VAR_10->adapter;
 if (!VAR_11) {
  FUNC_2(&VAR_8->dev, "card is not valid\n");
  return 0;
 }

 if (FUNC_7(FUNC_6(VAR_3, &VAR_11->work_flags)))
  FUNC_3(VAR_11, VAR_7,
       "Device already suspended\n");


 if (!FUNC_4(VAR_11)) {
  FUNC_3(VAR_11, VAR_1,
       "cmd: failed to suspend\n");
  FUNC_1(VAR_2, &VAR_11->work_flags);
  return -VAR_0;
 }
 FUNC_5(VAR_3, &VAR_11->work_flags);
 FUNC_1(VAR_2, &VAR_11->work_flags);

 if (FUNC_0(&VAR_10->rx_cmd_urb_pending) && VAR_10->rx_cmd.urb)
  FUNC_9(VAR_10->rx_cmd.urb);

 if (FUNC_0(&VAR_10->rx_data_urb_pending))
  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
   if (VAR_10->rx_data_list[VAR_13].urb)
    FUNC_9(VAR_10->rx_data_list[VAR_13].urb);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_12 = &VAR_10->port[VAR_13];
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   if (VAR_12->tx_data_list[VAR_14].urb)
    FUNC_9(VAR_12->tx_data_list[VAR_14].urb);
  }
 }

 if (VAR_10->tx_cmd.urb)
  FUNC_9(VAR_10->tx_cmd.urb);

 return 0;
}
