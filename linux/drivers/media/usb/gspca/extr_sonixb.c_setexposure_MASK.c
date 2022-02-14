
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sd {int sensor; int reg11; } ;
struct TYPE_5__ {int width; } ;
struct gspca_dev {TYPE_3__* exposure; int usb_err; TYPE_2__* autogain; TYPE_1__ pixfmt; } ;
typedef int __u8 ;
struct TYPE_8__ {int sensor_addr; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {int val; } ;
 int FUNC_0 (struct gspca_dev*,int const*) ;
 int FUNC_1 (struct gspca_dev*,int,int*,int) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 switch (VAR_2->sensor) {
 case 134: {


  __u8 VAR_3[] = {0xc0, 0x11, 0x25, 0x00, 0x00, 0x00, 0x00, 0x17};
  u16 VAR_4 = VAR_1->exposure->val;

  VAR_3[3] = VAR_4 >> 8;
  VAR_3[4] = VAR_4 & 0xff;
  FUNC_0(VAR_1, VAR_3);
  break;
 }
 case 129:
 case 128: {



  u8 VAR_5 = VAR_1->exposure->val;

  VAR_5 = (VAR_5 << 4) | 0x0b;
  FUNC_1(VAR_1, 0x19, &VAR_5, 1);
  break;
 }
 case 133:
 case 132: {
  __u8 VAR_6[] = {0xb0, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10};
  int VAR_7, VAR_8, VAR_9;







  if (VAR_2->sensor == 133) {
   VAR_9 = 0x4d;
   VAR_6[4] = 0xc0;
  } else
   VAR_9 = 0x41;

  VAR_8 = (15 * VAR_1->exposure->val + 999) / 1000;
  if (VAR_8 < 1)
   VAR_8 = 1;
  else if (VAR_8 > 16)
   VAR_8 = 16;




  if (VAR_1->pixfmt.width == 640 && VAR_8 < 4)
   VAR_8 = 4;




  VAR_7 = (VAR_1->exposure->val * 15 * VAR_9)
    / (1000 * VAR_8);





  if (VAR_1->autogain->val && VAR_7 < 10)
   VAR_7 = 10;
  else if (VAR_7 > VAR_9)
   VAR_7 = VAR_9;


  VAR_6[1] = VAR_0[VAR_2->sensor].sensor_addr;
  VAR_6[3] = VAR_7;
  VAR_6[4] |= VAR_8 - 1;


  if (VAR_2->reg11 == VAR_8)
   VAR_6[0] = 0xa0;

  FUNC_0(VAR_1, VAR_6);
  if (VAR_1->usb_err == 0)
   VAR_2->reg11 = VAR_8;
  break;
 }
 case 130: {
  __u8 VAR_10[] =
   {0xb0, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x16};
  __u8 VAR_11[] =
   {0xa0, 0x40, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x16};
  const __u8 VAR_12[] =
   {0xa0, 0x40, 0x11, 0x01, 0x00, 0x00, 0x00, 0x16};
  int VAR_13;
  if (VAR_1->exposure->val < 200) {
   VAR_11[3] = 255 - (VAR_1->exposure->val * 255)
      / 200;
   VAR_13 = 500;
  } else {



   VAR_13 = (VAR_1->exposure->val - 200)
       * 1000 / 229 + 500;
  }

  VAR_10[3] = VAR_13 >> 6;
  VAR_10[4] = VAR_13 & 0x3f;
  FUNC_0(VAR_1, VAR_10);
  FUNC_0(VAR_1, VAR_11);
  FUNC_0(VAR_1, VAR_12);
  break;
 }
 case 131: {
  __u8 VAR_14[] =
   {0xb1, 0x40, 0x03, 0x00, 0x00, 0x00, 0x00, 0x14};
  __u8 VAR_15[] =
   {0xa1, 0x40, 0x05, 0x00, 0x00, 0x00, 0x00, 0x14};
  const __u8 VAR_16[] =
   {0xa1, 0x40, 0x13, 0x01, 0x00, 0x00, 0x00, 0x14};
  int VAR_17;



  if (VAR_1->exposure->val < 150) {
   VAR_15[3] = 150 - VAR_1->exposure->val;
   VAR_17 = 300;
  } else {



   VAR_17 = (VAR_1->exposure->val - 150)
      * 1000 / 230 + 300;
  }

  VAR_14[3] = VAR_17 >> 4;
  VAR_14[4] = VAR_17 & 0x0f;
  FUNC_0(VAR_1, VAR_14);
  FUNC_0(VAR_1, VAR_15);
  FUNC_0(VAR_1, VAR_16);
  break;
 }
 default:
  break;
 }
}
