
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequest; } ;
struct cdns3_device {int dummy; } ;
 int FUNC_0 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_1 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_2 (struct cdns3_device*,struct usb_ctrlrequest*,int) ;
 int FUNC_3 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_4 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_5 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_6 (struct cdns3_device*,struct usb_ctrlrequest*) ;

__attribute__((used)) static int FUNC_7(struct cdns3_device *VAR_0,
          struct usb_ctrlrequest *VAR_1)
{
 int VAR_2;

 switch (VAR_1->bRequest) {
 case 132:
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  break;
 case 131:
  VAR_2 = FUNC_4(VAR_0, VAR_1);
  break;
 case 133:
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  break;
 case 134:
  VAR_2 = FUNC_2(VAR_0, VAR_1, 0);
  break;
 case 130:
  VAR_2 = FUNC_2(VAR_0, VAR_1, 1);
  break;
 case 128:
  VAR_2 = FUNC_6(VAR_0, VAR_1);
  break;
 case 129:
  VAR_2 = FUNC_5(VAR_0, VAR_1);
  break;
 default:
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  break;
 }

 return VAR_2;
}
