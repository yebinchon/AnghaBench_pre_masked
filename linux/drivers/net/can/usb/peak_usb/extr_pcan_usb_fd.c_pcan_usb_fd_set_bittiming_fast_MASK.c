
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pucan_timing_fast {int brp; int tseg1; int tseg2; int sjw; int opcode_channel; } ;
struct peak_usb_device {int ctrl_idx; } ;
struct can_bittiming {scalar_t__ brp; scalar_t__ phase_seg1; scalar_t__ prop_seg; scalar_t__ phase_seg2; scalar_t__ sjw; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 struct pucan_timing_fast* FUNC_5 (struct peak_usb_device*) ;
 int FUNC_6 (struct peak_usb_device*,struct pucan_timing_fast*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct peak_usb_device *VAR_1,
       struct can_bittiming *VAR_2)
{
 struct pucan_timing_fast *VAR_3 = FUNC_5(VAR_1);

 VAR_3->opcode_channel = FUNC_7(VAR_1->ctrl_idx,
             VAR_0);
 VAR_3->sjw = FUNC_1(VAR_2->sjw - 1);
 VAR_3->tseg2 = FUNC_3(VAR_2->phase_seg2 - 1);
 VAR_3->tseg1 = FUNC_2(VAR_2->prop_seg + VAR_2->phase_seg1 - 1);
 VAR_3->brp = FUNC_4(FUNC_0(VAR_2->brp - 1));


 return FUNC_6(VAR_1, ++VAR_3);
}
