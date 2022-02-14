
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; } ;
struct sensor_w_data {int member_0; int member_1; int member_3; TYPE_2__ member_2; } ;
struct sd {int sensor_type; } ;
struct TYPE_3__ {int width; } ;
struct gspca_dev {int* usb_buf; TYPE_1__ pixfmt; } ;
typedef int __u8 ;


 int FUNC_0 (struct sensor_w_data const*) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,struct sensor_w_data const*,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 __u8 *VAR_2 = VAR_0->usb_buf;
 int VAR_3;
 static const __u8 VAR_4[] = {
  0x00,
  0x0d,
  0x01,
  0x00,
  0x00,
  0x13,
  0x00,
  0x00,
  0x00,
  0x50,
  0xc0
 };



 FUNC_1(VAR_2, VAR_4, 11);
 if (VAR_1->sensor_type)
  VAR_2[5] = 0xbb;

 switch (VAR_0->pixfmt.width) {
 case 160:
  VAR_2[9] |= 0x04;

 case 320:
 default:
  VAR_2[3] = 0x28;
  VAR_2[4] = 0x3c;
  VAR_2[6] = 0x14;
  VAR_2[8] = 0x1a + VAR_1->sensor_type;
  break;
 case 176:
  VAR_2[9] |= 0x04;

 case 352:
  VAR_2[3] = 0x2c;
  VAR_2[4] = 0x48;
  VAR_2[6] = 0x06;
  VAR_2[8] = 0x06 - VAR_1->sensor_type;
  break;
 }
 VAR_3 = FUNC_2(VAR_0, 11);
 if (VAR_3 < 0)
  return VAR_3;

 if (!VAR_1->sensor_type) {
  static const struct sensor_w_data VAR_5[] = {
   {0x02, 0x00, {0x03, 0x5a, 0xb5, 0x01,
          0x0f, 0x14, 0x0f, 0x10}, 8},
   {0x0c, 0x00, {0x04, 0x01, 0x01, 0x00, 0x1f}, 5},
   {0x12, 0x00, 0x07, 1},
   {0x1f, 0x00, 0x06, 1},
   {0x27, 0x00, 0x04, 1},
   {0x29, 0x00, 0x0c, 1},
   {0x40, 0x00, {0x40, 0x00, 0x04}, 3},
   {0x50, 0x00, 0x60, 1},
   {0x60, 0x00, 0x06, 1},
   {0x6b, 0x00, {0x85, 0x85, 0xc8, 0xc8, 0xc8, 0xc8}, 6},
   {0x72, 0x00, {0x1e, 0x56}, 2},
   {0x75, 0x00, {0x58, 0x40, 0xa2, 0x02, 0x31, 0x02,
          0x31, 0x80, 0x00}, 9},
   {0x11, 0x00, 0x01, 1},
   {0, 0, 0, 0}
  };
  VAR_3 = FUNC_3(VAR_0, VAR_5,
      FUNC_0(VAR_5));
 } else {
  static const struct sensor_w_data VAR_6[] = {

   {0x02, 0x00, 0x10, 1},
   {0x05, 0x01, 0x22, 1},
   {0x06, 0x01, 0x00, 1},
   {0x09, 0x02, 0x0e, 1},
   {0x0a, 0x02, 0x05, 1},
   {0x0b, 0x02, 0x05, 1},
   {0x0c, 0x02, 0x0f, 1},
   {0x0d, 0x02, 0x07, 1},
   {0x0e, 0x02, 0x0c, 1},
   {0x0f, 0x00, 0x00, 1},
   {0x10, 0x00, 0x06, 1},
   {0x11, 0x00, 0x07, 1},
   {0x12, 0x00, 0x00, 1},
   {0x13, 0x00, 0x01, 1},
   {0, 0, 0, 0}
  };

  VAR_0->usb_buf[0] = 0x0a;
  VAR_0->usb_buf[1] = 0x00;
  VAR_3 = FUNC_2(VAR_0, 2);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_3 = FUNC_3(VAR_0, VAR_6,
      FUNC_0(VAR_6));
 }
 return VAR_3;
}
