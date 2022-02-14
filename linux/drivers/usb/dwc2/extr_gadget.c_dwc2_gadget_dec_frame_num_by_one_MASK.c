
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg_ep {scalar_t__ target_frame; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct dwc2_hsotg_ep *VAR_1)
{
 if (VAR_1->target_frame)
  VAR_1->target_frame -= 1;
 else
  VAR_1->target_frame = VAR_0;
}
