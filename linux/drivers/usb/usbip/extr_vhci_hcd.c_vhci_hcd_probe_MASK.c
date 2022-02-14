
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci {int * vhci_hcd_ss; int * vhci_hcd_hs; } ;
struct usb_hcd {int has_tt; } ;
struct platform_device {int dev; int id; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct usb_hcd*,int ,int ) ;
 struct usb_hcd* FUNC_4 (int *,int *,int ) ;
 struct usb_hcd* FUNC_5 (int *,int *,int ,struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;
 int FUNC_8 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct vhci *VAR_3 = *((void **)FUNC_0(&VAR_2->dev));
 struct usb_hcd *VAR_4;
 struct usb_hcd *VAR_5;
 int VAR_6;

 FUNC_8("name %s id %d\n", VAR_2->name, VAR_2->id);





 VAR_4 = FUNC_4(&VAR_1, &VAR_2->dev, FUNC_1(&VAR_2->dev));
 if (!VAR_4) {
  FUNC_2("create primary hcd failed\n");
  return -VAR_0;
 }
 VAR_4->has_tt = 1;





 VAR_6 = FUNC_3(VAR_4, 0, 0);
 if (VAR_6 != 0) {
  FUNC_2("usb_add_hcd hs failed %d\n", VAR_6);
  goto put_usb2_hcd;
 }

 VAR_5 = FUNC_5(&VAR_1, &VAR_2->dev,
           FUNC_1(&VAR_2->dev), VAR_4);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  FUNC_2("create shared hcd failed\n");
  goto remove_usb2_hcd;
 }

 VAR_6 = FUNC_3(VAR_5, 0, 0);
 if (VAR_6) {
  FUNC_2("usb_add_hcd ss failed %d\n", VAR_6);
  goto put_usb3_hcd;
 }

 FUNC_8("bye\n");
 return 0;

put_usb3_hcd:
 FUNC_6(VAR_5);
remove_usb2_hcd:
 FUNC_7(VAR_4);
put_usb2_hcd:
 FUNC_6(VAR_4);
 VAR_3->vhci_hcd_hs = ((void*)0);
 VAR_3->vhci_hcd_ss = ((void*)0);
 return VAR_6;
}
