
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_trb {int dummy; } ;
struct dwc3_ep {int name; struct dwc3* dwc; scalar_t__ trb_pool; int trb_pool_dma; } ;
struct dwc3 {int dev; int sysdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct dwc3_ep *VAR_3)
{
 struct dwc3 *VAR_4 = VAR_3->dwc;

 if (VAR_3->trb_pool)
  return 0;

 VAR_3->trb_pool = FUNC_1(VAR_4->sysdev,
   sizeof(struct dwc3_trb) * VAR_0,
   &VAR_3->trb_pool_dma, VAR_2);
 if (!VAR_3->trb_pool) {
  FUNC_0(VAR_3->dwc->dev, "failed to allocate trb pool for %s\n",
    VAR_3->name);
  return -VAR_1;
 }

 return 0;
}
