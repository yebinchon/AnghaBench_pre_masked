
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg_ep {int frame_overrun; int target_frame; scalar_t__ interval; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct dwc2_hsotg_ep *VAR_1)
{
 VAR_1->target_frame += VAR_1->interval;
 if (VAR_1->target_frame > VAR_0) {
  VAR_1->frame_overrun = 1;
  VAR_1->target_frame &= VAR_0;
 } else {
  VAR_1->frame_overrun = 0;
 }
}
