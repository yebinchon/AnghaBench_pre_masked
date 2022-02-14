
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int type_iso; int type_bulk; int type_int; } ;
struct TYPE_8__ {int max_streams; TYPE_3__ caps; int ep_list; int * ops; } ;
struct dwc3_ep {int number; TYPE_4__ endpoint; struct dwc3* dwc; } ;
struct TYPE_6__ {int ep_list; } ;
struct TYPE_5__ {int hwparams0; } ;
struct dwc3 {TYPE_2__ gadget; int regs; TYPE_1__ hwparams; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dwc3_ep*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (struct dwc3*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_9(struct dwc3_ep *VAR_1)
{
 struct dwc3 *VAR_2 = VAR_1->dwc;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_2->hwparams.hwparams0);

 VAR_3 /= 8;

 VAR_5 = FUNC_6(VAR_2->regs, FUNC_1(VAR_1->number >> 1));
 if (FUNC_5(VAR_2))
  VAR_5 = FUNC_0(VAR_5);
 else
  VAR_5 = FUNC_2(VAR_5);


 VAR_5 *= VAR_3;

 VAR_4 = VAR_5 / 1024;
 if (VAR_4 == 0)
  VAR_4 = 1;






 VAR_5 -= VAR_3 * (VAR_4 + 1);
 VAR_5 /= VAR_4;

 FUNC_8(&VAR_1->endpoint, VAR_5);

 VAR_1->endpoint.max_streams = 15;
 VAR_1->endpoint.ops = &VAR_0;
 FUNC_7(&VAR_1->endpoint.ep_list,
   &VAR_2->gadget.ep_list);
 VAR_1->endpoint.caps.type_iso = 1;
 VAR_1->endpoint.caps.type_bulk = 1;
 VAR_1->endpoint.caps.type_int = 1;

 return FUNC_4(VAR_1);
}
