
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int sensor; int hstart; int vstart; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct gspca_dev*,int,int*) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1, int VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 u8 VAR_4;

 switch (VAR_3->sensor) {
 case 128:
  if (VAR_2 & VAR_0) {
   FUNC_1(VAR_1, 0x17, 0x1d);
   FUNC_1(VAR_1, 0x18, 0xbd);
   FUNC_1(VAR_1, 0x19, 0x01);
   FUNC_1(VAR_1, 0x1a, 0x81);
   FUNC_1(VAR_1, 0x12, 0x00);
   VAR_3->hstart = 140;
   VAR_3->vstart = 19;
  } else {
   FUNC_1(VAR_1, 0x17, 0x13);
   FUNC_1(VAR_1, 0x18, 0x63);
   FUNC_1(VAR_1, 0x19, 0x01);
   FUNC_1(VAR_1, 0x1a, 0x79);
   FUNC_1(VAR_1, 0x12, 0x40);
   VAR_3->hstart = 60;
   VAR_3->vstart = 11;
  }
  break;
 case 129:
  if (VAR_2 & VAR_0) {
   FUNC_1(VAR_1, 0x17, 0x1b);
   FUNC_1(VAR_1, 0x18, 0xbc);
   FUNC_1(VAR_1, 0x19, 0x01);
   FUNC_1(VAR_1, 0x1a, 0x82);
   FUNC_0(VAR_1, 0x12, &VAR_4);
   FUNC_1(VAR_1, 0x12, VAR_4 & 0x07);
  } else {
   FUNC_1(VAR_1, 0x17, 0x24);
   FUNC_1(VAR_1, 0x18, 0xc5);
   FUNC_1(VAR_1, 0x19, 0x00);
   FUNC_1(VAR_1, 0x1a, 0x3c);
   FUNC_0(VAR_1, 0x12, &VAR_4);
   FUNC_1(VAR_1, 0x12, (VAR_4 & 0x7) | 0x40);
  }
  break;
 case 130:
 case 131:
  if (VAR_2 & VAR_0) {
   FUNC_2(VAR_1, 0xf0, 0x0002);
   FUNC_2(VAR_1, 0xc8, 0x970b);
   FUNC_2(VAR_1, 0xf0, 0x0000);
  } else {
   FUNC_2(VAR_1, 0xf0, 0x0002);
   FUNC_2(VAR_1, 0xc8, 0x8000);
   FUNC_2(VAR_1, 0xf0, 0x0000);
  }
  break;
 }
}
