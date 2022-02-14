
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mcba_usb_msg_ka_can {scalar_t__ tx_err_cnt; scalar_t__ rx_err_cnt; scalar_t__ tx_bus_off; int soft_ver_minor; int soft_ver_major; } ;
struct TYPE_4__ {int const bitrate; } ;
struct TYPE_6__ {int state; TYPE_1__ bittiming; } ;
struct TYPE_5__ {scalar_t__ txerr; scalar_t__ rxerr; } ;
struct mcba_priv {int can_ka_first_pass; int can_speed_check; TYPE_3__ can; TYPE_2__ bec; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mcba_usb_msg_ka_can*) ;
 int FUNC_1 (int ,char*,int const,int const) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mcba_priv *VAR_5,
        struct mcba_usb_msg_ka_can *VAR_6)
{
 if (FUNC_3(VAR_5->can_ka_first_pass)) {
  FUNC_2(VAR_5->netdev, "PIC CAN version %hhu.%hhu\n",
       VAR_6->soft_ver_major, VAR_6->soft_ver_minor);

  VAR_5->can_ka_first_pass = 0;
 }

 if (FUNC_3(VAR_5->can_speed_check)) {
  const u32 VAR_7 = FUNC_0(VAR_6);

  VAR_5->can_speed_check = 0;

  if (VAR_7 != VAR_5->can.bittiming.bitrate)
   FUNC_1(
       VAR_5->netdev,
       "Wrong bitrate reported by the device (%u). Expected %u",
       VAR_7, VAR_5->can.bittiming.bitrate);
 }

 VAR_5->bec.txerr = VAR_6->tx_err_cnt;
 VAR_5->bec.rxerr = VAR_6->rx_err_cnt;

 if (VAR_6->tx_bus_off)
  VAR_5->can.state = VAR_0;

 else if ((VAR_5->bec.txerr > VAR_3) ||
   (VAR_5->bec.rxerr > VAR_3))
  VAR_5->can.state = VAR_1;

 else if ((VAR_5->bec.txerr > VAR_4) ||
   (VAR_5->bec.rxerr > VAR_4))
  VAR_5->can.state = VAR_2;
}
