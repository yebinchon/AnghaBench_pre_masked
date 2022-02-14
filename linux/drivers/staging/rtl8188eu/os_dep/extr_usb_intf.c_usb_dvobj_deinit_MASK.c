
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct dvobj_priv {int NumInterfaces; int InterfaceNumber; int usb_vendor_req_mutex; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct dvobj_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 struct dvobj_priv* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct dvobj_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_7(VAR_1, ((void*)0));
 if (VAR_2) {

  if ((VAR_2->NumInterfaces != 2 &&
      VAR_2->NumInterfaces != 3) ||
      (VAR_2->InterfaceNumber == 1)) {
   if (FUNC_0(VAR_1)->state !=
       VAR_0) {





    FUNC_3("usb attached..., try to reset usb device\n");
    FUNC_6(FUNC_0(VAR_1));
   }
  }

  FUNC_2(&VAR_2->usb_vendor_req_mutex);
  FUNC_1(VAR_2);
 }

 FUNC_5(FUNC_0(VAR_1));
}
