
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


typedef int u32 ;
struct net_device {int dummy; } ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; } ;
struct TYPE_10__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct esd_usb2_net_priv {TYPE_7__* usb2; int index; TYPE_3__ can; } ;
struct TYPE_12__ {int baud; scalar_t__ rsvd; int net; } ;
struct TYPE_11__ {int len; int cmd; } ;
struct TYPE_13__ {TYPE_5__ setbaud; TYPE_4__ hdr; } ;
struct esd_usb2_msg {TYPE_6__ msg; } ;
struct TYPE_14__ {TYPE_2__* udev; } ;
struct TYPE_8__ {int idProduct; } ;
struct TYPE_9__ {TYPE_1__ descriptor; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,struct esd_usb2_msg*) ;
 int FUNC_2 (struct esd_usb2_msg*) ;
 struct esd_usb2_msg* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 struct esd_usb2_net_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_17)
{
 struct esd_usb2_net_priv *VAR_18 = FUNC_6(VAR_17);
 struct can_bittiming *VAR_19 = &VAR_18->can.bittiming;
 struct esd_usb2_msg *VAR_20;
 int VAR_21;
 u32 VAR_22;
 int VAR_23;

 VAR_22 = VAR_13;
 if (VAR_18->can.ctrlmode & VAR_1)
  VAR_22 |= VAR_6;

 VAR_22 |= (VAR_19->brp - 1) & (VAR_5 - 1);

 if (FUNC_4(VAR_18->usb2->udev->descriptor.idProduct) ==
     VAR_16)
  VAR_23 = VAR_14;
 else
  VAR_23 = VAR_8;

 VAR_22 |= ((VAR_19->sjw - 1) & (VAR_7 - 1))
  << VAR_23;
 VAR_22 |= ((VAR_19->prop_seg + VAR_19->phase_seg1 - 1)
     & (VAR_9 - 1))
  << VAR_10;
 VAR_22 |= ((VAR_19->phase_seg2 - 1) & (VAR_11 - 1))
  << VAR_12;
 if (VAR_18->can.ctrlmode & VAR_0)
  VAR_22 |= VAR_4;

 VAR_20 = FUNC_3(sizeof(*VAR_20), VAR_15);
 if (!VAR_20)
  return -VAR_3;

 VAR_20->msg.hdr.len = 2;
 VAR_20->msg.hdr.cmd = VAR_2;
 VAR_20->msg.setbaud.net = VAR_18->index;
 VAR_20->msg.setbaud.rsvd = 0;
 VAR_20->msg.setbaud.baud = FUNC_0(VAR_22);

 FUNC_5(VAR_17, "setting BTR=%#x\n", VAR_22);

 VAR_21 = FUNC_1(VAR_18->usb2, VAR_20);

 FUNC_2(VAR_20);
 return VAR_21;
}
