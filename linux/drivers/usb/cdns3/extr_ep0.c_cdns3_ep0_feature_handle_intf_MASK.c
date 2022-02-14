
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_ctrlrequest {int wValue; } ;
struct cdns3_device {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct cdns3_device *VAR_1,
      struct usb_ctrlrequest *VAR_2,
      int VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2->wValue);

 switch (VAR_4) {
 case 128:
  break;
 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
