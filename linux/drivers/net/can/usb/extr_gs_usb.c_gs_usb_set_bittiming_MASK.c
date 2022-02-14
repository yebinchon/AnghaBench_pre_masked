
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct gs_device_bittiming {int brp; int sjw; int phase_seg2; int phase_seg1; int prop_seg; } ;
struct can_bittiming {int brp; int sjw; int phase_seg2; int phase_seg1; int prop_seg; } ;
struct TYPE_3__ {struct can_bittiming bittiming; } ;
struct gs_can {int channel; struct usb_interface* iface; TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct gs_device_bittiming*) ;
 struct gs_device_bittiming* FUNC_3 (int,int ) ;
 struct gs_can* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int,int ,int ,struct gs_device_bittiming*,int,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6)
{
 struct gs_can *VAR_7 = FUNC_4(VAR_6);
 struct can_bittiming *VAR_8 = &VAR_7->can.bittiming;
 struct usb_interface *VAR_9 = VAR_7->iface;
 int VAR_10;
 struct gs_device_bittiming *VAR_11;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->prop_seg = VAR_8->prop_seg;
 VAR_11->phase_seg1 = VAR_8->phase_seg1;
 VAR_11->phase_seg2 = VAR_8->phase_seg2;
 VAR_11->sjw = VAR_8->sjw;
 VAR_11->brp = VAR_8->brp;


 VAR_10 = FUNC_5(FUNC_1(VAR_9),
        FUNC_6(FUNC_1(VAR_9), 0),
        VAR_2,
        VAR_3 | VAR_5 | VAR_4,
        VAR_7->channel,
        0,
        VAR_11,
        sizeof(*VAR_11),
        1000);

 FUNC_2(VAR_11);

 if (VAR_10 < 0)
  FUNC_0(VAR_6->dev.parent, "Couldn't set bittimings (err=%d)",
   VAR_10);

 return (VAR_10 > 0) ? 0 : VAR_10;
}
