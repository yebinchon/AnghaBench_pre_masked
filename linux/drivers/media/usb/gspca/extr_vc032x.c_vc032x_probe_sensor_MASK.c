
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sensor_info {int m1; int m2; int I2cAdd; int op; int IdAdd; int VpId; int sensorId; } ;
struct sd {int flags; scalar_t__ bridge; } ;
struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (struct sensor_info*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int,int) ;
 struct sensor_info* VAR_6 ;
 struct sensor_info* VAR_7 ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_8;
 int VAR_10, VAR_11;
 u16 VAR_12;
 const struct sensor_info *VAR_13;


 if (VAR_9->flags & VAR_2) {
  FUNC_4(VAR_8, 0xa0, 0x01, 0xb301);
  FUNC_4(VAR_8, 0x89, 0xf0ff, 0xffff);

 }

 FUNC_3(VAR_8, 0xa1, 0xbfcf, 1);
 FUNC_1(VAR_8, VAR_1, "vc032%d check sensor header %02x\n",
    VAR_9->bridge == VAR_0 ? 1 : 3, VAR_8->usb_buf[0]);
 if (VAR_9->bridge == VAR_0) {
  VAR_13 = VAR_6;
  VAR_11 = FUNC_0(VAR_6);
 } else {
  VAR_13 = VAR_7;
  VAR_11 = FUNC_0(VAR_7);
 }
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  FUNC_4(VAR_8, 0xa0, 0x02, 0xb334);
  FUNC_4(VAR_8, 0xa0, VAR_13->m1, 0xb300);
  FUNC_4(VAR_8, 0xa0, VAR_13->m2, 0xb300);
  FUNC_4(VAR_8, 0xa0, 0x01, 0xb308);
  FUNC_4(VAR_8, 0xa0, 0x0c, 0xb309);
  FUNC_4(VAR_8, 0xa0, VAR_13->I2cAdd, 0xb335);
  FUNC_4(VAR_8, 0xa0, VAR_13->op, 0xb301);
  VAR_12 = FUNC_2(VAR_8, VAR_13->IdAdd);
  if (VAR_12 == 0 && VAR_13->IdAdd == 0x82)
   VAR_12 = FUNC_2(VAR_8, 0x83);
  if (VAR_12 != 0) {
   FUNC_1(VAR_8, VAR_1, "Sensor ID %04x (%d)\n",
      VAR_12, VAR_10);
   if (VAR_12 == VAR_13->VpId)
    return VAR_13->sensorId;

   switch (VAR_12) {
   case 0x3130:
    return VAR_5;
   case 0x7673:
    return VAR_4;
   case 0x8243:
    return VAR_3;
   }
  }
  VAR_13++;
 }
 return -1;
}
