
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


struct TYPE_13__ {int error_factor; } ;
struct kvaser_usb_err_summary {TYPE_6__ leaf; int rxerr; int txerr; int status; int channel; } ;
struct kvaser_usb {TYPE_7__* intf; } ;
struct TYPE_10__ {int rx_errors_count; int tx_errors_count; int status; int channel; } ;
struct TYPE_9__ {int * data; int channel; } ;
struct TYPE_8__ {int error_factor; int rx_errors_count; int tx_errors_count; int status; int channel; } ;
struct TYPE_11__ {TYPE_3__ chip_state_event; TYPE_2__ log_message; TYPE_1__ error_event; } ;
struct TYPE_12__ {TYPE_4__ leaf; } ;
struct kvaser_cmd {int id; TYPE_5__ u; } ;
struct TYPE_14__ {int dev; } ;





 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct kvaser_usb const*,struct kvaser_usb_err_summary*) ;

__attribute__((used)) static void FUNC_2(const struct kvaser_usb *VAR_0,
       const struct kvaser_cmd *VAR_1)
{
 struct kvaser_usb_err_summary VAR_2 = { };

 switch (VAR_1->id) {
 case 130:
  VAR_2.channel = VAR_1->u.leaf.error_event.channel;
  VAR_2.status = VAR_1->u.leaf.error_event.status;
  VAR_2.txerr = VAR_1->u.leaf.error_event.tx_errors_count;
  VAR_2.rxerr = VAR_1->u.leaf.error_event.rx_errors_count;
  VAR_2.leaf.error_factor = VAR_1->u.leaf.error_event.error_factor;
  break;
 case 128:
  VAR_2.channel = VAR_1->u.leaf.log_message.channel;
  VAR_2.status = VAR_1->u.leaf.log_message.data[0];
  VAR_2.txerr = VAR_1->u.leaf.log_message.data[2];
  VAR_2.rxerr = VAR_1->u.leaf.log_message.data[3];
  VAR_2.leaf.error_factor = VAR_1->u.leaf.log_message.data[1];
  break;
 case 129:
  VAR_2.channel = VAR_1->u.leaf.chip_state_event.channel;
  VAR_2.status = VAR_1->u.leaf.chip_state_event.status;
  VAR_2.txerr = VAR_1->u.leaf.chip_state_event.tx_errors_count;
  VAR_2.rxerr = VAR_1->u.leaf.chip_state_event.rx_errors_count;
  VAR_2.leaf.error_factor = 0;
  break;
 default:
  FUNC_0(&VAR_0->intf->dev, "Invalid cmd id (%d)\n", VAR_1->id);
  return;
 }

 FUNC_1(VAR_0, &VAR_2);
}
