
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; int contrast; int hue; int saturation; int sharpness; } ;
struct hdpvr_device {char* usbc_buf; int fw_ver; int usbc_mutex; int v4l2_dev; int udev; int flags; TYPE_1__ options; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int,int,int,int,char*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int *,char*,...) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,...) ;

__attribute__((used)) static int FUNC_10(struct hdpvr_device *VAR_4)
{

 int VAR_5, VAR_6 = -VAR_0;
 char VAR_7 = 0x38, VAR_8 = 0x81;
 char *VAR_9;

 FUNC_2(&VAR_4->usbc_mutex);
 VAR_5 = FUNC_4(VAR_4->udev,
         FUNC_5(VAR_4->udev, 0),
         VAR_8, 0x80 | VAR_7,
         0x0400, 0x0003,
         VAR_4->usbc_buf, 46,
         10000);
 if (VAR_5 != 46) {
  FUNC_8(&VAR_4->v4l2_dev,
    "unexpected answer of status request, len %d\n", VAR_5);
  goto unlock;
 }
 VAR_4->fw_ver = VAR_4->usbc_buf[1];

 VAR_4->usbc_buf[46] = '\0';
 FUNC_9(&VAR_4->v4l2_dev, "firmware version 0x%x dated %s\n",
     VAR_4->fw_ver, &VAR_4->usbc_buf[2]);

 if (VAR_4->fw_ver > 0x15) {
  VAR_4->options.brightness = 0x80;
  VAR_4->options.contrast = 0x40;
  VAR_4->options.hue = 0xf;
  VAR_4->options.saturation = 0x40;
  VAR_4->options.sharpness = 0x80;
 }

 switch (VAR_4->fw_ver) {
 case 132:
  VAR_4->flags &= ~VAR_1;
  break;
 case 128:
 case 131:
 case 130:
 case 129:
  VAR_4->flags |= VAR_1;
  break;
 default:
  FUNC_9(&VAR_4->v4l2_dev, "untested firmware, the driver might not work.\n");
  if (VAR_4->fw_ver >= 128)
   VAR_4->flags |= VAR_1;
  else
   VAR_4->flags &= ~VAR_1;
 }

 VAR_9 = VAR_4->usbc_buf+38;




 FUNC_0(VAR_9);





 FUNC_1(100);
 VAR_5 = FUNC_4(VAR_4->udev,
         FUNC_6(VAR_4->udev, 0),
         0xd1, 0x00 | VAR_7,
         0x0000, 0x0000,
         VAR_9, 8,
         10000);
 FUNC_7(VAR_2, VAR_3, &VAR_4->v4l2_dev,
   "magic request returned %d\n", VAR_5);

 VAR_6 = VAR_5 != 8;
unlock:
 FUNC_3(&VAR_4->usbc_mutex);
 return VAR_6;
}
