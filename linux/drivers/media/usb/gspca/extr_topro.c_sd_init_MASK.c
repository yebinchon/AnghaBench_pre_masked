
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; int sensor; } ;
struct gspca_dev {int* usb_buf; } ;
struct cmd {int member_1; int const member_0; } ;


 int FUNC_0 (struct cmd const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;







 int FUNC_1 (struct gspca_dev*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*,int const) ;
 int FUNC_8 (struct gspca_dev*,struct cmd const*,int ) ;
 int FUNC_9 (struct gspca_dev*,int ) ;
 int FUNC_10 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_11(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 static const struct cmd VAR_8[] = {
  {134, 0x01},
  {133, 0x01},
  {132, 0x9f},
  {131, 0x9f},
  {130, 0x80},
  {129, 0x40},
 };
 static const struct cmd VAR_9[] = {
  {128, 0x2f},
  {132, 0x6f},
  {131, 0x40},
  {130, 0x9f},
  {129, 0xc1},
 };

 if (VAR_7->bridge == VAR_0)
  FUNC_8(VAR_6, VAR_8,
    FUNC_0(VAR_8));
 else
  FUNC_8(VAR_6, VAR_9,
    FUNC_0(VAR_9));
 FUNC_3(15);
 FUNC_7(VAR_6, 129);
 FUNC_2(VAR_6, VAR_2, "gpio: %02x\n", VAR_6->usb_buf[0]);
 if (VAR_5 >= 0) {
  VAR_7->sensor = VAR_5;
 } else {
  if (VAR_7->bridge == VAR_0) {

   switch (VAR_6->usb_buf[0] & 0x07) {
   case 0:
    VAR_7->sensor = VAR_4;
    break;
   case 1:
    VAR_7->sensor = VAR_3;
    break;
   }
  } else {
   int VAR_10;

   VAR_10 = FUNC_6(VAR_6);
   if (VAR_10 < 0) {
    FUNC_5("Unknown sensor %d - forced to soi763a\n",
     -VAR_10);
    VAR_10 = VAR_4;
   }
   VAR_7->sensor = VAR_10;
  }
 }
 if (VAR_7->sensor == VAR_4) {
  FUNC_4("Sensor soi763a\n");
  if (VAR_7->bridge == VAR_1) {
   FUNC_10(VAR_6);
  }
 } else {
  FUNC_4("Sensor cx0342\n");
  if (VAR_7->bridge == VAR_1) {
   FUNC_1(VAR_6);
  }
 }

 FUNC_9(VAR_6, 0);
 return 0;
}
