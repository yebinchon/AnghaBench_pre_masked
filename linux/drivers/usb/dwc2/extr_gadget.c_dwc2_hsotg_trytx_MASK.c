
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ actual; scalar_t__ length; } ;
struct dwc2_hsotg_req {TYPE_1__ req; } ;
struct dwc2_hsotg_ep {scalar_t__ index; int dir_in; struct dwc2_hsotg_req* req; } ;
struct dwc2_hsotg {int dev; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct dwc2_hsotg*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*,struct dwc2_hsotg_req*) ;

__attribute__((used)) static int FUNC_3(struct dwc2_hsotg *VAR_0,
       struct dwc2_hsotg_ep *VAR_1)
{
 struct dwc2_hsotg_req *VAR_2 = VAR_1->req;

 if (!VAR_1->dir_in || !VAR_2) {




  if (VAR_1->index != 0)
   FUNC_1(VAR_0, VAR_1->index,
           VAR_1->dir_in, 0);
  return 0;
 }

 if (VAR_2->req.actual < VAR_2->req.length) {
  FUNC_0(VAR_0->dev, "trying to write more for ep%d\n",
   VAR_1->index);
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 }

 return 0;
}
