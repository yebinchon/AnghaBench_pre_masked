
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type_control; } ;
struct TYPE_6__ {int maxburst; TYPE_2__ caps; int * ops; } ;
struct dwc3_ep {TYPE_3__ endpoint; int direction; struct dwc3* dwc; } ;
struct TYPE_4__ {TYPE_3__* ep0; } ;
struct dwc3 {TYPE_1__ gadget; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1(struct dwc3_ep *VAR_1)
{
 struct dwc3 *VAR_2 = VAR_1->dwc;

 FUNC_0(&VAR_1->endpoint, 512);
 VAR_1->endpoint.maxburst = 1;
 VAR_1->endpoint.ops = &VAR_0;
 if (!VAR_1->direction)
  VAR_2->gadget.ep0 = &VAR_1->endpoint;

 VAR_1->endpoint.caps.type_control = 1;

 return 0;
}
