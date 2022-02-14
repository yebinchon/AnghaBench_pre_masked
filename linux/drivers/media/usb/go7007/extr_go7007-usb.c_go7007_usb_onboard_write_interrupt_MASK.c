
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_usb {int usbdev; } ;
struct go7007 {int* usb_buf; int dev; struct go7007_usb* hpi_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int ,int,int,int,int,int*,int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct go7007 *VAR_2,
      int VAR_3, int VAR_4)
{
 struct go7007_usb *VAR_5 = VAR_2->hpi_context;
 int VAR_6;
 int VAR_7 = 500;

 FUNC_1("WriteInterrupt: %04x %04x\n", VAR_3, VAR_4);

 VAR_2->usb_buf[0] = VAR_4 & 0xff;
 VAR_2->usb_buf[1] = VAR_4 >> 8;
 VAR_2->usb_buf[2] = VAR_3 & 0xff;
 VAR_2->usb_buf[3] = VAR_3 >> 8;
 VAR_2->usb_buf[4] = VAR_2->usb_buf[5] = VAR_2->usb_buf[6] = VAR_2->usb_buf[7] = 0;
 VAR_6 = FUNC_2(VAR_5->usbdev, FUNC_3(VAR_5->usbdev, 2), 0x00,
   VAR_1 | VAR_0, 0x55aa,
   0xf0f0, VAR_2->usb_buf, 8, VAR_7);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "error in WriteInterrupt: %d\n", VAR_6);
  return VAR_6;
 }
 return 0;
}
