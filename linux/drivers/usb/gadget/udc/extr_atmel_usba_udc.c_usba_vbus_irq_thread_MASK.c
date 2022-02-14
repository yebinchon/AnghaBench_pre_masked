
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usba_udc {int vbus_prev; int suspended; int vbus_mutex; int gadget; TYPE_1__* driver; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* disconnect ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct usba_udc*) ;
 int FUNC_5 (struct usba_udc*) ;
 int FUNC_6 (struct usba_udc*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct usba_udc *VAR_3 = VAR_2;
 int VAR_4;


 FUNC_3(10);

 FUNC_0(&VAR_3->vbus_mutex);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 != VAR_3->vbus_prev) {
  if (VAR_4) {
   FUNC_4(VAR_3);
  } else {
   VAR_3->suspended = 0;
   FUNC_5(VAR_3);

   if (VAR_3->driver->disconnect)
    VAR_3->driver->disconnect(&VAR_3->gadget);
  }
  VAR_3->vbus_prev = VAR_4;
 }

 FUNC_1(&VAR_3->vbus_mutex);
 return VAR_0;
}
