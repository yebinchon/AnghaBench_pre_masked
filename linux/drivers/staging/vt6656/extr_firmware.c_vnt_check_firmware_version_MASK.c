
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vnt_private {int firmware_version; TYPE_1__* usb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct vnt_private*,int ,int ,int ,int,int *) ;
 int FUNC_2 (struct vnt_private*) ;

int FUNC_3(struct vnt_private *VAR_4)
{
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_4, VAR_3, 0,
        VAR_2, 2,
        (u8 *)&VAR_4->firmware_version);
 if (VAR_5) {
  FUNC_0(&VAR_4->usb->dev,
   "Could not get firmware version: %d.\n", VAR_5);
  goto end;
 }

 FUNC_0(&VAR_4->usb->dev, "Firmware Version [%04x]\n",
  VAR_4->firmware_version);

 if (VAR_4->firmware_version == 0xFFFF) {
  FUNC_0(&VAR_4->usb->dev, "In Loader.\n");
  VAR_5 = -VAR_0;
  goto end;
 }

 if (VAR_4->firmware_version < VAR_1) {

  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5) {
   FUNC_0(&VAR_4->usb->dev,
    "Could not branch to SRAM: %d.\n", VAR_5);
  } else {
   VAR_5 = -VAR_0;
  }
 }

end:
 return VAR_5;
}
