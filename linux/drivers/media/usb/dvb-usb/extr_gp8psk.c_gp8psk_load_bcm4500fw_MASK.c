
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct firmware {int* data; int size; } ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct dvb_usb_device*,int ,int,int ,int *,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int*,int const*,int) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct dvb_usb_device *VAR_5)
{
 int VAR_6;
 const struct firmware *VAR_7 = ((void*)0);
 const u8 *VAR_8;
 u8 *VAR_9;
 if ((VAR_6 = FUNC_8(&VAR_7, VAR_4,
     &VAR_5->udev->dev)) != 0) {
  FUNC_1("did not find the bcm4500 firmware file '%s' (status %d). You can use <kernel_dir>/scripts/get_dvb_firmware to get the firmware",
   VAR_4,VAR_6);
  return VAR_6;
 }

 VAR_6 = -VAR_0;

 if (FUNC_2(VAR_5, VAR_3,1,0,((void*)0), 0))
  goto out_rel_fw;

 FUNC_3("downloading bcm4500 firmware from file '%s'",VAR_4);

 VAR_8 = VAR_7->data;
 VAR_9 = FUNC_5(64, VAR_2);
 if (!VAR_9) {
  VAR_6 = -VAR_1;
  goto out_rel_fw;
 }

 while (VAR_8[0] != 0xff) {
  u16 VAR_10 = VAR_8[0] + 4;
  if (VAR_8 + VAR_10 >= VAR_7->data + VAR_7->size) {
   FUNC_1("failed to load bcm4500 firmware.");
   goto out_free;
  }
  if (VAR_10 > 64) {
   FUNC_1("firmware chunk size bigger than 64 bytes.");
   goto out_free;
  }

  FUNC_6(VAR_9, VAR_8, VAR_10);
  if (FUNC_0(VAR_5, VAR_9, VAR_10)) {
   FUNC_1("failed to load bcm4500 firmware.");
   goto out_free;
  }
  VAR_8 += VAR_10;
 }

 VAR_6 = 0;

out_free:
 FUNC_4(VAR_9);
out_rel_fw:
 FUNC_7(VAR_7);

 return VAR_6;
}
