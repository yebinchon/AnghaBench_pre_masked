
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; int sensor; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,char*,...) ;
 int FUNC_2 (struct sd*,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_6)
{
 struct gspca_dev *VAR_7 = (struct gspca_dev *)VAR_6;
 int VAR_8, VAR_9;

 if (VAR_6->bridge != VAR_0) {
  FUNC_1(VAR_7, "error hires sensors only supported with ovfx2\n");
  return;
 }

 FUNC_0(VAR_7, VAR_1, "starting ov hires configuration\n");


 VAR_8 = FUNC_2(VAR_6, 0x0a);
 VAR_9 = FUNC_2(VAR_6, 0x0b);

 switch (VAR_8) {
 case 0x96:
  switch (VAR_9) {
  case 0x40:
   FUNC_0(VAR_7, VAR_1, "Sensor is a OV2610\n");
   VAR_6->sensor = VAR_2;
   return;
  case 0x41:
   FUNC_0(VAR_7, VAR_1, "Sensor is a OV2610AE\n");
   VAR_6->sensor = VAR_3;
   return;
  case 0xb1:
   FUNC_0(VAR_7, VAR_1, "Sensor is a OV9600\n");
   VAR_6->sensor = VAR_5;
   return;
  }
  break;
 case 0x36:
  if ((VAR_9 & 0x0f) == 0x00) {
   FUNC_0(VAR_7, VAR_1, "Sensor is a OV3610\n");
   VAR_6->sensor = VAR_4;
   return;
  }
  break;
 }
 FUNC_1(VAR_7, "Error unknown sensor type: %02x%02x\n",
    VAR_8, VAR_9);
}
