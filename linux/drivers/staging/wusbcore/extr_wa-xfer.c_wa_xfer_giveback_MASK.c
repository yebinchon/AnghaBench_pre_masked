
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wa_xfer {TYPE_2__* wa; int result; int urb; int list_node; } ;
struct TYPE_4__ {TYPE_1__* wusb; int xfer_list_lock; } ;
struct TYPE_3__ {int usb_hcd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct wa_xfer*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct wa_xfer *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->wa->xfer_list_lock, VAR_1);
 FUNC_0(&VAR_0->list_node);
 FUNC_3(&(VAR_0->wa->wusb->usb_hcd), VAR_0->urb);
 FUNC_2(&VAR_0->wa->xfer_list_lock, VAR_1);

 FUNC_6(VAR_0->wa->wusb, VAR_0->urb, VAR_0->result);
 FUNC_4(VAR_0->wa);
 FUNC_5(VAR_0);
}
