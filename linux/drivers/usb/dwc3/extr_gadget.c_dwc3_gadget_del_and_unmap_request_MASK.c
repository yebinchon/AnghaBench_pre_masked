
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct dwc3_request {int needs_extra_trb; int * trb; int direction; TYPE_1__ request; scalar_t__ remaining; int list; } ;
struct dwc3_ep {int number; struct dwc3* dwc; } ;
struct dwc3 {int dev; int sysdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dwc3_request*) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct dwc3_ep *VAR_1,
  struct dwc3_request *VAR_2, int VAR_3)
{
 struct dwc3 *VAR_4 = VAR_1->dwc;

 FUNC_0(&VAR_2->list);
 VAR_2->remaining = 0;
 VAR_2->needs_extra_trb = 0;

 if (VAR_2->request.status == -VAR_0)
  VAR_2->request.status = VAR_3;

 if (VAR_2->trb)
  FUNC_3(VAR_4->sysdev,
    &VAR_2->request, VAR_2->direction);

 VAR_2->trb = ((void*)0);
 FUNC_2(VAR_2);

 if (VAR_1->number > 1)
  FUNC_1(VAR_4->dev);
}
