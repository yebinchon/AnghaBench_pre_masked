
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_descriptor {int dummy; } ;
struct usb_device {int descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device_descriptor*) ;
 struct usb_device_descriptor* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct usb_device_descriptor*,unsigned int) ;
 int FUNC_3 (struct usb_device*,int ,int ,struct usb_device_descriptor*,unsigned int) ;

int FUNC_4(struct usb_device *VAR_4, unsigned int VAR_5)
{
 struct usb_device_descriptor *VAR_6;
 int VAR_7;

 if (VAR_5 > sizeof(*VAR_6))
  return -VAR_0;
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_4, VAR_3, 0, VAR_6, VAR_5);
 if (VAR_7 >= 0)
  FUNC_2(&VAR_4->descriptor, VAR_6, VAR_5);
 FUNC_0(VAR_6);
 return VAR_7;
}
