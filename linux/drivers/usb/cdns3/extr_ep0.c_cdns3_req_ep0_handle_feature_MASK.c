
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_ctrlrequest {int bRequestType; } ;
struct cdns3_device {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct cdns3_device*,struct usb_ctrlrequest*,int) ;
 int FUNC_1 (struct cdns3_device*,struct usb_ctrlrequest*,int) ;
 int FUNC_2 (struct cdns3_device*,struct usb_ctrlrequest*,int) ;

__attribute__((used)) static int FUNC_3(struct cdns3_device *VAR_2,
     struct usb_ctrlrequest *VAR_3,
     int VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = VAR_3->bRequestType & VAR_1;

 switch (VAR_6) {
 case 130:
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
  break;
 default:
  return -VAR_0;
 }

 return VAR_5;
}
