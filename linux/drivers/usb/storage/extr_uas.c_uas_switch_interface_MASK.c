
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int bAlternateSetting; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 struct usb_host_interface* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_1,
    struct usb_interface *VAR_2)
{
 struct usb_host_interface *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_3->desc.bInterfaceNumber,
   VAR_3->desc.bAlternateSetting);
}
