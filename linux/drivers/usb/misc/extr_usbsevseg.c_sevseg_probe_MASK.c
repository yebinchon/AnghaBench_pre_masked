
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {int shadow_power; int textmode; int mode_msb; int mode_lsb; scalar_t__ has_interface_pm; struct usb_interface* intf; int udev; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 struct usb_sevsegdev* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_interface*,struct usb_sevsegdev*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_2,
 const struct usb_device_id *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_1(VAR_2);
 struct usb_sevsegdev *VAR_5 = ((void*)0);
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_2(sizeof(struct usb_sevsegdev), VAR_1);
 if (!VAR_5)
  goto error_mem;

 VAR_5->udev = FUNC_3(VAR_4);
 VAR_5->intf = VAR_2;
 FUNC_4(VAR_2, VAR_5);


 VAR_5->shadow_power = 1;
 VAR_5->has_interface_pm = 0;


 VAR_5->textmode = 0x02;
 VAR_5->mode_msb = 0x06;
 VAR_5->mode_lsb = 0x3f;

 FUNC_0(&VAR_2->dev, "USB 7 Segment device now attached\n");
 return 0;

error_mem:
 return VAR_6;
}
