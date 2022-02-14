
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; int bridge; } ;
struct gspca_dev {TYPE_1__* gain; } ;
typedef int __u8 ;
struct TYPE_4__ {int sensor_addr; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int*) ;
 int FUNC_1 (struct gspca_dev*,int,int*,int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 u8 VAR_4 = VAR_2->gain->val;

 switch (VAR_3->sensor) {
 case 135: {
  __u8 VAR_5[] =
   {0xc0, 0x11, 0x31, 0x00, 0x00, 0x00, 0x00, 0x17};

  VAR_5[3] = 0x3f - VAR_4;
  VAR_5[4] = 0x3f - VAR_4;
  VAR_5[5] = 0x3f - VAR_4;

  FUNC_0(VAR_2, VAR_5);
  break;
 }
 case 130:
 case 128: {
  __u8 VAR_6[] =
   {0x30, 0x11, 0x02, 0x20, 0x70, 0x00, 0x00, 0x10};

  VAR_6[4] = 255 - VAR_4;
  FUNC_0(VAR_2, VAR_6);
  break;
 }
 case 129: {
  __u8 VAR_7[] = {
   0xb0, 0x61, 0x02, 0x00, 0x10, 0x00, 0x00, 0x17 };
  VAR_4 = 255 - VAR_4;

  VAR_7[3] |= (VAR_4 & 0x80) >> 7;
  VAR_7[3] |= (VAR_4 & 0x40) >> 5;
  VAR_7[3] |= (VAR_4 & 0x20) >> 3;
  VAR_7[3] |= (VAR_4 & 0x10) >> 1;
  VAR_7[3] |= (VAR_4 & 0x08) << 1;
  VAR_7[3] |= (VAR_4 & 0x04) << 3;
  VAR_7[3] |= (VAR_4 & 0x02) << 5;
  VAR_7[3] |= (VAR_4 & 0x01) << 7;
  FUNC_0(VAR_2, VAR_7);
  break;
 }
 case 134:
 case 133: {
  __u8 VAR_8[] = {0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10};





  if (VAR_3->sensor == 133 && VAR_4 >= 32)
   VAR_4 += 16;

  VAR_8[1] = VAR_1[VAR_3->sensor].sensor_addr;
  VAR_8[3] = VAR_4;
  FUNC_0(VAR_2, VAR_8);
  break;
 }
 case 132:
 case 131: {
  __u8 VAR_9[] =
   {0xa0, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x15};
  __u8 VAR_10[] =
   {0xc0, 0x40, 0x07, 0x00, 0x00, 0x00, 0x00, 0x15};
  __u8 VAR_11[] =
   {0xa0, 0x40, 0x11, 0x01, 0x00, 0x00, 0x00, 0x16};


  if (VAR_3->sensor == 132) {
   VAR_9[2] = 0x0e;
   VAR_10[0] = 0xd0;
   VAR_10[2] = 0x09;
   VAR_11[2] = 0x13;
  }

  VAR_9[3] = VAR_4;
  VAR_10[3] = VAR_4 >> 1;
  VAR_10[4] = VAR_4 >> 1;
  VAR_10[5] = VAR_4 >> 1;
  VAR_10[6] = VAR_4 >> 1;

  FUNC_0(VAR_2, VAR_9);
  FUNC_0(VAR_2, VAR_10);
  FUNC_0(VAR_2, VAR_11);
  break;
 }
 default:
  if (VAR_3->bridge == VAR_0) {
   u8 VAR_12[3] = { VAR_4, VAR_4, VAR_4 };
   FUNC_1(VAR_2, 0x05, VAR_12, 3);
  } else {
   u8 VAR_13[2];
   VAR_13[0] = VAR_4 << 4 | VAR_4;
   VAR_13[1] = VAR_4;
   FUNC_1(VAR_2, 0x10, VAR_13, 2);
  }
 }
}
