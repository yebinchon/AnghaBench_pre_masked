
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pucan_timing_slow {int ewl; int brp; int tseg1; int tseg2; int sjw_t; int opcode_channel; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct peak_usb_device {TYPE_1__ can; int ctrl_idx; } ;
struct can_bittiming {scalar_t__ brp; scalar_t__ phase_seg1; scalar_t__ prop_seg; scalar_t__ phase_seg2; scalar_t__ sjw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 struct pucan_timing_slow* FUNC_5 (struct peak_usb_device*) ;
 int FUNC_6 (struct peak_usb_device*,struct pucan_timing_slow*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct peak_usb_device *VAR_2,
       struct can_bittiming *VAR_3)
{
 struct pucan_timing_slow *VAR_4 = FUNC_5(VAR_2);

 VAR_4->opcode_channel = FUNC_7(VAR_2->ctrl_idx,
             VAR_1);
 VAR_4->sjw_t = FUNC_1(VAR_3->sjw - 1,
    VAR_2->can.ctrlmode & VAR_0);

 VAR_4->tseg2 = FUNC_3(VAR_3->phase_seg2 - 1);
 VAR_4->tseg1 = FUNC_2(VAR_3->prop_seg + VAR_3->phase_seg1 - 1);
 VAR_4->brp = FUNC_4(FUNC_0(VAR_3->brp - 1));

 VAR_4->ewl = 96;


 return FUNC_6(VAR_2, ++VAR_4);
}
