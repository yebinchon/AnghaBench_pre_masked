
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int family; } ;
struct TYPE_9__ {TYPE_1__ leaf; } ;
struct kvaser_usb {void* max_tx_urbs; void* fw_version; TYPE_2__ card_data; } ;
struct TYPE_12__ {int max_outstanding_tx; int fw_version; } ;
struct TYPE_13__ {TYPE_5__ softinfo; } ;
struct TYPE_10__ {int max_outstanding_tx; int fw_version; } ;
struct TYPE_11__ {TYPE_3__ softinfo; } ;
struct TYPE_14__ {TYPE_6__ usbcan; TYPE_4__ leaf; } ;
struct kvaser_cmd {TYPE_7__ u; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct kvaser_usb*,int ,int ) ;
 int FUNC_1 (struct kvaser_usb*,int ,struct kvaser_cmd*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct kvaser_usb *VAR_2)
{
 struct kvaser_cmd VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0, 0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 switch (VAR_2->card_data.leaf.family) {
 case 129:
  VAR_2->fw_version = FUNC_3(VAR_3.u.leaf.softinfo.fw_version);
  VAR_2->max_tx_urbs =
   FUNC_2(VAR_3.u.leaf.softinfo.max_outstanding_tx);
  break;
 case 128:
  VAR_2->fw_version = FUNC_3(VAR_3.u.usbcan.softinfo.fw_version);
  VAR_2->max_tx_urbs =
   FUNC_2(VAR_3.u.usbcan.softinfo.max_outstanding_tx);
  break;
 }

 return 0;
}
