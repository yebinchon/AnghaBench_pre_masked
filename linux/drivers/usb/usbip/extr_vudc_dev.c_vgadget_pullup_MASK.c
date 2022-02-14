
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int dev; int speed; } ;
struct vudc {int pullup; int lock; int ud; scalar_t__ desc_cached; TYPE_4__ gadget; TYPE_3__* ep; TYPE_1__* driver; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_6__ {int maxpacket; } ;
struct TYPE_7__ {TYPE_2__ ep; } ;
struct TYPE_5__ {int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct vudc*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;
 struct vudc* FUNC_5 (struct usb_gadget*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct usb_gadget *VAR_3, int VAR_4)
{
 struct vudc *VAR_5 = FUNC_5(VAR_3);
 unsigned long VAR_6;
 int VAR_7;


 FUNC_3(&VAR_5->lock, VAR_6);
 VAR_4 = !!VAR_4;
 if (VAR_4 == VAR_5->pullup)
  goto unlock;

 VAR_5->pullup = VAR_4;
 if (VAR_4) {
  VAR_5->gadget.speed = FUNC_2(VAR_2, VAR_0,
        VAR_5->driver->max_speed);
  VAR_5->ep[0].ep.maxpacket = 64;




  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7) {
   FUNC_0(&VAR_5->gadget.dev, "Unable go get desc: %d", VAR_7);
   goto unlock;
  }

  FUNC_4(&VAR_5->lock, VAR_6);
  FUNC_7(&VAR_5->ud);
 } else {

  VAR_5->desc_cached = 0;

  FUNC_4(&VAR_5->lock, VAR_6);
  FUNC_6(&VAR_5->ud, VAR_1);
  FUNC_8(&VAR_5->ud);
 }

 return 0;

unlock:
 FUNC_4(&VAR_5->lock, VAR_6);
 return 0;
}
