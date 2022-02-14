
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct ipheth_device {int net; int ctrl_buf; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipheth_device*) ;
 int FUNC_3 (struct ipheth_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct ipheth_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct ipheth_device *VAR_1;

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1 != ((void*)0)) {
  FUNC_5(VAR_1->net);
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
  FUNC_4(VAR_1->ctrl_buf);
  FUNC_1(VAR_1->net);
 }
 FUNC_7(VAR_0, ((void*)0));
 FUNC_0(&VAR_0->dev, "Apple iPhone USB Ethernet now disconnected\n");
}
