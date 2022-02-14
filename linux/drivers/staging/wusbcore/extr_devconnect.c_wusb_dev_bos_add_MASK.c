
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusb_dev {int * wusb_cap_descr; struct usb_bos_descriptor* bos; } ;
struct device {int dummy; } ;
struct usb_device {struct device dev; } ;
struct usb_bos_descriptor {int wTotalLength; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,size_t,...) ;
 int FUNC_1 (struct usb_bos_descriptor*) ;
 struct usb_bos_descriptor* FUNC_2 (size_t,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,struct usb_bos_descriptor*,size_t) ;
 int FUNC_5 (struct usb_device*,struct wusb_dev*,struct usb_bos_descriptor*,int) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_3,
       struct wusb_dev *VAR_4)
{
 ssize_t VAR_5;
 struct device *VAR_6 = &VAR_3->dev;
 struct usb_bos_descriptor *VAR_7;
 size_t VAR_8 = 32, VAR_9 = 4;

 VAR_7 = FUNC_2(VAR_8, VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_5 = FUNC_4(VAR_3, VAR_2, 0, VAR_7, VAR_9);
 if (VAR_5 < 4) {
  FUNC_0(VAR_6, "Can't get BOS descriptor or too short: %zd\n",
   VAR_5);
  goto error_get_descriptor;
 }
 VAR_9 = FUNC_3(VAR_7->wTotalLength);
 if (VAR_9 >= VAR_8) {
  FUNC_1(VAR_7);
  VAR_8 = VAR_9;
  VAR_7 = FUNC_2(VAR_8, VAR_1);
  if (VAR_7 == ((void*)0))
   return -VAR_0;
 }
 VAR_5 = FUNC_4(VAR_3, VAR_2, 0, VAR_7, VAR_9);
 if (VAR_5 < 0 || VAR_5 != VAR_9) {
  FUNC_0(VAR_6, "Can't get  BOS descriptor or too short (need "
   "%zu bytes): %zd\n", VAR_9, VAR_5);
  goto error_get_descriptor;
 }
 if (VAR_5 < sizeof(*VAR_7)
     || FUNC_3(VAR_7->wTotalLength) != VAR_9) {
  FUNC_0(VAR_6, "Can't get  BOS descriptor or too short (need "
   "%zu bytes): %zd\n", VAR_9, VAR_5);
  goto error_get_descriptor;
 }

 VAR_5 = FUNC_5(VAR_3, VAR_4, VAR_7, VAR_5);
 if (VAR_5 < 0)
  goto error_bad_bos;
 VAR_4->bos = VAR_7;
 return 0;

error_bad_bos:
error_get_descriptor:
 FUNC_1(VAR_7);
 VAR_4->wusb_cap_descr = ((void*)0);
 return VAR_5;
}
