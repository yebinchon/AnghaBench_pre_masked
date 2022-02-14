
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int status; int (* complete ) (int *,struct usb_request*) ;scalar_t__ actual; } ;
struct bcm63xx_udc {int lock; TYPE_1__* bep; } ;
struct TYPE_2__ {int ep; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct usb_request*) ;

__attribute__((used)) static void FUNC_3(struct bcm63xx_udc *VAR_0,
 struct usb_request *VAR_1, int VAR_2)
{
 VAR_1->status = VAR_2;
 if (VAR_2)
  VAR_1->actual = 0;
 if (VAR_1->complete) {
  FUNC_1(&VAR_0->lock);
  VAR_1->complete(&VAR_0->bep[0].ep, VAR_1);
  FUNC_0(&VAR_0->lock);
 }
}
