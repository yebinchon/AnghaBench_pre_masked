
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrlmode; } ;
struct peak_usb_device {int netdev; TYPE_1__ can; } ;
struct can_bittiming {int sjw; int phase_seg2; int prop_seg; int phase_seg1; int brp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct peak_usb_device*,int) ;

__attribute__((used)) static int FUNC_2(struct peak_usb_device *VAR_1,
          struct can_bittiming *VAR_2)
{
 u32 VAR_3;

 VAR_3 = (VAR_1->can.ctrlmode & VAR_0) ? 0x00800000 : 0;
 VAR_3 |= (VAR_2->sjw - 1) << 24;
 VAR_3 |= (VAR_2->phase_seg2 - 1) << 20;
 VAR_3 |= (VAR_2->prop_seg + VAR_2->phase_seg1 - 1) << 16;
 VAR_3 |= VAR_2->brp - 1;

 FUNC_0(VAR_1->netdev, "setting ccbt=0x%08x\n", VAR_3);

 return FUNC_1(VAR_1, VAR_3);
}
