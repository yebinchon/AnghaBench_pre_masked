
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ qlen; } ;
struct usbnet {int net; TYPE_1__ txq; int flags; int suspend_count; } ;
struct usb_interface {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct usbnet* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usbnet*) ;

int FUNC_9 (struct usb_interface *VAR_2, pm_message_t VAR_3)
{
 struct usbnet *VAR_4 = FUNC_7(VAR_2);

 if (!VAR_4->suspend_count++) {
  FUNC_5(&VAR_4->txq.lock);

  if (VAR_4->txq.qlen && FUNC_0(VAR_3)) {
   VAR_4->suspend_count--;
   FUNC_6(&VAR_4->txq.lock);
   return -VAR_0;
  } else {
   FUNC_4(VAR_1, &VAR_4->flags);
   FUNC_6(&VAR_4->txq.lock);
  }




  FUNC_3 (VAR_4->net);
  FUNC_8(VAR_4);
  FUNC_1(VAR_4);





  FUNC_2 (VAR_4->net);
 }
 return 0;
}
