
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int reg01; int reg17; int sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int const*) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 static const u8 VAR_8[] =
  { 0xa1, 0x11, 0x02, 0x09, 0x00, 0x00, 0x00, 0x10 };
 static const u8 VAR_9[] =
  { 0xb1, 0x5d, 0x07, 0x00, 0x00, 0x00, 0x00, 0x10 };
 static const u8 VAR_10[] =
  { 0xa1, 0x21, 0x76, 0x20, 0x00, 0x00, 0x00, 0x10 };
 static const u8 VAR_11[] =
  { 0xa1, 0x21, 0x12, 0x80, 0x00, 0x00, 0x00, 0x10 };
 u8 VAR_12;
 u8 VAR_13;

 VAR_12 = VAR_7->reg01;
 VAR_13 = VAR_7->reg17 & ~VAR_2;
 switch (VAR_7->sensor) {
 case 141:
 case 140:
 case 130:
 case 128:
  VAR_12 |= VAR_0;
  FUNC_1(VAR_6, 0x01, VAR_12);
  VAR_12 &= ~(VAR_0 | VAR_5);
  FUNC_1(VAR_6, 0x01, VAR_12);

  break;
 case 139:
  VAR_12 &= ~VAR_5;
  FUNC_1(VAR_6, 0x01, VAR_12);
  FUNC_0(VAR_6, VAR_8);
  break;
 case 138:
 case 137:
  VAR_12 &= ~VAR_5;
  FUNC_1(VAR_6, 0x01, VAR_12);

  FUNC_0(VAR_6, VAR_9);
  break;
 case 136:
 case 135:
 case 131:
  VAR_12 &= ~VAR_5;
  FUNC_1(VAR_6, 0x01, VAR_12);
  break;
 case 134:
 case 133:
  VAR_12 &= ~VAR_5;
  FUNC_1(VAR_6, 0x01, VAR_12);
  FUNC_0(VAR_6, VAR_10);
  break;
 case 132:
  VAR_12 &= ~VAR_5;
  FUNC_1(VAR_6, 0x01, VAR_12);
  break;
 case 129:
  FUNC_0(VAR_6, VAR_11);
  break;
 }

 VAR_12 |= VAR_1;
 FUNC_1(VAR_6, 0x01, VAR_12);
 VAR_12 |= VAR_4;
 FUNC_1(VAR_6, 0x01, VAR_12);
 FUNC_1(VAR_6, 0x17, VAR_13);
 VAR_12 &= ~VAR_3;
 FUNC_1(VAR_6, 0x01, VAR_12);
 VAR_12 |= VAR_0;
 FUNC_1(VAR_6, 0x01, VAR_12);


}
