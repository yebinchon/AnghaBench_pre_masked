
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bEncryptionValue; int bEncryptionType; } ;
struct wusb_dev {TYPE_1__ ccm1_etd; } ;
struct device {int dummy; } ;
struct usb_device {struct wusb_dev* wusb_dev; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int ,int,int) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int,int ,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_5, int VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 struct wusb_dev *VAR_9 = VAR_5->wusb_dev;

 if (VAR_6) {
  VAR_6 = VAR_9->ccm1_etd.bEncryptionValue;
 } else {

  VAR_6 = 0;
 }

 VAR_7 = FUNC_1(VAR_5, FUNC_2(VAR_5, 0),
   VAR_3,
   VAR_1 | VAR_4 | VAR_2,
   VAR_6, 0, ((void*)0), 0, VAR_0);
 if (VAR_7 < 0)
  FUNC_0(VAR_8, "Can't set device's WUSB encryption to "
   "%s (value %d): %d\n",
   FUNC_3(VAR_9->ccm1_etd.bEncryptionType),
   VAR_9->ccm1_etd.bEncryptionValue, VAR_7);
 return VAR_7;
}
