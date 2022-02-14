
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int rxerr; int txerr; } ;
struct kvaser_usb_net_priv {TYPE_1__ bec; } ;
struct kvaser_usb {int dummy; } ;
struct TYPE_4__ {int rx_err_counter; int tx_err_counter; int bus_status; } ;
struct kvaser_cmd {TYPE_2__ chip_state_event; } ;
struct can_berr_counter {int rxerr; int txerr; } ;


 struct kvaser_usb_net_priv* FUNC_0 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_1 (struct kvaser_usb_net_priv*,int ,struct can_berr_counter*) ;

__attribute__((used)) static void FUNC_2(const struct kvaser_usb *VAR_0,
      const struct kvaser_cmd *VAR_1)
{
 struct kvaser_usb_net_priv *VAR_2;
 struct can_berr_counter VAR_3;
 u8 VAR_4;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return;

 VAR_4 = VAR_1->chip_state_event.bus_status;
 VAR_3.txerr = VAR_1->chip_state_event.tx_err_counter;
 VAR_3.rxerr = VAR_1->chip_state_event.rx_err_counter;

 FUNC_1(VAR_2, VAR_4, &VAR_3);
 VAR_2->bec.txerr = VAR_3.txerr;
 VAR_2->bec.rxerr = VAR_3.rxerr;
}
