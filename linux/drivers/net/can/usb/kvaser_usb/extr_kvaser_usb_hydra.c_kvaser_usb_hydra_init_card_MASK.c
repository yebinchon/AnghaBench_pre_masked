
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_usb_dev_card_data_hydra {scalar_t__ sysdbg_he; int channel_to_he; int usb_rx_leftover_lock; scalar_t__ usb_rx_leftover_len; int usb_rx_leftover; int transid_lock; int transid; } ;
struct TYPE_3__ {struct kvaser_usb_dev_card_data_hydra hydra; } ;
struct kvaser_usb {TYPE_2__* intf; TYPE_1__ card_data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct kvaser_usb*,unsigned int,unsigned int,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvaser_usb *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 struct kvaser_usb_dev_card_data_hydra *VAR_9 =
       &VAR_6->card_data.hydra;

 VAR_9->transid = VAR_2;
 FUNC_3(&VAR_9->transid_lock);

 FUNC_2(VAR_9->usb_rx_leftover, 0, VAR_1);
 VAR_9->usb_rx_leftover_len = 0;
 FUNC_3(&VAR_9->usb_rx_leftover_lock);

 FUNC_2(VAR_9->channel_to_he, VAR_0,
        sizeof(VAR_9->channel_to_he));
 VAR_9->sysdbg_he = 0;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = FUNC_1
     (VAR_6,
      (VAR_3 | VAR_8),
      VAR_8, "CAN");
  if (VAR_7) {
   FUNC_0(&VAR_6->intf->dev,
    "CMD_MAP_CHANNEL_REQ failed for CAN%u\n", VAR_8);
   return VAR_7;
  }
 }

 VAR_7 = FUNC_1(VAR_6, VAR_4,
        0, "SYSDBG");
 if (VAR_7) {
  FUNC_0(&VAR_6->intf->dev,
   "CMD_MAP_CHANNEL_REQ failed for SYSDBG\n");
  return VAR_7;
 }

 return 0;
}
