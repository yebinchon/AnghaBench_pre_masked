
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sensor_s {int i2c_addr; int i2c_dum; } ;
struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;




 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int ,int*,int) ;
 struct sensor_s* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2, s32 VAR_3, s32 VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_2;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 const struct sensor_s *VAR_11;
 u16 VAR_12;
 u8 VAR_13[15];

 VAR_7 = VAR_3;
 VAR_6 = 0;
 VAR_12 = VAR_0;

 switch (VAR_5->sensor) {
 case 129:
 case 128:
  VAR_10 = VAR_5->sensor == 129 ? 0x210 : 0x26f;
  if (VAR_7 >= VAR_10) {
   VAR_8 = 0;
   VAR_9 = VAR_7;
  } else {
   VAR_8 = VAR_10 - VAR_7;
   VAR_9 = VAR_10;
  }
  VAR_13[VAR_6++] = VAR_8 >> 8;
  VAR_13[VAR_6++] = VAR_8;
  VAR_13[VAR_6++] = VAR_9 >> 8;
  VAR_13[VAR_6++] = VAR_9;
  VAR_13[VAR_6++] = VAR_4;
  break;
 default:


  VAR_12 |= 0x0100;
  VAR_11 = &VAR_1[VAR_5->sensor];
  VAR_13[VAR_6++] = VAR_11->i2c_addr;
  VAR_13[VAR_6++] = 0x08;
  VAR_13[VAR_6++] = 0x09;
  VAR_13[VAR_6++] = VAR_7 >> 8;
  VAR_13[VAR_6++] = VAR_11->i2c_dum;
  VAR_13[VAR_6++] = VAR_7;
  VAR_13[VAR_6++] = 0x35;
  VAR_13[VAR_6++] = 0x00;
  VAR_13[VAR_6++] = VAR_11->i2c_dum;
  VAR_13[VAR_6++] = 0x80 + VAR_4 / 2;
  VAR_13[VAR_6++] = 0x00;
  VAR_13[VAR_6++] = 0x00;
  VAR_13[VAR_6++] = 0x00;
  VAR_13[VAR_6++] = 0x00;
  VAR_13[VAR_6++] = 0x83;
  break;
 }
 FUNC_0(VAR_2, VAR_12, 0, VAR_13, VAR_6);
}
