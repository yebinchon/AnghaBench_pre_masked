
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;



 char* VAR_0 ;
 char* VAR_1 ;



 char* VAR_2 ;
 char* VAR_3 ;

 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,char*,int *,int ,struct usb_device*,int ) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct usb_device*,char*,char*) ;
 int FUNC_3 (struct usb_device*,char*,...) ;
 int FUNC_4 (struct usb_device*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_9, unsigned int VAR_10)
{
 int VAR_11;
 char *VAR_12 = VAR_1;

 FUNC_1(VAR_9);
 FUNC_3(VAR_9, "pre-firmware device, uploading firmware\n");

 switch (VAR_10) {
 case 132:
  VAR_12 = VAR_0;
  break;
 case 131:
  VAR_12 = VAR_5;
  break;
 case 130:
  VAR_12 = VAR_3;
  break;
 case 129:
  VAR_12 = VAR_2;
  break;
 case 128:
  VAR_12 = VAR_4;
  break;
 }

 VAR_11 = FUNC_0(VAR_7, 1, VAR_12, &VAR_9->dev,
     VAR_6, VAR_9,
     VAR_8);
 if (VAR_11)
  FUNC_2(VAR_9, "firmware %s is not available\n", VAR_12);
 else
  FUNC_3(VAR_9, "loading firmware %s\n", VAR_12);

 FUNC_4(VAR_9);
 return VAR_11;
}
