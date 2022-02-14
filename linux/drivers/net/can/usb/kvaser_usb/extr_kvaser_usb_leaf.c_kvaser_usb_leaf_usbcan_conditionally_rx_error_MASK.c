
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ txerr; scalar_t__ rxerr; } ;
struct kvaser_usb_net_priv {TYPE_2__ bec; } ;
struct TYPE_6__ {int other_ch_status; int error_state; } ;
struct kvaser_usb_err_summary {unsigned int channel; scalar_t__ txerr; scalar_t__ rxerr; int status; TYPE_3__ usbcan; } ;
struct kvaser_usb {unsigned int nchannels; struct kvaser_usb_net_priv** nets; TYPE_1__* intf; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (struct kvaser_usb const*,struct kvaser_usb_err_summary*) ;

__attribute__((used)) static void
FUNC_2(const struct kvaser_usb *VAR_4,
           struct kvaser_usb_err_summary *VAR_5)
{
 struct kvaser_usb_net_priv *VAR_6;
 unsigned int VAR_7;
 bool VAR_8;

 VAR_7 = VAR_5->channel;
 if (VAR_7 >= VAR_4->nchannels) {
  FUNC_0(&VAR_4->intf->dev,
   "Invalid channel number (%d)\n", VAR_7);
  return;
 }

 VAR_6 = VAR_4->nets[VAR_7];
 VAR_8 = 0;

 if (VAR_5->txerr != VAR_6->bec.txerr) {
  VAR_5->usbcan.error_state |= VAR_3;
  VAR_8 = 1;
 }
 if (VAR_5->rxerr != VAR_6->bec.rxerr) {
  VAR_5->usbcan.error_state |= VAR_2;
  VAR_8 = 1;
 }
 if ((VAR_5->status & VAR_0) &&
     !(VAR_5->usbcan.other_ch_status & VAR_0)) {
  VAR_5->usbcan.error_state |= VAR_1;
  VAR_8 = 1;
 }

 if (VAR_8)
  FUNC_1(VAR_4, VAR_5);
}
