
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_request {int request; int status; } ;
struct dwc3_ep {int endpoint; struct dwc3* dwc; } ;
struct dwc3 {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc3_ep*,struct dwc3_request*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct dwc3_ep *VAR_1, struct dwc3_request *VAR_2,
  int VAR_3)
{
 struct dwc3 *VAR_4 = VAR_1->dwc;

 FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_2->status = VAR_0;

 FUNC_2(&VAR_4->lock);
 FUNC_3(&VAR_1->endpoint, &VAR_2->request);
 FUNC_1(&VAR_4->lock);
}
