
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ctrlmode; } ;
struct peak_usb_device {int netdev; TYPE_1__ can; } ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct peak_usb_device*,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct peak_usb_device *VAR_2,
      struct can_bittiming *VAR_3)
{
 u8 VAR_4[VAR_1];
 u8 VAR_5, VAR_6;

 VAR_5 = ((VAR_3->brp - 1) & 0x3f) | (((VAR_3->sjw - 1) & 0x3) << 6);
 VAR_6 = ((VAR_3->prop_seg + VAR_3->phase_seg1 - 1) & 0xf) |
  (((VAR_3->phase_seg2 - 1) & 0x7) << 4);
 if (VAR_2->can.ctrlmode & VAR_0)
  VAR_6 |= 0x80;

 FUNC_0(VAR_2->netdev, "setting BTR0=0x%02x BTR1=0x%02x\n",
  VAR_5, VAR_6);

 VAR_4[0] = VAR_6;
 VAR_4[1] = VAR_5;

 return FUNC_1(VAR_2, 1, 2, VAR_4);
}
