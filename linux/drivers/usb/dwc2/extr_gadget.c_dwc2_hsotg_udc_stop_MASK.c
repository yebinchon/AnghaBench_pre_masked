
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct TYPE_7__ {int speed; } ;
struct dwc2_hsotg {int num_of_eps; scalar_t__ dr_mode; TYPE_4__* uphy; int lock; scalar_t__ enabled; TYPE_3__ gadget; int * driver; TYPE_2__** eps_out; TYPE_1__** eps_in; } ;
struct TYPE_8__ {int otg; } ;
struct TYPE_6__ {int ep; } ;
struct TYPE_5__ {int ep; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct dwc2_hsotg* FUNC_6 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_3)
{
 struct dwc2_hsotg *VAR_4 = FUNC_6(VAR_3);
 unsigned long VAR_5 = 0;
 int VAR_6;

 if (!VAR_4)
  return -VAR_0;


 for (VAR_6 = 1; VAR_6 < VAR_4->num_of_eps; VAR_6++) {
  if (VAR_4->eps_in[VAR_6])
   FUNC_1(&VAR_4->eps_in[VAR_6]->ep);
  if (VAR_4->eps_out[VAR_6])
   FUNC_1(&VAR_4->eps_out[VAR_6]->ep);
 }

 FUNC_4(&VAR_4->lock, VAR_5);

 VAR_4->driver = ((void*)0);
 VAR_4->gadget.speed = VAR_2;
 VAR_4->enabled = 0;

 FUNC_5(&VAR_4->lock, VAR_5);

 if (!FUNC_0(VAR_4->uphy))
  FUNC_3(VAR_4->uphy->otg, ((void*)0));

 if (VAR_4->dr_mode == VAR_1)
  FUNC_2(VAR_4);

 return 0;
}
