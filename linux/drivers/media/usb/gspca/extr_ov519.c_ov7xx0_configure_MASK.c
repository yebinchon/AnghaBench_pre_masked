
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {void* sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (struct gspca_dev*,char*,...) ;
 int FUNC_2 (struct sd*,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_10)
{
 struct gspca_dev *VAR_11 = (struct gspca_dev *)VAR_10;
 int VAR_12, VAR_13, VAR_14;

 FUNC_0(VAR_11, VAR_0, "starting OV7xx0 configuration\n");


 VAR_12 = FUNC_2(VAR_10, VAR_1);



 if (VAR_12 < 0) {
  FUNC_1(VAR_11, "Error detecting sensor type\n");
  return;
 }
 if ((VAR_12 & 3) == 3) {

  VAR_13 = FUNC_2(VAR_10, 0x0a);
  VAR_14 = FUNC_2(VAR_10, 0x0b);

  if (VAR_13 == 0x76 && (VAR_14 & 0xf0) == 0x70) {
   FUNC_0(VAR_11, VAR_0, "Sensor is an OV76%02x\n",
      VAR_14);
   VAR_10->sensor = VAR_8;
  } else {
   FUNC_0(VAR_11, VAR_0, "Sensor is an OV7610\n");
   VAR_10->sensor = VAR_2;
  }
 } else if ((VAR_12 & 3) == 1) {

  if (FUNC_2(VAR_10, 0x15) & 1) {
   FUNC_0(VAR_11, VAR_0, "Sensor is an OV7620AE\n");
   VAR_10->sensor = VAR_4;
  } else {
   FUNC_0(VAR_11, VAR_0, "Sensor is an OV76BE\n");
   VAR_10->sensor = VAR_9;
  }
 } else if ((VAR_12 & 3) == 0) {

  VAR_13 = FUNC_2(VAR_10, 0x0a);
  if (VAR_13 < 0) {
   FUNC_1(VAR_11, "Error detecting camera chip PID\n");
   return;
  }
  VAR_14 = FUNC_2(VAR_10, 0x0b);
  if (VAR_14 < 0) {
   FUNC_1(VAR_11, "Error detecting camera chip VER\n");
   return;
  }
  if (VAR_13 == 0x76) {
   switch (VAR_14) {
   case 0x30:
    FUNC_1(VAR_11, "Sensor is an OV7630/OV7635\n");
    FUNC_1(VAR_11, "7630 is not supported by this driver\n");
    return;
   case 0x40:
    FUNC_0(VAR_11, VAR_0, "Sensor is an OV7645\n");
    VAR_10->sensor = VAR_5;
    break;
   case 0x45:
    FUNC_0(VAR_11, VAR_0, "Sensor is an OV7645B\n");
    VAR_10->sensor = VAR_5;
    break;
   case 0x48:
    FUNC_0(VAR_11, VAR_0, "Sensor is an OV7648\n");
    VAR_10->sensor = VAR_6;
    break;
   case 0x60:
    FUNC_0(VAR_11, VAR_0, "Sensor is a OV7660\n");
    VAR_10->sensor = VAR_7;
    break;
   default:
    FUNC_1(VAR_11, "Unknown sensor: 0x76%02x\n",
       VAR_14);
    return;
   }
  } else {
   FUNC_0(VAR_11, VAR_0, "Sensor is an OV7620\n");
   VAR_10->sensor = VAR_3;
  }
 } else {
  FUNC_1(VAR_11, "Unknown image sensor version: %d\n",
     VAR_12 & 3);
 }
}
