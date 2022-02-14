
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct TYPE_6__ {int otg; } ;
struct TYPE_5__ {int * dc_clk; int * driver; int lock; TYPE_4__* transceiver; int gadget; } ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct usb_gadget *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_0->dc_clk != ((void*)0))
  FUNC_2(1);

 if (FUNC_1())
  FUNC_3(&VAR_0->gadget, 0);

 if (!FUNC_0(VAR_0->transceiver))
  (void) FUNC_4(VAR_0->transceiver->otg, ((void*)0));
 else
  FUNC_5(VAR_0);

 FUNC_6(&VAR_0->lock, VAR_2);
 FUNC_8(VAR_0);
 FUNC_7(&VAR_0->lock, VAR_2);

 VAR_0->driver = ((void*)0);

 if (VAR_0->dc_clk != ((void*)0))
  FUNC_2(0);

 return 0;
}
