
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct dwc2_hsotg_ep {int dummy; } ;
struct dwc2_hsotg {struct dwc2_hsotg_ep** eps_out; struct dwc2_hsotg_ep** eps_in; } ;



__attribute__((used)) static inline struct dwc2_hsotg_ep *FUNC_0(struct dwc2_hsotg *VAR_0,
      u32 VAR_1, u32 VAR_2)
{
 if (VAR_2)
  return VAR_0->eps_in[VAR_1];
 else
  return VAR_0->eps_out[VAR_1];
}
