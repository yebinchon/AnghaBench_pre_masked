
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct pn533_usb_phy {int ack_buffer; TYPE_1__* ack_urb; TYPE_1__* out_urb; TYPE_1__* in_urb; int priv; } ;
struct TYPE_3__ {int transfer_buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct pn533_usb_phy* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct pn533_usb_phy *VAR_1 = FUNC_4(VAR_0);

 if (!VAR_1)
  return;

 FUNC_2(VAR_1->priv);

 FUNC_6(VAR_0, ((void*)0));

 FUNC_5(VAR_1->in_urb);
 FUNC_5(VAR_1->out_urb);
 FUNC_5(VAR_1->ack_urb);

 FUNC_0(VAR_1->in_urb->transfer_buffer);
 FUNC_3(VAR_1->in_urb);
 FUNC_3(VAR_1->out_urb);
 FUNC_3(VAR_1->ack_urb);
 FUNC_0(VAR_1->ack_buffer);

 FUNC_1(&VAR_0->dev, "NXP PN533 NFC device disconnected\n");
}
