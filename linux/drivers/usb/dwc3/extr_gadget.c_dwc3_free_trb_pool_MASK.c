
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_trb {int dummy; } ;
struct dwc3_ep {scalar_t__ trb_pool_dma; int * trb_pool; struct dwc3* dwc; } ;
struct dwc3 {int sysdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dwc3_ep *VAR_1)
{
 struct dwc3 *VAR_2 = VAR_1->dwc;

 FUNC_0(VAR_2->sysdev, sizeof(struct dwc3_trb) * VAR_0,
   VAR_1->trb_pool, VAR_1->trb_pool_dma);

 VAR_1->trb_pool = ((void*)0);
 VAR_1->trb_pool_dma = 0;
}
