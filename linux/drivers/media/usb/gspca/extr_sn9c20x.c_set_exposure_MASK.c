
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int i2c_intf; int i2c_addr; int sensor; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef int s32 ;
 int FUNC_0 (struct gspca_dev*,int*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;
 u8 VAR_3[8] = {VAR_2->i2c_intf, VAR_2->i2c_addr,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10};
 int VAR_4;

 if (VAR_0->streaming)
  VAR_3[7] = 0x1e;

 switch (VAR_2->sensor) {
 case 131:
 case 130:
 case 128:
 case 129:
  if (VAR_1 > 547)
   VAR_4 = 547;
  else
   VAR_4 = VAR_1;
  VAR_3[0] |= (2 << 4);
  VAR_3[2] = 0x10;
  VAR_3[3] = VAR_4 >> 2;
  VAR_3[7] = 0x10;
  FUNC_0(VAR_0, VAR_3);
  VAR_3[2] = 0x04;
  VAR_3[3] = VAR_4 & 0x0003;
  VAR_3[7] = 0x10;
  FUNC_0(VAR_0, VAR_3);
  VAR_1 -= VAR_4;
  VAR_3[7] = 0x1e;
  VAR_3[0] |= (3 << 4);
  VAR_3[2] = 0x2d;
  VAR_3[3] = VAR_1;
  VAR_3[4] = VAR_1 >> 8;
  break;
 case 134:
 case 132:
 case 133:
  VAR_3[0] |= (3 << 4);
  VAR_3[2] = 0x09;
  VAR_3[3] = VAR_1 >> 8;
  VAR_3[4] = VAR_1;
  break;
 case 135:
  VAR_3[0] |= (4 << 4);
  VAR_3[2] = 0x25;
  VAR_3[3] = VAR_1 >> 5;
  VAR_3[4] = VAR_1 << 3;
  VAR_3[5] = 0;
  break;
 default:
  return;
 }
 FUNC_0(VAR_0, VAR_3);
}
