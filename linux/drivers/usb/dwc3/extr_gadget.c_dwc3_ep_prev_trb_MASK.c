
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dwc3_trb {int dummy; } ;
struct dwc3_ep {struct dwc3_trb* trb_pool; } ;


 int VAR_0 ;

__attribute__((used)) static struct dwc3_trb *FUNC_0(struct dwc3_ep *VAR_1, u8 VAR_2)
{
 u8 VAR_3 = VAR_2;

 if (!VAR_3)
  VAR_3 = VAR_0 - 1;

 return &VAR_1->trb_pool[VAR_3 - 1];
}
