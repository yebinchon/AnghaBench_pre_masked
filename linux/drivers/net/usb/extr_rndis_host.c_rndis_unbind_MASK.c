
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct usb_interface {int dummy; } ;
struct rndis_halt {void* msg_len; void* msg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct rndis_halt*) ;
 struct rndis_halt* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct usbnet*,void*,int ) ;
 int FUNC_4 (struct usbnet*,struct usb_interface*) ;

void FUNC_5(struct usbnet *VAR_3, struct usb_interface *VAR_4)
{
 struct rndis_halt *VAR_5;


 VAR_5 = FUNC_2(VAR_0, VAR_1);
 if (VAR_5) {
  VAR_5->msg_type = FUNC_0(VAR_2);
  VAR_5->msg_len = FUNC_0(sizeof *VAR_5);
  (void) FUNC_3(VAR_3, (void *)VAR_5, VAR_0);
  FUNC_1(VAR_5);
 }

 FUNC_4(VAR_3, VAR_4);
}
