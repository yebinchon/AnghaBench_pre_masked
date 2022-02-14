
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zd_usb {int dummy; } ;
struct usb_device {int dev; } ;
struct firmware {int size; int data; } ;
typedef int fw_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct zd_usb*,char*,int,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct zd_usb*,struct firmware const*) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,int ,int *) ;
 int FUNC_10 (struct usb_device*,int ,int ,int ,int ) ;
 struct usb_device* FUNC_11 (struct zd_usb*) ;

__attribute__((used)) static int FUNC_12(struct zd_usb *VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 struct usb_device *VAR_7 = FUNC_11(VAR_3);
 const struct firmware *VAR_8 = ((void*)0);
 const struct firmware *VAR_9 = ((void*)0);
 char VAR_10[128];

 VAR_6 = FUNC_4(VAR_7);

 VAR_4 = FUNC_9(&VAR_8,
  FUNC_5(VAR_3, VAR_10, sizeof(VAR_10), "ub"),
  &VAR_7->dev);
 if (VAR_4)
  goto error;

 VAR_5 = FUNC_6(VAR_8->data, VAR_0);

 if (VAR_5 != VAR_6) {
  FUNC_2(&VAR_7->dev,
   "firmware version %#06x and device bootcode version "
   "%#06x differ\n", VAR_5, VAR_6);
  if (VAR_6 <= 0x4313)
   FUNC_3(&VAR_7->dev, "device has old bootcode, please "
    "report success or failure\n");

  VAR_4 = FUNC_7(VAR_3, VAR_8);
  if (VAR_4)
   goto error;
 } else {
  FUNC_0(&VAR_7->dev,
   "firmware device id %#06x is equal to the "
   "actual device id\n", VAR_5);
 }


 VAR_4 = FUNC_9(&VAR_9,
  FUNC_5(VAR_3, VAR_10, sizeof(VAR_10), "uphr"),
  &VAR_7->dev);
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_10(VAR_7, VAR_9->data, VAR_9->size, VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_1(&VAR_7->dev,
   "Could not upload firmware code uph. Error number %d\n",
   VAR_4);
 }


error:
 FUNC_8(VAR_8);
 FUNC_8(VAR_9);
 return VAR_4;
}
