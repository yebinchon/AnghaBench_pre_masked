
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg_req {int dummy; } ;
struct dwc2_hsotg_ep {unsigned int fifo_size; int fifo_index; int queue; int * req; } ;
struct dwc2_hsotg {int dedicated_fifos; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*,struct dwc2_hsotg_req*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,int ) ;
 struct dwc2_hsotg_req* FUNC_4 (struct dwc2_hsotg_ep*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_0,
         struct dwc2_hsotg_ep *VAR_1,
         int VAR_2)
{
 unsigned int VAR_3;

 VAR_1->req = ((void*)0);

 while (!FUNC_5(&VAR_1->queue)) {
  struct dwc2_hsotg_req *VAR_4 = FUNC_4(VAR_1);

  FUNC_1(VAR_0, VAR_1, VAR_4, VAR_2);
 }

 if (!VAR_0->dedicated_fifos)
  return;
 VAR_3 = (FUNC_3(VAR_0, FUNC_0(VAR_1->fifo_index)) & 0xffff) * 4;
 if (VAR_3 < VAR_1->fifo_size)
  FUNC_2(VAR_0, VAR_1->fifo_index);
}
