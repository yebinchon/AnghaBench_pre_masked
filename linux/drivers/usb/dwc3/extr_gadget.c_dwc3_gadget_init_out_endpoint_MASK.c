
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type_iso; int type_bulk; int type_int; } ;
struct TYPE_6__ {int max_streams; TYPE_2__ caps; int ep_list; int * ops; } ;
struct dwc3_ep {TYPE_3__ endpoint; struct dwc3* dwc; } ;
struct TYPE_4__ {int ep_list; } ;
struct dwc3 {TYPE_1__ gadget; } ;


 int FUNC_0 (struct dwc3_ep*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3(struct dwc3_ep *VAR_1)
{
 struct dwc3 *VAR_2 = VAR_1->dwc;

 FUNC_2(&VAR_1->endpoint, 1024);
 VAR_1->endpoint.max_streams = 15;
 VAR_1->endpoint.ops = &VAR_0;
 FUNC_1(&VAR_1->endpoint.ep_list,
   &VAR_2->gadget.ep_list);
 VAR_1->endpoint.caps.type_iso = 1;
 VAR_1->endpoint.caps.type_bulk = 1;
 VAR_1->endpoint.caps.type_int = 1;

 return FUNC_0(VAR_1);
}
