
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {int* usb_buf; int dev; int usb_lock; TYPE_1__ pixfmt; int gain; int exposure; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (int ,int ,int*,int,int*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct gspca_dev*,int,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_8(struct gspca_dev *VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 u8 *VAR_7 = VAR_1->usb_buf;
 s32 VAR_8 = FUNC_6(VAR_1->exposure);
 s32 VAR_9 = FUNC_6(VAR_1->gain);

 FUNC_0(VAR_7, 0, 16);
 VAR_7[0] = VAR_9;
 if (VAR_1->pixfmt.width == 256)
  VAR_7[1] |= 0x01;
 if (VAR_1->pixfmt.height <= 122) {
  VAR_7[1] |= 0x10;
  VAR_5 = VAR_1->pixfmt.height * 2;
 } else
  VAR_5 = VAR_1->pixfmt.height;
 VAR_7[2] = 0x90;
 if (VAR_5 <= 200)
  VAR_7[3] = 0x06;
 else if (VAR_5 <= 242)
  VAR_7[3] = 0x07;
 else
  VAR_7[3] = 0x08;

 if (VAR_8 < 256) {

  VAR_7[4] = 255 - VAR_8;
  VAR_7[5] = 0x00;
  VAR_7[6] = 0x00;
  VAR_7[7] = 0x01;
 } else {

  VAR_7[4] = 0x00;
  VAR_7[5] = 0x00;
  VAR_7[6] = VAR_8 & 0xFF;
  VAR_7[7] = VAR_8 >> 8;
 }
 VAR_7[8] = ((244 - VAR_5) / 2) & ~0x01;


 FUNC_1(&VAR_1->usb_lock);
 VAR_4 = FUNC_7(VAR_1, 0x51, 0x80, 0, VAR_7, 16);
 FUNC_2(&VAR_1->usb_lock);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_1->dev,
      FUNC_5(VAR_1->dev, 0x81),
      VAR_2, VAR_3, &VAR_6, 10000);

 if (VAR_4 < 0 || VAR_6 != VAR_3) {
  FUNC_3("bulk read fail (%d) len %d/%d\n",
         VAR_4, VAR_6, VAR_3);
  return -VAR_0;
 }
 return 0;
}
