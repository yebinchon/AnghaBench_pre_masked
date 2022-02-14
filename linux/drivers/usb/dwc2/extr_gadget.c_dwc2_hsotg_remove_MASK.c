
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_hsotg {int ctrl_req; TYPE_1__** eps_out; int gadget; } ;
struct TYPE_2__ {int ep; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dwc2_hsotg *VAR_0)
{
 FUNC_1(&VAR_0->gadget);
 FUNC_0(&VAR_0->eps_out[0]->ep, VAR_0->ctrl_req);

 return 0;
}
