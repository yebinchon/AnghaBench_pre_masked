
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_card_rec {TYPE_2__* udev; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int ext_scan; int usb_mc_status; int usb_mc_setup; int fw_name; void* tx_buf_size; scalar_t__ card; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_6)
{
 struct usb_card_rec *VAR_7 = (struct usb_card_rec *)VAR_6->card;

 VAR_7->adapter = VAR_6;

 switch (FUNC_0(VAR_7->udev->descriptor.idProduct)) {
 case 129:
 case 128:
  VAR_6->tx_buf_size = VAR_1;
  FUNC_1(VAR_6->fw_name, VAR_5);
  VAR_6->ext_scan = 1;
  break;
 case 135:
 case 134:
  VAR_6->tx_buf_size = VAR_0;
  FUNC_1(VAR_6->fw_name, VAR_2);
  VAR_6->ext_scan = 1;
  break;
 case 131:
 case 130:
  VAR_6->tx_buf_size = VAR_0;
  FUNC_1(VAR_6->fw_name, VAR_4);
  VAR_6->ext_scan = 0;
  break;
 case 133:
 case 132:
 default:
  VAR_6->tx_buf_size = VAR_0;
  FUNC_1(VAR_6->fw_name, VAR_3);
  break;
 }

 VAR_6->usb_mc_status = 0;
 VAR_6->usb_mc_setup = 0;

 return 0;
}
