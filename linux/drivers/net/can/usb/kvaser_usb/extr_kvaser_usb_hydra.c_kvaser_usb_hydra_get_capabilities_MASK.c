
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int capabilities; } ;
struct kvaser_usb {TYPE_1__* intf; TYPE_2__ card_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct kvaser_usb*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct kvaser_usb *VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 if (!(VAR_4->card_data.capabilities & VAR_0)) {
  FUNC_0(&VAR_4->intf->dev,
    "No extended capability support. Upgrade your device.\n");
  return 0;
 }

 VAR_5 = FUNC_1
     (VAR_4,
      VAR_2,
      &VAR_6);
 if (VAR_5)
  return VAR_5;
 if (VAR_6)
  FUNC_0(&VAR_4->intf->dev,
    "KVASER_USB_HYDRA_CAP_CMD_LISTEN_MODE failed %u\n",
    VAR_6);

 VAR_5 = FUNC_1
     (VAR_4,
      VAR_1,
      &VAR_6);
 if (VAR_5)
  return VAR_5;
 if (VAR_6)
  FUNC_0(&VAR_4->intf->dev,
    "KVASER_USB_HYDRA_CAP_CMD_ERR_REPORT failed %u\n",
    VAR_6);

 VAR_5 = FUNC_1
     (VAR_4, VAR_3,
      &VAR_6);
 if (VAR_5)
  return VAR_5;
 if (VAR_6)
  FUNC_0(&VAR_4->intf->dev,
    "KVASER_USB_HYDRA_CAP_CMD_ONE_SHOT failed %u\n",
    VAR_6);

 return 0;
}
