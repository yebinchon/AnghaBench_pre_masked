
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int other_ch_status; } ;
struct kvaser_usb_err_summary {int channel; TYPE_2__ usbcan; int rxerr; int txerr; int status; } ;
struct kvaser_usb {TYPE_6__* intf; int nchannels; } ;
struct TYPE_9__ {int status_ch0; int rx_errors_count_ch1; int tx_errors_count_ch1; int status_ch1; int rx_errors_count_ch0; int tx_errors_count_ch0; } ;
struct TYPE_7__ {int channel; int rx_errors_count; int tx_errors_count; int status; } ;
struct TYPE_10__ {TYPE_3__ error_event; TYPE_1__ chip_state_event; } ;
struct TYPE_11__ {TYPE_4__ usbcan; } ;
struct kvaser_cmd {int id; TYPE_5__ u; } ;
struct TYPE_12__ {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct kvaser_usb const*,struct kvaser_usb_err_summary*) ;

__attribute__((used)) static void FUNC_2(const struct kvaser_usb *VAR_1,
         const struct kvaser_cmd *VAR_2)
{
 struct kvaser_usb_err_summary VAR_3 = { };

 switch (VAR_2->id) {

 case 128:
  VAR_3.channel = VAR_2->u.usbcan.chip_state_event.channel;
  VAR_3.status = VAR_2->u.usbcan.chip_state_event.status;
  VAR_3.txerr = VAR_2->u.usbcan.chip_state_event.tx_errors_count;
  VAR_3.rxerr = VAR_2->u.usbcan.chip_state_event.rx_errors_count;
  FUNC_1(VAR_1, &VAR_3);
  break;

 case 129:
  VAR_3.channel = 0;
  VAR_3.status = VAR_2->u.usbcan.error_event.status_ch0;
  VAR_3.txerr = VAR_2->u.usbcan.error_event.tx_errors_count_ch0;
  VAR_3.rxerr = VAR_2->u.usbcan.error_event.rx_errors_count_ch0;
  VAR_3.usbcan.other_ch_status =
   VAR_2->u.usbcan.error_event.status_ch1;
  FUNC_1(VAR_1, &VAR_3);




  if (VAR_1->nchannels == VAR_0) {
   VAR_3.channel = 1;
   VAR_3.status = VAR_2->u.usbcan.error_event.status_ch1;
   VAR_3.txerr =
    VAR_2->u.usbcan.error_event.tx_errors_count_ch1;
   VAR_3.rxerr =
    VAR_2->u.usbcan.error_event.rx_errors_count_ch1;
   VAR_3.usbcan.other_ch_status =
    VAR_2->u.usbcan.error_event.status_ch0;
   FUNC_1(VAR_1, &VAR_3);
  }
  break;

 default:
  FUNC_0(&VAR_1->intf->dev, "Invalid cmd id (%d)\n", VAR_2->id);
 }
}
