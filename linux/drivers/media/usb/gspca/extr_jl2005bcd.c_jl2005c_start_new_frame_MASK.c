
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int* usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int*) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 static u8 VAR_5[2] = {0x7f, 0x01};

 VAR_3 = FUNC_2(VAR_1, VAR_5);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2 = 0;
 while (VAR_2 < 20 && !VAR_4) {

  VAR_3 = FUNC_1(VAR_1, 0x7e);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_4 = VAR_1->usb_buf[0];
  VAR_3 = FUNC_1(VAR_1, 0x7d);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_2++;
 }
 FUNC_0(VAR_1, VAR_0, "frame_brightness is 0x%02x\n",
    VAR_1->usb_buf[0]);
 return VAR_3;
}
