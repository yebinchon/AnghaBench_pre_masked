
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_descriptor {int dummy; } ;
struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct usb_device_descriptor*) ;
 struct usb_device_descriptor* FUNC_4 (int,int ) ;
 struct usb_interface* FUNC_5 (struct device*) ;
 int FUNC_6 (struct usb_device*,int,int ,int,int,int ,struct usb_device_descriptor*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_7,
  struct device_attribute *VAR_8, const char *VAR_9, size_t VAR_10)
{
 struct usb_interface *VAR_11 = FUNC_5(VAR_7);
 struct usb_device *VAR_12;
 struct usb_device_descriptor *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_11);
 if (!VAR_12) {
  FUNC_2(VAR_7, "failed to create lvs device\n");
  VAR_14 = -VAR_0;
  goto free_desc;
 }

 VAR_14 = FUNC_6(VAR_12, (VAR_2 << 30) | VAR_4,
   VAR_6, VAR_4, VAR_5 << 8,
   0, VAR_13, sizeof(*VAR_13),
   VAR_3);
 if (VAR_14 < 0)
  FUNC_2(VAR_7, "can't read device descriptor %d\n", VAR_14);

 FUNC_1(VAR_12);

free_desc:
 FUNC_3(VAR_13);

 if (VAR_14 < 0)
  return VAR_14;

 return VAR_10;
}
