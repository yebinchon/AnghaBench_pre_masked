
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int i2c_intf; int i2c_addr; int sensor; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef size_t s32 ;
 int* VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int*) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_4, s32 VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_4;
 u8 VAR_7[8] = {VAR_6->i2c_intf, VAR_6->i2c_addr,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10};

 if (VAR_4->streaming)
  VAR_7[7] = 0x15;

 switch (VAR_6->sensor) {
 case 132:
 case 131:
 case 128:
 case 129:
 case 130:
  VAR_7[0] |= (2 << 4);
  VAR_7[3] = VAR_3[VAR_5];
  break;
 case 134:
  VAR_7[0] |= (3 << 4);
  VAR_7[2] = 0x35;
  VAR_7[3] = VAR_1[VAR_5] >> 8;
  VAR_7[4] = VAR_1[VAR_5];
  break;
 case 133:
  VAR_7[0] |= (3 << 4);
  VAR_7[2] = 0x2f;
  VAR_7[3] = VAR_1[VAR_5] >> 8;
  VAR_7[4] = VAR_1[VAR_5];
  break;
 case 135:
  VAR_7[0] |= (3 << 4);
  VAR_7[2] = 0x2f;
  VAR_7[3] = VAR_2[VAR_5] >> 8;
  VAR_7[4] = VAR_2[VAR_5];
  break;
 case 136:
  VAR_7[0] |= (2 << 4);
  VAR_7[2] = 0x30;
  VAR_7[3] = VAR_0[VAR_5];
  break;
 default:
  return;
 }
 FUNC_0(VAR_4, VAR_7);
}
