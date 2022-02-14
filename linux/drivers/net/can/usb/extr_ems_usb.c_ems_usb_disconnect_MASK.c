
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ems_usb {int tx_msg_buffer; int intr_in_buffer; int intr_urb; int netdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ems_usb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct ems_usb* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct ems_usb *VAR_1 = FUNC_5(VAR_0);

 FUNC_6(VAR_0, ((void*)0));

 if (VAR_1) {
  FUNC_3(VAR_1->netdev);
  FUNC_0(VAR_1->netdev);

  FUNC_2(VAR_1);

  FUNC_4(VAR_1->intr_urb);

  FUNC_1(VAR_1->intr_in_buffer);
  FUNC_1(VAR_1->tx_msg_buffer);
 }
}
