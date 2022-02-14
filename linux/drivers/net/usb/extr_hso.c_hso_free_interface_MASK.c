
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct rfkill {int dummy; } ;
struct hso_serial {TYPE_1__* parent; int port; } ;
struct TYPE_12__ {int net; struct rfkill* rfkill; } ;
struct TYPE_11__ {int async_get_intf; int async_put_intf; struct usb_interface* interface; } ;
struct TYPE_10__ {int ref; int async_get_intf; int async_put_intf; struct usb_interface* interface; } ;
struct TYPE_9__ {int usb_gone; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;
 struct hso_serial* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (struct hso_serial*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 TYPE_3__** VAR_3 ;
 int FUNC_10 (struct rfkill*) ;
 int FUNC_11 (struct rfkill*) ;
 TYPE_2__** VAR_4 ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static void FUNC_14(struct usb_interface *VAR_5)
{
 struct hso_serial *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_4[VAR_7] &&
      (VAR_4[VAR_7]->interface == VAR_5)) {
   VAR_6 = FUNC_2(VAR_4[VAR_7]);
   FUNC_13(&VAR_6->port, 0);
   FUNC_7(&VAR_6->parent->mutex);
   VAR_6->parent->usb_gone = 1;
   FUNC_8(&VAR_6->parent->mutex);
   FUNC_0(&VAR_4[VAR_7]->async_put_intf);
   FUNC_0(&VAR_4[VAR_7]->async_get_intf);
   FUNC_4(VAR_6);
   FUNC_6(&VAR_4[VAR_7]->ref, VAR_2);
   FUNC_12(VAR_7, ((void*)0));
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_3[VAR_7] &&
      (VAR_3[VAR_7]->interface == VAR_5)) {
   struct rfkill *VAR_8 = FUNC_1(VAR_3[VAR_7])->rfkill;


   FUNC_9(FUNC_1(VAR_3[VAR_7])->net);
   FUNC_5(VAR_3[VAR_7]);
   FUNC_0(&VAR_3[VAR_7]->async_put_intf);
   FUNC_0(&VAR_3[VAR_7]->async_get_intf);
   if (VAR_8) {
    FUNC_11(VAR_8);
    FUNC_10(VAR_8);
   }
   FUNC_3(VAR_3[VAR_7]);
  }
 }
}
