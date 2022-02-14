
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct net_device_stats {int rx_errors; int tx_errors; } ;
struct TYPE_16__ {int txerr; int rxerr; } ;
struct TYPE_14__ {int bus_error; int restarts; } ;
struct TYPE_15__ {int state; TYPE_5__ can_stats; scalar_t__ restart_ms; } ;
struct kvaser_usb_net_priv {TYPE_7__ bec; TYPE_6__ can; TYPE_8__* netdev; struct kvaser_usb* dev; } ;
struct TYPE_13__ {int error_state; } ;
struct TYPE_12__ {int error_factor; } ;
struct kvaser_usb_err_summary {int status; int txerr; int rxerr; TYPE_4__ usbcan; TYPE_3__ leaf; } ;
struct TYPE_10__ {int family; } ;
struct TYPE_11__ {TYPE_1__ leaf; } ;
struct kvaser_usb {TYPE_2__ card_data; } ;
struct can_frame {int dummy; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;
struct TYPE_17__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_8__*,struct can_frame*,int,int) ;
 int FUNC_1 (TYPE_8__*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct kvaser_usb_net_priv *VAR_11,
     const struct kvaser_usb_err_summary *VAR_12,
     struct can_frame *VAR_13)
{
 struct kvaser_usb *VAR_14 = VAR_11->dev;
 struct net_device_stats *VAR_15 = &VAR_11->netdev->stats;
 enum can_state VAR_16, VAR_17, VAR_18, VAR_19;

 FUNC_1(VAR_11->netdev, "Error status: 0x%02x\n", VAR_12->status);

 VAR_17 = VAR_11->can.state;
 VAR_16 = VAR_11->can.state;

 if (VAR_12->status & (VAR_5 | VAR_7)) {
  VAR_17 = VAR_0;
 } else if (VAR_12->status & VAR_6) {
  VAR_17 = VAR_2;
 } else if (VAR_12->status & VAR_4) {

  if (VAR_16 < VAR_0) {
   if (VAR_12->txerr >= 128 || VAR_12->rxerr >= 128)
    VAR_17 = VAR_2;
   else if (VAR_12->txerr >= 96 || VAR_12->rxerr >= 96)
    VAR_17 = VAR_3;
   else if (VAR_16 > VAR_1)
    VAR_17 = VAR_1;
  }
 }

 if (!VAR_12->status)
  VAR_17 = VAR_1;

 if (VAR_17 != VAR_16) {
  VAR_18 = (VAR_12->txerr >= VAR_12->rxerr) ? VAR_17 : 0;
  VAR_19 = (VAR_12->txerr <= VAR_12->rxerr) ? VAR_17 : 0;

  FUNC_0(VAR_11->netdev, VAR_13, VAR_18, VAR_19);
 }

 if (VAR_11->can.restart_ms &&
     VAR_16 >= VAR_0 &&
     VAR_17 < VAR_0)
  VAR_11->can.can_stats.restarts++;

 switch (VAR_14->card_data.leaf.family) {
 case 129:
  if (VAR_12->leaf.error_factor) {
   VAR_11->can.can_stats.bus_error++;
   VAR_15->rx_errors++;
  }
  break;
 case 128:
  if (VAR_12->usbcan.error_state & VAR_10)
   VAR_15->tx_errors++;
  if (VAR_12->usbcan.error_state & VAR_9)
   VAR_15->rx_errors++;
  if (VAR_12->usbcan.error_state & VAR_8)
   VAR_11->can.can_stats.bus_error++;
  break;
 }

 VAR_11->bec.txerr = VAR_12->txerr;
 VAR_11->bec.rxerr = VAR_12->rxerr;
}
