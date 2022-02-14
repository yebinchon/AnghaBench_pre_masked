
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dwc2_hsotg_ep {scalar_t__ target_frame; int frame_overrun; struct dwc2_hsotg* parent; } ;
struct dwc2_hsotg {scalar_t__ frame_number; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct dwc2_hsotg_ep *VAR_1)
{
 struct dwc2_hsotg *VAR_2 = VAR_1->parent;
 u32 VAR_3 = VAR_1->target_frame;
 u32 VAR_4 = VAR_2->frame_number;
 bool VAR_5 = VAR_1->frame_overrun;

 if (!VAR_5 && VAR_4 >= VAR_3)
  return 1;

 if (VAR_5 && VAR_4 >= VAR_3 &&
     ((VAR_4 - VAR_3) < VAR_0 / 2))
  return 1;

 return 0;
}
