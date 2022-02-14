
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


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int btr0; int btr1; } ;
struct TYPE_9__ {TYPE_2__ sja1000; } ;
struct TYPE_10__ {TYPE_3__ cc_params; } ;
struct TYPE_11__ {TYPE_4__ can_params; } ;
struct TYPE_12__ {TYPE_5__ msg; } ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; } ;
struct TYPE_7__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct ems_usb {TYPE_6__ active_params; TYPE_1__ can; } ;


 int VAR_0 ;
 int FUNC_0 (struct ems_usb*,TYPE_6__*) ;
 int FUNC_1 (struct net_device*,char*,int,int) ;
 struct ems_usb* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct ems_usb *VAR_2 = FUNC_2(VAR_1);
 struct can_bittiming *VAR_3 = &VAR_2->can.bittiming;
 u8 VAR_4, VAR_5;

 VAR_4 = ((VAR_3->brp - 1) & 0x3f) | (((VAR_3->sjw - 1) & 0x3) << 6);
 VAR_5 = ((VAR_3->prop_seg + VAR_3->phase_seg1 - 1) & 0xf) |
  (((VAR_3->phase_seg2 - 1) & 0x7) << 4);
 if (VAR_2->can.ctrlmode & VAR_0)
  VAR_5 |= 0x80;

 FUNC_1(VAR_1, "setting BTR0=0x%02x BTR1=0x%02x\n", VAR_4, VAR_5);

 VAR_2->active_params.msg.can_params.cc_params.sja1000.btr0 = VAR_4;
 VAR_2->active_params.msg.can_params.cc_params.sja1000.btr1 = VAR_5;

 return FUNC_0(VAR_2, &VAR_2->active_params);
}
