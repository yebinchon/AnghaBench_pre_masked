
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct iguanair {int dma_out; int packet; int udev; int dma_in; int buf_in; int urb_out; int urb_in; int rc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iguanair*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct iguanair* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_2)
{
 struct iguanair *VAR_3 = FUNC_4(VAR_2);

 FUNC_1(VAR_3->rc);
 FUNC_6(VAR_2, ((void*)0));
 FUNC_5(VAR_3->urb_in);
 FUNC_5(VAR_3->urb_out);
 FUNC_3(VAR_3->urb_in);
 FUNC_3(VAR_3->urb_out);
 FUNC_2(VAR_3->udev, VAR_0, VAR_3->buf_in, VAR_3->dma_in);
 FUNC_2(VAR_3->udev, VAR_1, VAR_3->packet, VAR_3->dma_out);
 FUNC_0(VAR_3);
}
